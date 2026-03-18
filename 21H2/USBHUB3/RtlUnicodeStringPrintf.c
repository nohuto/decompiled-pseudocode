/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C000BFF4
 * Callers:
 *     HUBID_BuildDeviceID @ 0x1C001B9CC (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x1C001BBEC (HUBID_BuildHardwareID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001C060 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x1C001C4B8 (HUBID_BuildContainerID.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x1C0078EAC (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBPDO_MakePdoName @ 0x1C007A860 (HUBPDO_MakePdoName.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C007E4DC (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x1C007E918 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007F038 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C00818CC (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x1C0081B54 (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1C0081CD0 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x1C0082158 (HUBREG_DeleteUxdPortKey.c)
 *     HUBACPI_EvaluateDSD @ 0x1C0084CF0 (HUBACPI_EvaluateDSD.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1C0086E24 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1C00871F8 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x1C0087FF0 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int64 MaximumLength; // rax
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  v5 = 0;
  if ( !DestinationString->Buffer && (Length || (_WORD)MaximumLength) )
    return -1073741811;
  v6 = MaximumLength >> 1;
  v7 = _vsnwprintf(DestinationString->Buffer, MaximumLength >> 1, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
