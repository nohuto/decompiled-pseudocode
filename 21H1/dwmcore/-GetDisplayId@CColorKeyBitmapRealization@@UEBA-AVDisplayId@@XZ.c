/*
 * XREFs of ?GetDisplayId@CColorKeyBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x1800DC5D0
 * Callers:
 *     ?GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA?AVDisplayId@@XZ @ 0x1800ED780 (-GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x1800EFCE0 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA?AVDisplayId@@XZ @ 0x1800EFD00 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA?AVDisplayId@@XZ @ 0x1800EFF60 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CColorKeyBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
