/*
 * XREFs of ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800C8AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetMeteringChannelCount(CAudioSession *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned __int64 i; // rdx
  unsigned int v7; // eax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, 0LL);
  }
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    for ( i = 0LL; i < *((_QWORD *)this + 13); v5 = v7 )
    {
      if ( i >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 96LL);
      if ( v7 <= v5 )
        v7 = v5;
      ++i;
    }
    if ( this != (CAudioSession *)-48LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
        v5);
    }
    *a2 = v5;
  }
  else
  {
    v4 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetMeteringChannelCount", 1412, -2147467261);
  }
  return v4;
}
