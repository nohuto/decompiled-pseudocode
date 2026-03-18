/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x180097790
 * Callers:
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180097588 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x1800D5AD0 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::IsNonEmpty(CColorKey *this)
{
  return *((float *)this + 7) >= *((float *)this + 3)
      && *((float *)this + 4) >= *(float *)this
      && *((float *)this + 5) >= *((float *)this + 1)
      && *((float *)this + 6) >= *((float *)this + 2);
}
