/*
 * XREFs of ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DCB30
 * Callers:
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EBA?AUPixelFormatInfo@@XZ @ 0x1800ED270 (-GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BBI@EBA?AUPixelFormatInfo@@XZ @ 0x1800EE2F0 (-GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@BBI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CWICBitmapWrapper@@WBAI@EBA?AUPixelFormatInfo@@XZ @ 0x1800EE390 (-GetPixelFormatInfo@CWICBitmapWrapper@@WBAI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 184);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
