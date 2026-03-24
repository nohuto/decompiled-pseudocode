/*
 * XREFs of ?GetTreeClientBounds@CDDARenderTarget@@UEBA_NPEAUtagRECT@@@Z @ 0x1800E2560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDARenderTarget::GetTreeClientBounds(CDDARenderTarget *this, struct tagRECT *a2)
{
  bool result; // al

  result = 1;
  *a2 = *(struct tagRECT *)((char *)this + 104);
  return result;
}
