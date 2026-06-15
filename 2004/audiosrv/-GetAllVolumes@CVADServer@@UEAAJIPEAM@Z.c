/*
 * XREFs of ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180038AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x1800BE35C (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v6 = *((_QWORD *)this + 24);
  if ( !v6 || !*((_DWORD *)this + 46) )
  {
    v9 = -2004287487;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetAllVolumes", 0xA08u, v9);
    goto LABEL_10;
  }
  if ( (_DWORD)v4 != *(_DWORD *)(v6 + 92) )
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v11);
    goto LABEL_17;
  }
  if ( (_DWORD)v4 )
  {
    v7 = v4;
    v8 = *(_QWORD *)(v6 + 112) - (_QWORD)a3;
    do
    {
      *a3 = *(float *)((char *)a3 + v8);
      ++a3;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
LABEL_10:
  if ( this != (CVADServer *)-224LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  return v9;
}
