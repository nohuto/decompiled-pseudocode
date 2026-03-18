/*
 * XREFs of _CmIsRootDevice @ 0x1406E4838
 * Callers:
 *     _CmGetDeviceParent @ 0x1406E46C8 (_CmGetDeviceParent.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     _CmSetDeviceRegPropWorker @ 0x1407330D8 (_CmSetDeviceRegPropWorker.c)
 *     _CmUpdateDevicePanel @ 0x140739EE0 (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x14073E068 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140765574 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A60A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
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
