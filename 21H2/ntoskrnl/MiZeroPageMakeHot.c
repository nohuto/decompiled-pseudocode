/*
 * XREFs of MiZeroPageMakeHot @ 0x1405B2968
 * Callers:
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 * Callees:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140235D34 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiSetZeroPageThreadPriority @ 0x14028F8E4 (MiSetZeroPageThreadPriority.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     MiChangePageHeatImmediate @ 0x1405B766C (MiChangePageHeatImmediate.c)
 */

_UNKNOWN **__fastcall MiZeroPageMakeHot(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v10; // rdi
  int v12[14]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  result = &retaddr;
  v12[0] = 0;
  v14 = 0;
  ++dword_140C29778[a2];
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    MiSetZeroPageThreadPriority(a3);
    --CurrentThread->SpecialApcDisable;
    v10 = (signed __int64 *)(a4 + 192);
    ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
    if ( a2 == (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(a1, v12, &v14) )
      MiChangePageHeatImmediate(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), a2, 1LL);
    else
      ++dword_140C29788;
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return (_UNKNOWN **)MiSetZeroPageThreadPriority(a3);
  }
  return result;
}
