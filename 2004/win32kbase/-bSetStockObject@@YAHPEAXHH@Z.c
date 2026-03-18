/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0015620
 * Callers:
 *     bInitBrush @ 0x1C02933EC (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1C0295010 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C0295648 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C0295908 (bInitBMOBJ.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C00158B0 (HmgModifyHandleType.c)
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
