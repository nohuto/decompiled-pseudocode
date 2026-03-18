/*
 * XREFs of ?vSetup@ECLIPOBJTMPIFNEEDED@@QAEXHPAVREGION@@AAVERECTL@@H@Z @ 0x1DFC7A
 * Callers:
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3184 (-vSpWriteToExMirror@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E3239 (-vSpWriteToScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

void __thiscall ECLIPOBJTMPIFNEEDED::vSetup(
        ECLIPOBJTMPIFNEEDED *this,
        int a2,
        struct REGION *a3,
        struct ERECTL *a4,
        int a5)
{
  struct REGION *v6; // ecx
  struct REGION *v7[2]; // [esp+4h] [ebp-8h] BYREF

  v6 = a3;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  if ( v6 )
  {
    *((_DWORD *)this + 31) = a2;
    if ( a2 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v7);
      if ( v7[0] && RGNOBJ::bCopy((RGNOBJ *)v7, (struct RGNOBJ *)&a3) )
        XCLIPOBJ::vSetup(this, v7[0], a4, a5);
      if ( v7[1] == (struct REGION *)1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v7);
    }
    else
    {
      XCLIPOBJ::vSetup(this, v6, a4, a5);
    }
  }
}
