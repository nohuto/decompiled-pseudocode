/*
 * XREFs of ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x180186850
 * Callers:
 *     <none>
 * Callees:
 *     ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x180186880 (-_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z.c)
 */

bool __fastcall CTaskWindow::ValidateActivation(CTaskWindow *this)
{
  char v1; // bl

  v1 = 0;
  if ( (*((_BYTE *)this + 60) & 4) == 0 )
    return (int)CTaskWindow::_Invoke((char *)this - 8, 2LL) >= 0;
  return v1;
}
