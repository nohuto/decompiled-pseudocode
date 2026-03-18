/*
 * XREFs of zzzShowStartGlass @ 0x1C01D3CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x1C0089AF0 (zzzCalcStartCursorHide.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowStartGlass(__int64 a1)
{
  int v1; // edi
  int v2; // edx
  int v3; // ecx
  __int64 CurrentProcessWin32Process; // rbx
  int v5; // eax

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v5 & 0x400) != 0 )
  {
    gdwPUDFlags |= 0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_(v3, v2, 2, 14, (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
    v5 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_q(
        v3,
        v2,
        2,
        15,
        (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
        CurrentProcessWin32Process);
      v5 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    }
  }
  *(_DWORD *)(CurrentProcessWin32Process + 12) = v5 | 0x400;
  zzzCalcStartCursorHide(CurrentProcessWin32Process, v1);
  return 1LL;
}
