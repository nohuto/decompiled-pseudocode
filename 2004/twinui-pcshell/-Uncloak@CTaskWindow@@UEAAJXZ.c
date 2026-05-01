/*
 * XREFs of ?Uncloak@CTaskWindow@@UEAAJXZ @ 0x180186C20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x180186C70 (-_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z.c)
 */

__int64 __fastcall CTaskWindow::Uncloak(CTaskWindow *this)
{
  CTaskWindow::_Invoke((char *)this - 8, 1LL);
  return 0LL;
}
