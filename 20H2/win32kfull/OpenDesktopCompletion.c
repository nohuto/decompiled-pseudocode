/*
 * XREFs of OpenDesktopCompletion @ 0x1C00121F4
 * Callers:
 *     EditionOpenInputDesktopEntryPoint @ 0x1C000FA30 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1C0010238 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01E9198 (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int ProcessLuid; // ebx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process();
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v7 + 64) & 2) == 0 || PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v12 = 0LL;
  ProcessLuid = GetProcessLuid(0LL, &v12, v9, v10);
  if ( ProcessLuid >= 0 )
  {
    if ( v12 == *(_QWORD *)(v7 + 176) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_7;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_7:
  UserSetLastError(170LL);
  return (unsigned int)ProcessLuid;
}
