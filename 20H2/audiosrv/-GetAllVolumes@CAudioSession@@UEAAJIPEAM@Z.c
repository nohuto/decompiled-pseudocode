/*
 * XREFs of ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C7530
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetAllVolumes(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // r14
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = a2;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      *((const wchar_t **)this + 91));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  if ( (_DWORD)v4 == *((_DWORD *)this + 240) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = v4;
      v8 = *((_QWORD *)this + 121) - (_QWORD)a3;
      do
      {
        *a3 = *(float *)((char *)a3 + v8);
        ++a3;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetAllVolumes", 1212, -2147024809);
  }
  if ( this != (CAudioSession *)-808LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  return v6;
}
