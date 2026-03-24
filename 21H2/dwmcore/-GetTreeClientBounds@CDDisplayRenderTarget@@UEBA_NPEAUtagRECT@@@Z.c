/*
 * XREFs of ?GetTreeClientBounds@CDDisplayRenderTarget@@UEBA_NPEAUtagRECT@@@Z @ 0x1800E21A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::GetTreeClientBounds(CDDisplayRenderTarget *this, struct tagRECT *a2)
{
  bool result; // al

  result = 1;
  *a2 = *(struct tagRECT *)((char *)this + 18200);
  return result;
}
