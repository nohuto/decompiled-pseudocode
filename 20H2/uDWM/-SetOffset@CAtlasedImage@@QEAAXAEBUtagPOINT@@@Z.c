/*
 * XREFs of ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18003D28C
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x1800126E0 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180019F30 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18003D240 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
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
