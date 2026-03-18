/*
 * XREFs of zzzShowStartGlass @ 0x1C01D2E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     zzzCalcStartCursorHide @ 0x1C00CC4C0 (zzzCalcStartCursorHide.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // edx
  int v5; // ecx
  __int64 CurrentProcessWin32Process; // rbx
  int v7; // eax

  v3 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v7 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v7 & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(v5, v4, 2, 14, (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
    v7 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        v5,
        v4,
        2,
        15,
        (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
        CurrentProcessWin32Process);
      v7 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    }
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) = v7 | 0x400;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v3);
  return 1LL;
}
