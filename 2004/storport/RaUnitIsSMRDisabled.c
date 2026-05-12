/*
 * XREFs of RaUnitIsSMRDisabled @ 0x1C00150F0
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C0019DB4 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0019F04 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00719C0 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0071A28 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  __int64 result; // rax

  if ( (**(_BYTE **)(a1 + 104) & 0x1F) != 0x14 )
    return 0LL;
  result = 1LL;
  if ( IsSMREnabled )
  {
    if ( *(int *)(*(_QWORD *)(a1 + 24) + 4808LL) <= 1 && (*(_BYTE *)(a1 + 451) & 1) == 0 )
      return 0LL;
  }
  return result;
}
