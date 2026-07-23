/*
 * XREFs of PoFxAbandonDevice @ 0x140738CC4
 * Callers:
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     PopPluginAbandonDevice @ 0x14056DB48 (PopPluginAbandonDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736910 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140736984 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFreeUniqueId @ 0x140736A04 (PopFxFreeUniqueId.c)
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
