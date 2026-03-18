/*
 * XREFs of ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 288, a2);
}
