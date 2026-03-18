/*
 * XREFs of ?IsWhitePixelInTopLeft@CAtlasBitmapResource@@UEBA_NXZ @ 0x180209B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasBitmapResource::IsWhitePixelInTopLeft(CAtlasBitmapResource *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
