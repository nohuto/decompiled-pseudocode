/*
 * XREFs of PoFxAbandonDevice @ 0x140766E4C
 * Callers:
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopPluginAbandonDevice @ 0x1405CE8F8 (PopPluginAbandonDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14080D7EC (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1408119E8 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFreeUniqueId @ 0x140811AFC (PopFxFreeUniqueId.c)
 */

__int64 __fastcall PoFxAbandonDevice(ULONG_PTR *a1)
{
  ULONG HandleAttributes; // eax
  ULONG v3; // ett
  ULONG_PTR v4; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 result; // rax
  ULONG_PTR v8; // rax

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
  _m_prefetchw(a1 + 37);
  v5 = *((_DWORD *)a1 + 74);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 74, v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
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
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFD);
  if ( (result & 2) != 0 )
    return PopFxFreeUniqueId(a1);
  return result;
}
