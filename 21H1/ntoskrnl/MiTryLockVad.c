/*
 * XREFs of MiTryLockVad @ 0x14037F148
 * Callers:
 *     MiDeprioritizeVad @ 0x14037F074 (MiDeprioritizeVad.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v5; // esi
  unsigned __int8 AbEntrySummary; // cl
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // r9
  bool v13; // zf
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v17; // [rsp+50h] [rbp+18h] BYREF

  if ( *(char *)(a1 + 1304) < 0 )
    return 0LL;
  v17 = 0;
  v3 = a2 + 40;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = 1;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        goto LABEL_6;
      EtwTraceAutoBoostEntryExhaustion(CurrentThread, a2 + 40);
      goto LABEL_5;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (ULONG_PTR)&CurrentThread->LockEntries[v7];
LABEL_5:
  if ( v8 )
  {
    if ( v3 >= 0xFFFF800000000000uLL && byte_140C4F908[((v3 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v8 + 40) = SessionId;
    *(_QWORD *)(v8 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_7;
  }
LABEL_6:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_7:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v17);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10, v9, v11, v12);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v3, v8);
    return 0;
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_BYTE *)(a1 + 1304) |= 0x80u;
  }
  return v5;
}
