/*
 * XREFs of MiLockAddressSpaceToo @ 0x140310450
 * Callers:
 *     MiPrepareVadDelete @ 0x14079D5B4 (MiPrepareVadDelete.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v4; // rbp
  ULONG_PTR v5; // rsi
  __int64 v6; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v8; // rcx
  int SessionId; // eax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = KeGetCurrentThread();
  v5 = a1 + 1224;
  v6 = 0LL;
  _disable();
  AbEntrySummary = v4->AbEntrySummary;
  if ( v4->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 1224, (__int64)v4)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, AbEntrySummary);
    v4->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    _enable();
    v6 = (__int64)(&v4[1].Process + 12 * v8);
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(v5);
    MiUnlockVad((__int64)CurrentThread, a2);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    return 1LL;
  }
}
