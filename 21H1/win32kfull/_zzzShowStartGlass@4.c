/*
 * XREFs of _zzzShowStartGlass@4 @ 0x142781
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall zzzShowStartGlass(int a1)
{
  int v1; // edx
  int CurrentProcessWin32Process; // esi
  int v3; // eax
  int v4; // ecx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v3 = *(_DWORD *)(CurrentProcessWin32Process + 8);
  if ( (v3 & 0x400) != 0 )
  {
    v4 = _gdwPUDFlags;
    _gdwPUDFlags |= 0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 14, &WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
    *(_DWORD *)(CurrentProcessWin32Process + 8) |= 0x100u;
    v3 = *(_DWORD *)(CurrentProcessWin32Process + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_q(
        v4,
        v1,
        2u,
        15,
        (int)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
        CurrentProcessWin32Process);
      v3 = *(_DWORD *)(CurrentProcessWin32Process + 8);
    }
  }
  *(_DWORD *)(CurrentProcessWin32Process + 8) = v3 | 0x400;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, a1);
  return 1;
}
