/*
 * XREFs of ?GetPixelFormatInfo@CHolographicInteropTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DDCF0
 * Callers:
 *     ?GetPixelFormatInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFAF0 (-GetPixelFormatInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHolographicInteropTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 - 60);
  a2[2] = 0;
  *a2 = v2;
  result = a2;
  a2[1] = 1;
  return result;
}
