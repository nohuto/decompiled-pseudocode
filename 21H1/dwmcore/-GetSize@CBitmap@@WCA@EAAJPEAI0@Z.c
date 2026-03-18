/*
 * XREFs of ?GetSize@CBitmap@@WCA@EAAJPEAI0@Z @ 0x1800ED2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetSize(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  return CBitmap::GetSize((CBitmap *)(a1 - 32), a2, a3);
}
