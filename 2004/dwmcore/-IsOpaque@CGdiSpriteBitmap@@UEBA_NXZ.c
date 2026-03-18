/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800CFFE8
 * Callers:
 *     ?IsOpaque@CGdiSpriteBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F0C60 (-IsOpaque@CGdiSpriteBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  char result; // al

  result = 0;
  if ( !*((_BYTE *)this - 404) && *((_DWORD *)this - 109) == 3 )
    return 1;
  return result;
}
