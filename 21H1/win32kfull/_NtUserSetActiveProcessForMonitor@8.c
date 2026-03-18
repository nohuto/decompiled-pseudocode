/*
 * XREFs of _NtUserSetActiveProcessForMonitor@8 @ 0xB1FFE
 * Callers:
 *     <none>
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSetActivePpiForMonitor@8 @ 0xB2078 (_xxxSetActivePpiForMonitor@8.c)
 */

int __stdcall NtUserSetActiveProcessForMonitor(HANDLE ProcessId, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  int ProcessWin32Process; // eax
  PVOID Object; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  Object = 0;
  v3 = 0;
  UserSessionSwitchEnterCrit();
  if ( IAMThreadAccessGranted(_gptiCurrent) || !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 248) + 4) + 84) )
  {
    if ( a2 && (v3 = ValidateHmonitor(a2)) == 0 || LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    else
    {
      ProcessWin32Process = PsGetProcessWin32Process(Object);
      if ( ProcessWin32Process )
      {
        ((void (__fastcall *)(int, int))xxxSetActivePpiForMonitor)(ProcessWin32Process, v3);
        v2 = 1;
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  LeaveCrit();
  return v2;
}
