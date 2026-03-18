/*
 * XREFs of ?GetSize@CBitmap@@WCI@EAAJPEAI0@Z @ 0x1800EFEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetSize(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  return CBitmap::GetSize((CBitmap *)(a1 - 40), a2, a3);
}
