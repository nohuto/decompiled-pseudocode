/*
 * XREFs of MiLockAddressSpaceToo @ 0x1402AB1C8
 * Callers:
 *     MiPrepareVadDelete @ 0x14063AD6C (MiPrepareVadDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 */

_QWORD *__fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rbp
  struct _KTHREAD *v5; // rbx
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  __int64 v8; // rdi
  int SessionId; // eax
  _QWORD *result; // rax
  __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v17 = 0;
  v4 = a1 + 1224;
  v5 = KeGetCurrentThread();
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
    goto LABEL_10;
  }
  AbEntrySummary = v5->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_3;
  if ( v5->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v5->AbEntrySummary;
LABEL_3:
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    v8 = (__int64)&v5->LockEntries[v7];
    goto LABEL_4;
  }
  v8 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_10;
  EtwTraceAutoBoostEntryExhaustion(v5, v4);
LABEL_4:
  if ( !v8 )
  {
LABEL_10:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_11;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140C4F908[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
  --v5->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)v5, v4, &v17);
  if ( v5->SpecialApcDisable++ == -1 )
  {
    result = &v5->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v11);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v4);
    MiUnlockVad((__int64)CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    return (_QWORD *)KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v14, v15, v16);
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
  }
  return result;
}
