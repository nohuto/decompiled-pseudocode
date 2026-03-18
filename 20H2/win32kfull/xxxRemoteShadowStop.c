/*
 * XREFs of xxxRemoteShadowStop @ 0x1C0226F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C011FBB0 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowStop(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // dx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, a2, 9, 23, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  xxxRemoteStopScreenUpdates(gpepCSRSS, v3);
  return 0LL;
}
