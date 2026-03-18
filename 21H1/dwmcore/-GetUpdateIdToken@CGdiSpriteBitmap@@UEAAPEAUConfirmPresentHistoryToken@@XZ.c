/*
 * XREFs of ?GetUpdateIdToken@CGdiSpriteBitmap@@UEAAPEAUConfirmPresentHistoryToken@@XZ @ 0x1800DD150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ConfirmPresentHistoryToken *__fastcall CGdiSpriteBitmap::GetUpdateIdToken(CGdiSpriteBitmap *this)
{
  *((_BYTE *)this + 70) = 0;
  return (CGdiSpriteBitmap *)((char *)this + 80);
}
