/*
 * XREFs of HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C002DC28
 * Callers:
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001D070 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001D120 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach @ 0x1C001D7A0 (HUBDSM_RemovingDeviceInfoFromGlobalListOnReportedMissingOnHubStopOnDetach.c)
 *     HUBDSM_WaitingForPDORemovedOnDetachInConfigured @ 0x1C001E100 (HUBDSM_WaitingForPDORemovedOnDetachInConfigured.c)
 *     HUBDSM_RequestingDeviceCycleInReportingToPnp @ 0x1C00210E0 (HUBDSM_RequestingDeviceCycleInReportingToPnp.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C007A670 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_RemoveDeviceInfoFromGlobalChildList(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 2152);
  if ( result )
    return USBD_RemoveDeviceFromGlobalList();
  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFBF);
    result = *(_QWORD *)(a1 + 2152);
    if ( result )
      return USBD_RemoveDeviceFromGlobalList();
  }
  return result;
}
