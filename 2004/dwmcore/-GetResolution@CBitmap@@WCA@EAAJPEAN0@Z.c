/*
 * XREFs of ?GetResolution@CBitmap@@WCA@EAAJPEAN0@Z @ 0x1800F0220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetResolution(__int64 a1, double *a2, double *a3)
{
  return CBitmap::GetResolution((CBitmap *)(a1 - 32), a2, a3);
}
