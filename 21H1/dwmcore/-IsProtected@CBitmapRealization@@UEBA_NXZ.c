/*
 * XREFs of ?IsProtected@CBitmapRealization@@UEBA_NXZ @ 0x1800BC420
 * Callers:
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EFDB0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ @ 0x1800F01F0 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@FI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ @ 0x1800F0200 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@HI@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ @ 0x1800F0470 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@II@EBA_NXZ.c)
 *     ?IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ @ 0x1800F0630 (-IsProtected@CBitmapRealization@@$4PPPPPPPM@MA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsProtected(CBitmapRealization *this)
{
  return (*((_DWORD *)this - 33) & 2) != 0;
}
