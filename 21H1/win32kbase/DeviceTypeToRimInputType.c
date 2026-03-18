/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C00A1B00
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C009EE88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     rimCompleteReads @ 0x1C00A18A8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00A1968 (rimIssueReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00A1A1C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C015DCE0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C015E340 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C015E6A0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceNotify @ 0x1C01745E0 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1 )
    return 1LL;
  if ( a1 == 1 )
    return 2LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
    return 60;
  return v1;
}
