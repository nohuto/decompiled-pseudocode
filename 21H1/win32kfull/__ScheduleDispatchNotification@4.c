/*
 * XREFs of __ScheduleDispatchNotification@4 @ 0x99DF0
 * Callers:
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __stdcall _ScheduleDispatchNotification(struct tagQ *a1)
{
  int v1; // esi
  int CurrentProcessWin32Process; // ecx
  int v4; // [esp+0h] [ebp-8h]
  struct tagINPUT_MESSAGE_SOURCE *v5; // [esp+4h] [ebp-4h]

  v1 = *((_DWORD *)a1 + 2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( *(_DWORD *)(v1 + 232) == CurrentProcessWin32Process )
  {
    if ( v1 == _gptiCurrent
      || (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 496, *(_DWORD *)(v1 + 236) + 316) )
    {
      return PostEventMessageEx((struct tagTHREADINFO *)9, a1, 0x60u, 0, 0, 0, v4, v5) != 0 ? 2 : 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
}
