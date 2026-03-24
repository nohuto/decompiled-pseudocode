/*
 * XREFs of MiTryLockVad @ 0x140381F68
 * Callers:
 *     MiDeprioritizeVad @ 0x140381E94 (MiDeprioritizeVad.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // esi
  unsigned __int8 AbEntrySummary; // cl
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // rcx
  bool v12; // zf
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v16; // [rsp+50h] [rbp+18h] BYREF

  if ( *(char *)(a1 + 1304) < 0 )
    return 0LL;
  v16 = 0;
  v5 = a2 + 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = 1;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        goto LABEL_6;
      EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2 + 40);
      goto LABEL_5;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v9, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v9);
  v10 = (ULONG_PTR)&CurrentThread->LockEntries[v9];
LABEL_5:
  if ( v10 )
  {
    if ( v5 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v5 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_7;
  }
LABEL_6:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_7:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, (__int64)&v16, a4);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    if ( v10 )
      KeAbPostReleaseEx(v5, v10);
    return 0;
  }
  else
  {
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *(_BYTE *)(a1 + 1304) |= 0x80u;
  }
  return v7;
}
