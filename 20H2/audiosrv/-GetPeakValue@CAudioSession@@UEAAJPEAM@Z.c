/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800C8030
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800C2430 (WPP_SF_g.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800D1E00 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // ebx
  unsigned __int64 i; // rdi
  float v8; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0.0;
  v5 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, 0LL);
  }
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
    {
      if ( (int)CAudioStream::GetPeakValue(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * i), &v8) >= 0 )
        v3 = fmaxf(v8, v3);
    }
    if ( this != (CAudioSession *)-48LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_g(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
        v3);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1353, -2147467261);
  }
  return v5;
}
