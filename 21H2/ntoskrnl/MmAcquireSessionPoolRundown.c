/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x1406A8E08
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x140230C48 (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rsi
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[25];
  if ( !a1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50628, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C50628);
    KeAbPostRelease((ULONG_PTR)&qword_140C50628);
    v3 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C50628, 0LL);
  if ( (*(_DWORD *)(v2 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50628, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C50628);
  KeAbPostRelease((ULONG_PTR)&qword_140C50628);
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
