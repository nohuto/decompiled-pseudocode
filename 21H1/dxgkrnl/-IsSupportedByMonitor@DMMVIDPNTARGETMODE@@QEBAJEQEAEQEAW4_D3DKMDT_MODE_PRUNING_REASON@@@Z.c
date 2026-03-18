/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E1B8
 * Callers:
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00E18CC (BmlIsSupportedByMonitorTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E0A0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C011E370 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  _BYTE *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int IsSupportedModeInternal; // eax
  _QWORD *v35; // rax
  int v36; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v37[5]; // [rsp+34h] [rbp-14h] BYREF
  unsigned __int8 v38; // [rsp+90h] [rbp+48h] BYREF
  char v39; // [rsp+98h] [rbp+50h]
  unsigned __int8 *v40; // [rsp+A0h] [rbp+58h]
  int v41; // [rsp+A8h] [rbp+60h] BYREF

  v40 = a3;
  v39 = a2;
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  *a3 = 0;
  v7 = *((_QWORD *)this + 5);
  if ( !v7 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v24);
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
    {
      v25 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v25 + 24) = this;
LABEL_28:
      WdLogEvent5_WdError(v25);
      return 3223192337LL;
    }
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( !v8 )
  {
    v25 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v25 + 24) = v7;
    goto LABEL_28;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 112LL);
  if ( !v9 )
  {
    v26 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v26 + 24) = *(unsigned int *)(v8 + 24);
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdWarning(v26);
    return 3223192376LL;
  }
  v10 = 0;
  LODWORD(v11) = 0;
  v38 = 0;
  v41 = 0;
  if ( this != (DMMVIDPNTARGETMODE *)-72LL )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v9 + 296), 1u);
    v14 = *(unsigned int *)(v9 + 48);
    if ( ((unsigned int)(v14 - 1) <= 2 || (_DWORD)v14 == 14) && (*(_DWORD *)(v9 + 40) & 8) != 0 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v27 + 24) = v9;
      WdLogEvent5_WdDmmEvent(v27);
      LODWORD(v11) = 1;
      v10 = 1;
    }
    else
    {
      v15 = *(unsigned int *)(v9 + 120);
      if ( (unsigned int)(v15 - 1) <= 1 )
      {
        LOBYTE(v13) = v39;
        IsSupportedModeInternal = DXGMONITOR::_IsSupportedModeInternal(v9, (char *)this + 72, v15, v13, &v38, &v41);
        v10 = v38;
        v16 = IsSupportedModeInternal;
        LODWORD(v11) = v41;
        goto LABEL_21;
      }
      v38 = 0;
      LOBYTE(v41) = 0;
      v36 = 0;
      v37[0] = 0;
      if ( (_DWORD)v15 != 3 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v14, v12);
        WdLogEvent5_WdAssertion(v28);
      }
      LOBYTE(v13) = v39;
      v16 = DXGMONITOR::_IsSupportedModeInternal(v9, (char *)this + 72, 2LL, v13, &v38, &v36);
      if ( v16 < 0 )
        goto LABEL_21;
      LOBYTE(v17) = v39;
      v16 = DXGMONITOR::_IsSupportedModeInternal(v9, (char *)this + 72, 1LL, v17, &v41, v37);
      if ( v16 < 0 )
        goto LABEL_21;
      v19 = (unsigned __int8)v41;
      v11 = v37[0];
      if ( v38 != (_BYTE)v41 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18);
        v29[4] = v38;
        v29[5] = v36;
        v29[3] = v9;
        v29[6] = v19;
        v29[7] = v11;
        WdLogEvent5_WdDmmEvent(v29);
        v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
        v31[3] = *((unsigned int *)this + 21);
        v31[4] = *((unsigned int *)this + 22);
        v31[5] = *((unsigned int *)this + 23);
        v31[6] = *((unsigned int *)this + 24);
        v31[7] = (int)(*((_DWORD *)this + 30) << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v31);
        v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
        v33[3] = *((unsigned int *)this + 25);
        v33[4] = *((unsigned int *)this + 26);
        v33[5] = *((_QWORD *)this + 14);
        WdLogEvent5_WdDmmEvent(v33);
      }
      if ( !(_BYTE)v19 && !v38 || (v10 = 1, !(_BYTE)v19) )
        LODWORD(v11) = v36;
    }
    v16 = 0;
LABEL_21:
    ExReleaseResourceLite((PERESOURCE)(v9 + 296));
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  v16 = -1073741811;
LABEL_22:
  if ( v16 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v35[5] = v16;
    v35[3] = this;
    v35[4] = v9;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v16;
  }
  else
  {
    v20 = v40;
    *a4 = v11;
    *v20 = v10;
    return 0LL;
  }
}
