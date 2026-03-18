/*
 * XREFs of _NtUserRegisterPointerDeviceNotifications@8 @ 0xE7A64
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __RegisterPointerDeviceNotifications@8 @ 0xE7AEC (__RegisterPointerDeviceNotifications@8.c)
 */

int __stdcall NtUserRegisterPointerDeviceNotifications(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF

  v5[1] = -1;
  v2 = 0;
  v5[0] = 0x2000;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232) == PsGetCurrentProcessWin32Process() )
    {
      if ( a2 && !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v5) )
      {
        EtwTraceUIPISystemError(*(_DWORD *)(_gptiCurrent + 232), 0, 9);
        UserSetLastError((struct _NT_TIB *)5);
      }
      else
      {
        v2 = _RegisterPointerDeviceNotifications(v3, a2);
      }
    }
    else
    {
      v2 = 5;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
