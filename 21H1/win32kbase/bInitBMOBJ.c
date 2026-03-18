/*
 * XREFs of bInitBMOBJ @ 0x1C029B3F4
 * Callers:
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     GreCreateBitmap @ 0x1C0090E80 (GreCreateBitmap.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00AA650 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 bInitBMOBJ()
{
  unsigned int v0; // edi
  __int64 result; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  SURFACE *v4; // rbx

  v0 = 0;
  result = GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = HmgShareLockCheck(result, 5);
    v4 = (SURFACE *)v3;
    if ( v3 )
    {
      HmgSetOwner(*(_QWORD *)(v3 + 32), 0, 5);
      bSetStockObject(v2, 21, 0);
      *((_QWORD *)v4 + 4) = v2 | 0x800000;
      SURFACE::pdibDefault = v4;
      v0 = 1;
      HmgDecrementShareReferenceCountEx((__int64)v4, 0LL);
    }
    return v0;
  }
  return result;
}
