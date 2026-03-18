/*
 * XREFs of _NtUserRegisterBSDRWindow@8 @ 0xAECA2
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __stdcall NtUserRegisterBSDRWindow(int a1, struct tagWND *a2)
{
  int v2; // esi
  struct tagINPUT_MESSAGE_SOURCE *v3; // edi
  int v4; // edx
  int v5; // ecx
  struct tagQ **v7; // [esp-Ch] [ebp-14h]
  struct tagINPUT_MESSAGE_SOURCE *v8; // [esp-8h] [ebp-10h]

  v2 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v3 = (struct tagINPUT_MESSAGE_SOURCE *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_15;
  }
  else
  {
    v3 = 0;
  }
  if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogonUI || !_gpidLogonUI && IsPrivileged(_psTcb) )
  {
    if ( v3 )
    {
      v8 = v3;
      v7 = &gspwndBSDR;
      HMAssignmentLock(v5, v4);
    }
    if ( a2 && _gptiShutdownWaiter )
      PostEventMessageEx((struct tagTHREADINFO *)0x13, 0, 0x329u, a2, 0xFFFFFFFF, 0, (int)v7, v8);
    v2 = 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v2;
}
