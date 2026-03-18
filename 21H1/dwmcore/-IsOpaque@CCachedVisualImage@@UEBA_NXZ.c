/*
 * XREFs of ?IsOpaque@CCachedVisualImage@@UEBA_NXZ @ 0x1800C24E8
 * Callers:
 *     ?IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EC740 (-IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOpaque(CCachedVisualImage *this)
{
  return *((_DWORD *)this - 420) == 0;
}
