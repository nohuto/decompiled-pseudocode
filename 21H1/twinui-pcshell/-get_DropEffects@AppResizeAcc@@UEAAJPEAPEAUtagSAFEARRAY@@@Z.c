/*
 * XREFs of ?get_DropEffects@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1803F7010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppResizeAcc::get_DropEffects(
        AppResizeAcc *this,
        struct tagSAFEARRAY **a2,
        struct tagSAFEARRAY **a3)
{
  const OLECHAR *v3; // rax

  v3 = &word_1804BE2A8;
  if ( *((_QWORD *)this + 11) )
    v3 = (const OLECHAR *)*((_QWORD *)this + 11);
  return AccessibilityHelpers::GetBSTRSafeArray(v3, (unsigned __int16 *)a2, a3);
}
