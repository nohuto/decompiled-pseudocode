/*
 * XREFs of ?IsValidEndpointPair@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAH@Z @ 0x180142350
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x180141100 (-Find@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x180141440 (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 */

__int64 __fastcall TelephonyController::IsValidEndpointPair(
        __int64 **a1,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 *v7; // rax
  int SupportedCellularRoutingPairs; // eax

  v3 = 0;
  if ( a3 )
  {
    v7 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find(a1 + 9, a2);
    if ( !v7 )
    {
      SupportedCellularRoutingPairs = TelephonyController::GetSupportedCellularRoutingPairs((TelephonyController *)a1);
      if ( SupportedCellularRoutingPairs < 0 )
        return (unsigned int)SupportedCellularRoutingPairs;
      v7 = ATL::CAtlList<_tagKSTOPOLOGY_ENDPOINTIDPAIR,RoutingPairsTraits>::Find(a1 + 9, a2);
    }
    *a3 = v7 != 0LL;
    return v3;
  }
  return (unsigned int)-2147467261;
}
