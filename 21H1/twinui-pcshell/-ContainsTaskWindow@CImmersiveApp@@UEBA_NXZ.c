/*
 * XREFs of ?ContainsTaskWindow@CImmersiveApp@@UEBA_NXZ @ 0x180157570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::ContainsTaskWindow(CImmersiveApp *this)
{
  return *((_QWORD *)this + 45) != 0LL;
}
