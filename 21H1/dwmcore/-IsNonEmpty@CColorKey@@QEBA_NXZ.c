/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x180092E78
 * Callers:
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x180090360 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180092C70 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
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
