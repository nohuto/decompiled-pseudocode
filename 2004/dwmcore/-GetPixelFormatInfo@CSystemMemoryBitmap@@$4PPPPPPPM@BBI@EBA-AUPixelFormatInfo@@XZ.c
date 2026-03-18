/*
 * XREFs of ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BBI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F1280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 280, a2);
}
