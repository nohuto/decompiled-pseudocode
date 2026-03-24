/*
 * XREFs of ?HasBspCurrentPolygon@CDrawingContext@@QEBA_NXZ @ 0x18008D818
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800941F8 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::HasBspCurrentPolygon(CDrawingContext *this)
{
  return *((_QWORD *)this + 435) != 0LL;
}
