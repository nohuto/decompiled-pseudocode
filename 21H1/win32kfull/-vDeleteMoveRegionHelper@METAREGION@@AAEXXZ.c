/*
 * XREFs of ?vDeleteMoveRegionHelper@METAREGION@@AAEXXZ @ 0x228E9B
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z @ 0x228A76 (-vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall METAREGION::vDeleteMoveRegionHelper(METAREGION *this)
{
  REGION *v2; // ecx
  REGION *v3; // ecx

  v2 = (REGION *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *((_DWORD *)this + 5) = 0;
  }
  v3 = (REGION *)*((_DWORD *)this + 1);
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    *((_DWORD *)this + 1) = 0;
  }
}
