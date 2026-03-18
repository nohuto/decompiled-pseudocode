/*
 * XREFs of _NtUserDwmKernelStartup@0 @ 0xE086E
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 */

int __stdcall NtUserDwmKernelStartup()
{
  int v0; // esi
  int CurrentProcess; // eax
  int v2; // eax
  int v3; // eax
  int started; // eax

  v0 = 0;
  EnterCrit(0, 1);
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
  {
    v2 = *(_DWORD *)(_gptiCurrent + 248);
    if ( v2 && (v3 = *(_DWORD *)(v2 + 4)) != 0 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)v3 + 32) & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
        v0 = 1;
      else
        UserSetLastStatus(started, 1);
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
