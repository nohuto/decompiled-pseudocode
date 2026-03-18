/*
 * XREFs of ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 *     ?SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x1DBE11 (-SpSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreUnTearDownSprites@@YGXPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB553 (-GreUnTearDownSprites@@YGXPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ??0BMPDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z @ 0x1F9766 (--0BMPDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 *     ??0REDIRDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z @ 0x1FADFD (--0REDIRDEVDCOPEN@@QAE@PAVXDCOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

void __thiscall DEVEXCLUDERECT::~DEVEXCLUDERECT(struct XDCOBJ **this)
{
  HDEV v2; // ecx
  struct _RECTL *v3; // [esp+0h] [ebp-Ch]
  struct SURFACE *v4; // [esp+0h] [ebp-Ch]
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  if ( *this )
  {
    REDIRDEVDCOPEN::REDIRDEVDCOPEN((REDIRDEVDCOPEN *)&v5, this[6]);
    BMPDEVDCOPEN::BMPDEVDCOPEN((BMPDEVDCOPEN *)&v6, this[6]);
    GreUnTearDownSprites(v2, v3, v5);
    if ( v6 )
      bBmpMakeOpaque(v4);
    if ( v5 )
      bMakeOpaque(v4);
  }
}
