/*
 * XREFs of ?_LoadCursorsAndIcons@@YGHXZ @ 0xD8CF2
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _LoadCursorsAndIcons()
{
  int v0; // edx
  int v1; // edi
  int i; // esi
  unsigned int v3; // ebx
  int v5; // ecx
  bool v6; // zf

  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    v1 = 0;
    _gdwHydraHint |= 0x4000u;
    for ( i = gpcurFirst; i; i = *(_DWORD *)(i + 16) )
    {
      if ( *(_WORD *)(i + 38) == 1 )
      {
        if ( *(_DWORD *)(i + 24) == i )
        {
          v3 = *(unsigned __int16 *)(i + 32) - 100;
          if ( v3 > 0x12 || _gasyscur[134 * v3 + 1] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          zzzInternalSetSystemCursor(i, v3, i + 28, 0);
        }
      }
      else if ( *(_WORD *)(i + 38) == 3 )
      {
        v5 = 268 * (*(unsigned __int16 *)(i + 32) - 100);
        v6 = (*(_BYTE *)(i + 44) & 4) == 0;
        *(_DWORD *)(i + 32) = (unsigned __int16)gasysico[v5];
        if ( v6 )
          *(_DWORD *)(_gpsi + 6220) = *(_DWORD *)i;
        else
          HMAssignmentLock(v5 * 2, v0);
      }
    }
    if ( dword_26B8CC )
      v1 = *(_DWORD *)dword_26B8CC;
    *(_DWORD *)(_gpsi + 6224) = v1;
  }
  return 1;
}
