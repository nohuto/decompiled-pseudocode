/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x1800DF374
 * Callers:
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA?AVDisplayId@@XZ @ 0x1800F2C60 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA?AVDisplayId@@XZ @ 0x1800F30C0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA?AVDisplayId@@XZ @ 0x1800F30D0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x1800F3390 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA?AVDisplayId@@XZ @ 0x1800F3550 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 96);
  return a2;
}
