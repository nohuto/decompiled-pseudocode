/*
 * XREFs of ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x1800DCD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800D2A68 (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 */

__int64 __fastcall CVADServer::SetAllInitialVolumesWithRamp(CVADServer *this, unsigned int a2, float *a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  CAudioStream *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
      this);
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v9 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( !v9 || !*((_DWORD *)this + 46) )
  {
    v10 = -2004287487;
    v11 = 2522LL;
    goto LABEL_13;
  }
  if ( !*((_BYTE *)this + 200) )
  {
    v10 = -2147024809;
    v11 = 2524LL;
LABEL_13:
    v13 = v10;
    goto LABEL_14;
  }
  v12 = CAudioStream::SetAllInitialStreamVolumes(v9, a2, a3, a4);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v10 = 0;
    goto LABEL_15;
  }
  v13 = (unsigned int)v12;
  v11 = 2526LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v13);
LABEL_15:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v10;
}
