/*
 * XREFs of _NtUserChildWindowFromPointEx@16 @ 0x160221
 * Callers:
 *     <none>
 * Callees:
 *     __ChildWindowFromPointEx@16 @ 0x17BE7F (__ChildWindowFromPointEx@16.c)
 */

int __stdcall NtUserChildWindowFromPointEx(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax

  v4 = 0;
  EnterCrit(0, 1);
  if ( ValidateHwnd(a1) )
  {
    v5 = (int *)_ChildWindowFromPointEx(a2, a3);
    if ( v5 )
      v4 = *v5;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
