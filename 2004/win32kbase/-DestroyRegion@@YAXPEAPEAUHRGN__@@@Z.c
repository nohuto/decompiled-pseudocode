/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C001307C
 * Callers:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C0081470 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HPALETTE *a1)
{
  HPALETTE v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner(v2, 2147483650LL);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
