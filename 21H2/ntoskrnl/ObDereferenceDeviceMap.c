/*
 * XREFs of ObDereferenceDeviceMap @ 0x14069C9C0
 * Callers:
 *     ObpSetDeviceMap @ 0x14069B8FC (ObpSetDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 *     ObpDeleteDeviceMap @ 0x14069C07C (ObpDeleteDeviceMap.c)
 *     ObClearProcessDeviceMap @ 0x14069C104 (ObClearProcessDeviceMap.c)
 *     ObpDereferenceCurrentDeviceMap @ 0x14069C7C0 (ObpDereferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14069CAE8 (ObpSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     ObpSlowReferenceDeviceMap @ 0x14069D2C0 (ObpSlowReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     ObCleanupSiloState @ 0x140983EC0 (ObCleanupSiloState.c)
 *     ObpDirectoryTeardownCallback @ 0x140A349B0 (ObpDirectoryTeardownCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObpDeleteDeviceMap @ 0x14069C07C (ObpDeleteDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(volatile signed __int64 *P, unsigned int a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  __int64 v5; // rbp
  signed __int64 i; // r8
  signed __int64 v7; // rtt
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v10; // rsi
  __int64 v11; // rax
  struct _KTHREAD *v12; // rax
  bool v13; // zf

  v3 = P;
  _m_prefetchw((const void *)(P + 30));
  v4 = *((_QWORD *)P + 30);
  v5 = a2;
  for ( i = v4 - a2; i > 0; i = v4 - a2 )
  {
    v7 = v4;
    v4 = _InterlockedCompareExchange64(P + 30, i, v4);
    if ( v7 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)P + 2));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (volatile signed __int64 *)(ServerSiloGlobals + 120);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
  v11 = _InterlockedExchangeAdd64(v3 + 30, -a2) - v5;
  if ( v11 > 0 )
  {
    v3 = 0LL;
  }
  else
  {
    if ( v11 )
      __fastfail(0xEu);
    *(_QWORD *)(*v3 + 304) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  v12 = KeGetCurrentThread();
  v13 = v12->SpecialApcDisable++ == -1;
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ObpDeleteDeviceMap((char *)v3);
}
