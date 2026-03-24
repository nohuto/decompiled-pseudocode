/*
 * XREFs of PoFxAbandonDevice @ 0x140738B04
 * Callers:
 *     IopRemoveDevice @ 0x1407388F4 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PopPluginAbandonDevice @ 0x14056D908 (PopPluginAbandonDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736750 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1407367C4 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFreeUniqueId @ 0x140736844 (PopFxFreeUniqueId.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  ULONG HandleAttributes; // eax
  ULONG v3; // ett
  __int64 v4; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rax

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v3 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v3 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    v4 = *(_QWORD *)(a1 + 776);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 776) = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
    KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  _m_prefetchw((const void *)(a1 + 296));
  v5 = *(_DWORD *)(a1 + 296);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
    PopFxUnregisterDeviceOrWait((struct _KEVENT *)a1);
    v7 = *(_QWORD *)(a1 + 144);
    if ( v7 )
    {
      PopPluginAbandonDevice(*(_QWORD *)(a1 + 144), a1 + 128);
      v7 = *(_QWORD *)(a1 + 144);
    }
    PopDiagTraceFxDevicePreparation(a1, v7, (unsigned __int16 *)(a1 + 128), 0);
    *(_QWORD *)(a1 + 144) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFE);
  }
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFD) & 2) != 0 )
    PopFxFreeUniqueId(a1);
}
