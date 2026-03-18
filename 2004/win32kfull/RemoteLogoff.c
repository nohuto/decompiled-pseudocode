/*
 * XREFs of RemoteLogoff @ 0x1C0226D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoteLogoff(__int64 a1, __int64 a2, __int64 a3)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 18, (__int64)&WPP_0f27963f307c3266edb1c5990ca93414_Traceguids);
  }
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x40u;
  PostWinlogonMessage(3LL, 4LL);
  return 0LL;
}
