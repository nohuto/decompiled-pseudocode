/*
 * XREFs of _CmIsRootDevice @ 0x1406B19F4
 * Callers:
 *     _CmGetDeviceParent @ 0x1406B1884 (_CmGetDeviceParent.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071B140 (PiCMDeviceAction.c)
 *     _CmSetDeviceRegPropWorker @ 0x140729808 (_CmSetDeviceRegPropWorker.c)
 *     _CmUpdateDevicePanel @ 0x14072CD38 (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceMappedProperty @ 0x140736184 (_CmSetDeviceMappedProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407522A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14089F250 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
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
