/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x1800454A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetChannelCount(CVADServer *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, this);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v5 = *((_QWORD *)this + 24);
  if ( v5 && *((_DWORD *)this + 46) )
  {
    v6 = 0;
    *a2 = *(_DWORD *)(v5 + 92);
  }
  else
  {
    v6 = -2004287487;
    AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelCount", 0x952u, -2004287487);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
