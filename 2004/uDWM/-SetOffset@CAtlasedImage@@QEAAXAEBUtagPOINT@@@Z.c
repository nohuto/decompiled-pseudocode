/*
 * XREFs of ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18003D27C
 * Callers:
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180023640 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180028A10 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18003D230 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedImage::SetOffset(struct tagPOINT *this, const struct tagPOINT *a2)
{
  if ( a2->x != this[2].x || a2->y != this[2].y )
  {
    this[2] = *a2;
    CAtlasedImage::SetDirtyFlags((CAtlasedImage *)this, 1, 0x2000u);
  }
}
