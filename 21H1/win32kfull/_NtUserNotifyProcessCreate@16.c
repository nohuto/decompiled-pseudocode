/*
 * XREFs of _NtUserNotifyProcessCreate@16 @ 0x1A7DE
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUserNotifyProcessCreate@@YGJKKKK@Z @ 0x1A838 (-xxxUserNotifyProcessCreate@@YGJKKKK@Z.c)
 */

int __userpurge NtUserNotifyProcessCreate@<eax>(
        unsigned int a1@<esi>,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v6; // esi
  unsigned int savedregs; // [esp+0h] [ebp+0h]

  if ( a5 )
  {
    EnterCrit(0, 1);
    if ( PsGetCurrentProcess() == _gpepCSRSS )
      v6 = xxxUserNotifyProcessCreate(a4, a5, a1, savedregs);
    else
      v6 = -1073741790;
    UserSessionSwitchLeaveCrit();
    return v6;
  }
  else
  {
    GiveForegroundActivateRight(a2);
    return 0;
  }
}
