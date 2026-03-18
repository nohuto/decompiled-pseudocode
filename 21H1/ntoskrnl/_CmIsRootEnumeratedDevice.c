/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x1407109B0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140710850 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1407367B0 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgMigrateDevice @ 0x14075A02C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A0AFC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PipResetDevice @ 0x140A8E4D0 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140002E00, &DestinationString, 1u);
}
