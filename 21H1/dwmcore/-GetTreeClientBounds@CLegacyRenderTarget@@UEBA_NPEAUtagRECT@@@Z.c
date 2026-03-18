/*
 * XREFs of ?GetTreeClientBounds@CLegacyRenderTarget@@UEBA_NPEAUtagRECT@@@Z @ 0x1800DC850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::GetTreeClientBounds(CLegacyRenderTarget *this, struct tagRECT *a2)
{
  bool result; // al

  result = 1;
  *a2 = *(struct tagRECT *)((char *)this + 120);
  return result;
}
