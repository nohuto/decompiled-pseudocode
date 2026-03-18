/*
 * XREFs of ?IsWhitePixelInTopLeft@CAtlasBitmapResource@@UEBA_NXZ @ 0x18020C540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasBitmapResource::IsWhitePixelInTopLeft(CAtlasBitmapResource *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
