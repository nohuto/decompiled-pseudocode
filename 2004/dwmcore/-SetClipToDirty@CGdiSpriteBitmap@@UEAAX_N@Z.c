/*
 * XREFs of ?SetClipToDirty@CGdiSpriteBitmap@@UEAAX_N@Z @ 0x1800DE5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::SetClipToDirty(CGdiSpriteBitmap *this, char a2)
{
  *((_BYTE *)this + 72) = a2;
}
