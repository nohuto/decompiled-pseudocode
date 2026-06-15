/*
 * XREFs of ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180001800
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x1800018C8 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::SetAllVolumes(CAudioStream **this, unsigned int a2, const float *a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  CAudioStream *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, this);
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 28);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 28));
  v9 = this[24];
  if ( v9 && *((_DWORD *)this + 46) )
  {
    v10 = CAudioStream::SetAllStreamVolumes(v9, a2, a3, a4);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v11 = 0;
      goto LABEL_7;
    }
    v13 = (unsigned int)v10;
    v14 = 2492LL;
  }
  else
  {
    v11 = -2004287487;
    v14 = 2491LL;
    v13 = 2290679809LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v13,
    v15);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v11;
}
