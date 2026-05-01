/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x18006F4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_BYTE *)this + 472) & 1;
}
