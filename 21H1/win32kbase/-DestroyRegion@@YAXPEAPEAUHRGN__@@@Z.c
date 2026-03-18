/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A7804
 * Callers:
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C007A5F0 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
