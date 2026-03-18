/*
 * XREFs of CancelForegroundActivate @ 0x1C003E2C0
 * Callers:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00D5034 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CancelForegroundActivate(int a1)
{
  __int64 result; // rax
  __int64 i; // rbx
  int v3; // edx

  result = gdwPUDFlags;
  if ( (gdwPUDFlags & 0x8000000) != 0 )
  {
    for ( i = gppiStarting; i; i = *(_QWORD *)(i + 368) )
    {
      if ( !PsGetProcessDebugPort(*(_QWORD *)i) )
      {
        *(_DWORD *)(i + 12) &= ~0x100u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 4;
          WPP_RECORDER_SF_q(a1, v3, 2, 18, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids, i);
        }
      }
    }
    result = gdwPUDFlags;
    gdwPUDFlags &= ~0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(a1, 4, 2, 19, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids);
  }
  return result;
}
