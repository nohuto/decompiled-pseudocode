/*
 * XREFs of _NtUserDwmKernelShutdown@0 @ 0x1612DF
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 */

int __stdcall NtUserDwmKernelShutdown()
{
  int v0; // esi
  int CurrentProcess; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v0 = 0;
  EnterCrit(0, 1);
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
  {
    v2 = *(_DWORD *)(_gptiCurrent + 248);
    if ( v2 && (v3 = *(_DWORD *)(v2 + 4)) != 0 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)v3 + 32) & 1) != 0 && (v4 = xxxDwmStopRedirection(0), v4 < 0) )
        UserSetLastStatus(v4, 1);
      else
        v0 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
