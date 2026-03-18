/*
 * XREFs of _CancelForegroundActivate@0 @ 0xAC494
 * Callers:
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall CancelForegroundActivate()
{
  int result; // eax
  _DWORD *i; // esi
  int v2; // edx
  int v3; // ecx

  result = _gdwPUDFlags;
  if ( (_gdwPUDFlags & 0x8000000) != 0 )
  {
    for ( i = (_DWORD *)_gppiStarting; i; i = (_DWORD *)i[51] )
    {
      if ( !PsGetProcessDebugPort(*i) )
      {
        i[2] &= ~0x100u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v2) = 4;
          WPP_RECORDER_SF_q(v3, v2, 2u, 18, (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids, (char)i);
        }
      }
    }
    result = _gdwPUDFlags;
    _gdwPUDFlags &= ~0x8000000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(2, 19, &WPP_639f646729e7343d7b80e44c73d47209_Traceguids);
  }
  return result;
}
