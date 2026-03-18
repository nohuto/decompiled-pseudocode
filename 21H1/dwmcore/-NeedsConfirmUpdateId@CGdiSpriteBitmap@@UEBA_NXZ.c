/*
 * XREFs of ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800DD160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::NeedsConfirmUpdateId(CGdiSpriteBitmap *this)
{
  return *((_BYTE *)this + 70);
}
