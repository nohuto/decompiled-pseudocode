/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C001EE20
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02915F4 (bInitBrush.c)
 *     bInitICM @ 0x1C0293518 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C0293798 (bInitBMOBJ.c)
 *     bInitPALOBJ @ 0x1C02938C4 (bInitPALOBJ.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C001F0B0 (HmgModifyHandleType.c)
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
