/*
 * XREFs of ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C89DC
 * Callers:
 *     ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF140 (-GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@BI@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF150 (-GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@BI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  *a2 = *(_DWORD *)(a1 - 1684);
  a2[2] = *(_DWORD *)(a1 - 1676) == 2;
  result = a2;
  a2[1] = *(_DWORD *)(a1 - 1680) != 0 ? 1 : 3;
  return result;
}
