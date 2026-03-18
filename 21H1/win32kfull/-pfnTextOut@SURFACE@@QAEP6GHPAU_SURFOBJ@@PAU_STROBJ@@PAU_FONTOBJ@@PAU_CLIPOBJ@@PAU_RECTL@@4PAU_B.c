/*
 * XREFs of ?pfnTextOut@SURFACE@@QAEP6GHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@ZXZ @ 0x1F8EA2
 * Callers:
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 * Callees:
 *     <none>
 */

int (__stdcall *__thiscall SURFACE::pfnTextOut(
        SURFACE *this))(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int)
{
  if ( (*((_BYTE *)this + 72) & 8) != 0 )
    return *(int (__stdcall **)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*((_DWORD *)this + 7) + 1992);
  else
    return EngTextOut;
}
