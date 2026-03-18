/*
 * XREFs of ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z @ 0xAA854 (-vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 * Callees:
 *     ?ActiveInSprite@SFMLOGICALSURFACE@@QAEXEPAUHSPRITE__@@@Z @ 0x2474C (-ActiveInSprite@SFMLOGICALSURFACE@@QAEXEPAUHSPRITE__@@@Z.c)
 */

void __thiscall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  SFMLOGICALSURFACE *v4; // ecx
  char v5; // bl
  char v6; // al

  v4 = (SFMLOGICALSURFACE *)*((_DWORD *)this + 34);
  if ( !v4 && a3 )
  {
    v5 = 1;
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  v5 = 0;
  if ( !v4 || a3 )
    goto LABEL_4;
  v6 = 1;
LABEL_5:
  if ( *((_DWORD *)this + 19) == 3 )
    *((_DWORD *)this + 19) = 1;
  if ( v6 )
  {
    SFMLOGICALSURFACE::ActiveInSprite(v4, 0, 0);
    DEC_SHARE_REF_CNT(*((_DWORD *)this + 34));
    EtwDwmSpriteLogicalSurfUnBindEvent(
      *(_DWORD *)this,
      *(int *)this >> 31,
      **((_DWORD **)this + 34),
      **((int **)this + 34) >> 31);
  }
  *((_DWORD *)this + 34) = a3;
  if ( v5 )
  {
    INC_SHARE_REF_CNT(a3);
    SFMLOGICALSURFACE::ActiveInSprite(a3, 1, *(HSPRITE *)this);
    EtwDwmSpriteLogicalSurfBindEvent(*(_DWORD *)this, *(int *)this >> 31, *(_DWORD *)a3, *(int *)a3 >> 31);
  }
}
