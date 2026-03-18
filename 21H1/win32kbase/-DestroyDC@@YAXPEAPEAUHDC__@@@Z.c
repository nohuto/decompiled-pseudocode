/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A7838
 * Callers:
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternal @ 0x1C00A78A0 (bDeleteDCInternal.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*a1;
  if ( v2 )
  {
    GreSetDCOwnerEx(v2, 0x80000002, 0, 0);
    bDeleteDCInternal(*a1, 1LL, 0LL);
    *a1 = 0LL;
  }
}
