/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00AA650
 * Callers:
 *     bInitPALOBJ @ 0x1C02991B0 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C029ABA8 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C029B3F4 (bInitBMOBJ.c)
 *     bInitBrush @ 0x1C029B478 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C029B520 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C00AA8E0 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  void *v5; // r9

  v3 = 0;
  if ( a1 )
  {
    v5 = (void *)(a1 | 0x800000);
    if ( a3 )
      gahStockObjects96[a2] = v5;
    else
      gahStockObjects[a2] = v5;
    HmgModifyHandleType(v5);
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
