/*
 * XREFs of PortGetDeviceType @ 0x1C0072394
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0019CC4 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0019DB4 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0019F04 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001A4B0 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071A28 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0073D8C (RaUnitQueryDeviceTextIrp.c)
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
