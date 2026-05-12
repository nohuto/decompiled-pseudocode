/*
 * XREFs of PortGetDeviceType @ 0x1C0072484
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0017E54 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0017F44 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0018094 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1C0018640 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071B18 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0073A40 (RaUnitQueryDeviceTextIrp.c)
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
