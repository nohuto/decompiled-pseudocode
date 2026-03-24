/*
 * XREFs of ?GetPixelFormatInfo@CBitmapResource@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F4F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmapResource::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
