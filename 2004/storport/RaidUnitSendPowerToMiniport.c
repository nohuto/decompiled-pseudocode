/*
 * XREFs of RaidUnitSendPowerToMiniport @ 0x1C0011D84
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00117EC (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0018104 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPowerToMiniport(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 3) )
    return (unsigned int)RaCallMiniportUnitControl(*(_QWORD *)(a1 + 24) + 304LL, 3LL);
  return v2;
}
