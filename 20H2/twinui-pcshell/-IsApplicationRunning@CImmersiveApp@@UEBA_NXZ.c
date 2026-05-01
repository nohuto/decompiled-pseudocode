/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x18006AD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_BYTE *)this + 472) & 1;
}
