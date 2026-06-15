/*
 * XREFs of ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C8270
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x1800C3014 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioSession::GetChannelVolume(CAudioSession *this, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rbp
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  v4 = a2;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  if ( (unsigned int)v4 < *((_DWORD *)this + 240) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v9 = v4;
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
        this,
        v9,
        *(float *)(*((_QWORD *)this + 121) + 4 * v4));
    }
    *a3 = *(float *)(*((_QWORD *)this + 121) + 4 * v4);
  }
  else
  {
    v7 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelVolume", 1102, -2147024809);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
