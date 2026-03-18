/*
 * XREFs of _CmIsRootDevice @ 0x1406C3108
 * Callers:
 *     _CmGetDeviceParent @ 0x1406C2F98 (_CmGetDeviceParent.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     _CmSetDeviceRegPropWorker @ 0x140724648 (_CmSetDeviceRegPropWorker.c)
 *     _CmUpdateDevicePanel @ 0x14072B450 (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x14072F8B0 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140756934 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A0570 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &String2, 1u);
}
