/*
 * XREFs of ?CompareElements@RoutingPairsTraits@@SA_NAEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@0@Z @ 0x180140DB4
 * Callers:
 *     ?Find@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@PEAU3@@Z @ 0x180141100 (-Find@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEBAPEAU__POSITION@@.c)
 * Callees:
 *     <none>
 */

char __fastcall RoutingPairsTraits::CompareElements(
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a1,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2)
{
  char v2; // bl
  char v5; // r14
  char v6; // bp

  v2 = 1;
  v5 = 1;
  v6 = 1;
  if ( *(_WORD *)a1
    && *(_WORD *)a2
    && (*((_DWORD *)a1 + 130) != *((_DWORD *)a2 + 130) || (unsigned int)_o__wcsnicmp(a1, a2, 260LL)) )
  {
    v5 = 0;
  }
  if ( *((_WORD *)a1 + 262)
    && *((_WORD *)a2 + 262)
    && (*((_DWORD *)a1 + 261) != *((_DWORD *)a2 + 261)
     || (unsigned int)_o__wcsnicmp((char *)a1 + 524, (char *)a2 + 524, 260LL)) )
  {
    v6 = 0;
  }
  if ( !v5 || !v6 )
    return 0;
  return v2;
}
