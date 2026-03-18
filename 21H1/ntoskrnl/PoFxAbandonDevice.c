/*
 * XREFs of PoFxAbandonDevice @ 0x140734340
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x1405786F8 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056689C (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x140567E78 (PopPluginAbandonDevice.c)
 *     PopFxFreeUniqueId @ 0x140736C04 (PopFxFreeUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140736C68 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736CE8 (PopFxUnregisterDeviceOrWait.c)
 */

LONG __fastcall PoFxAbandonDevice(_QWORD *a1)
{
  ULONG HandleAttributes; // eax
  ULONG v3; // ett
  __int64 v4; // rax
  __int64 v5; // rsi
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rax
  LONG result; // eax
  LONG v10; // ett

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
    v4 = a1[97];
    if ( v4 )
    {
      a1[97] = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
    KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  v5 = 0LL;
  _m_prefetchw(a1 + 37);
  v6 = *((_DWORD *)a1 + 74);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 74, v6, v6);
  }
  while ( v7 != v6 );
  if ( (v6 & 1) != 0 )
  {
    v5 = a1[10];
    PopFxUnregisterDeviceOrWait(a1);
    v8 = a1[18];
    if ( v8 )
    {
      PopPluginAbandonDevice(a1[18], (__int64)(a1 + 16));
      v8 = a1[18];
    }
    PopDiagTraceFxDevicePreparation(a1, v8, a1 + 16, 0LL);
    a1[18] = 0LL;
    _InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFE);
  }
  _m_prefetchw(a1 + 37);
  if ( (_InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFD) & 2) != 0 )
    PopFxFreeUniqueId(a1);
  result = Feature_Servicing_27169067__private_IsEnabled();
  if ( !result )
  {
    _m_prefetchw(a1 + 37);
    result = *((_DWORD *)a1 + 74);
    do
    {
      v10 = result;
      result = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 74, result & 0xFFFFBFFF, result);
    }
    while ( v10 != result );
    if ( (result & 0x4000) != 0 )
      return PopFxReleaseAcpiRefDevice(v5);
  }
  return result;
}
