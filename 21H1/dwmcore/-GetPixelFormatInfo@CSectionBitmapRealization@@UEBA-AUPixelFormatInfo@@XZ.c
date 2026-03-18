/*
 * XREFs of ?GetPixelFormatInfo@CSectionBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18001A234
 * Callers:
 *     ?GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFD20 (-GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFD30 (-GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@EA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFF80 (-GetPixelFormatInfo@CSectionBitmapRealization@@$4PPPPPPPM@EA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  _DWORD *result; // rax

  v2 = 3;
  *a2 = *(_DWORD *)(a1 - 60);
  if ( *(_DWORD *)(a1 - 304) )
    v2 = *(_DWORD *)(a1 - 304);
  a2[2] = *(_DWORD *)(a1 - 260);
  result = a2;
  a2[1] = v2;
  return result;
}
