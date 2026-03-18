/*
 * XREFs of ?GetDisplayId@CWICBitmapWrapper@@UEBA?AVDisplayId@@XZ @ 0x1800FA870
 * Callers:
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x18010B090 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA?AVDisplayId@@XZ @ 0x18010B0B0 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA?AVDisplayId@@XZ @ 0x18010B550 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA?AVDisplayId@@XZ @ 0x18010CBF0 (-GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CWICBitmapWrapper::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
