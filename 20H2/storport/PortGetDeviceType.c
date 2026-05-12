/*
 * XREFs of PortGetDeviceType @ 0x1C0074134
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001A810 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001A900 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001AB98 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001B144 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00737CC (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0074C90 (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
