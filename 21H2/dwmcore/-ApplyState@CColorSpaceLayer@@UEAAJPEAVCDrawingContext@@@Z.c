/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8043);
  *((_BYTE *)a2 + 8043) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
