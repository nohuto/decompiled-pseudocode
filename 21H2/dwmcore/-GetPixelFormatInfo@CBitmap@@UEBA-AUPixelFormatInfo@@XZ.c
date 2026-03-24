/*
 * XREFs of ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E24C0
 * Callers:
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F5CA0 (-GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F6D00 (-GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CWICBitmapWrapper@@WBBA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F6DC0 (-GetPixelFormatInfo@CWICBitmapWrapper@@WBBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 192);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
