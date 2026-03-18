/*
 * XREFs of __DwmLockScreenUpdates@4 @ 0xEC08E
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _IsCurrentDesktopComposed@0 @ 0x7C988 (_IsCurrentDesktopComposed@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _DwmLockScreenUpdates(int a1)
{
  int v2; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( _grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !IsCurrentDesktopComposed() )
    {
      v3[2] = 0;
      v2 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 4) + 12);
      v3[0] = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = v3;
      v3[1] = v2;
      if ( v2 )
        HMLockObject(v2);
      xxxRedrawWindow(v2, 0, 0, 133);
      ThreadUnlock1();
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  return 0;
}
