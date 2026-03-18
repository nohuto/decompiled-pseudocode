/*
 * XREFs of ObpSlowReferenceDeviceMap @ 0x14069D2C0
 * Callers:
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x14069CE84 (ObpReferenceDeviceMapFastRef.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 */

volatile signed __int64 *__fastcall ObpSlowReferenceDeviceMap(_QWORD *a1)
{
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  signed __int64 *v4; // rdi
  volatile signed __int64 *v5; // rbx
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL);
  v5 = (volatile signed __int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64(v5 + 30, 0xFuLL) <= 0 )
      __fastfail(0xEu);
    _m_prefetchw(a1);
    v9 = *a1;
    while ( (unsigned __int64)(v9 & 0xF) + 14 <= 0xF && v5 == (volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(a1, v9 + 14, v9);
      if ( v10 == v9 )
        goto LABEL_2;
    }
    ObDereferenceDeviceMap(v5, 0xEu);
  }
LABEL_2:
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v6 = KeGetCurrentThread();
  v7 = v6->SpecialApcDisable++ == -1;
  if ( v7 && ($CEA84C04E3712D858E5667A507841A2A *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
