/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C002053C
 * Callers:
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C003CBE0 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HBRUSH *a1)
{
  HBRUSH v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner(v2, 2147483650LL);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
