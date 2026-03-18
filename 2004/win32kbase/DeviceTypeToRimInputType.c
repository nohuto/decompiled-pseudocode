/*
 * XREFs of DeviceTypeToRimInputType @ 0x1C00AB980
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     rimIssueReads @ 0x1C00AB7E4 (rimIssueReads.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00AB898 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimCompleteReads @ 0x1C00AB9B0 (rimCompleteReads.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00AEFCC (RIMDiscoverDevicesOfInputType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0157990 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0157FF0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0158350 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceNotify @ 0x1C016E2B0 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
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
