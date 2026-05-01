/*
 * XREFs of ?SetPreferredAspectRatioHint@CImmersiveApp@@UEAAJUtagSIZE@@@Z @ 0x180084840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::SetPreferredAspectRatioHint(CImmersiveApp *this, struct tagSIZE a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE))(**((_QWORD **)this + 42) + 312LL))(
           *((_QWORD *)this + 42),
           a2);
}
