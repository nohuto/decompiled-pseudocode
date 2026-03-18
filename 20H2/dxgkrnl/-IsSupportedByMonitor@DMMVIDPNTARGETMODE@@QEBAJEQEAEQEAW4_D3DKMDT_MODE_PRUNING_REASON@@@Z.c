/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0121A88
 * Callers:
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0121970 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C0136D88 (BmlIsSupportedByMonitorTargetMode.c)
 * Callees:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0121C40 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  _BYTE *v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int IsSupportedModeInternal; // eax
  _QWORD *v38; // rax
  int v39; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v40[5]; // [rsp+34h] [rbp-14h] BYREF
  unsigned __int8 v41; // [rsp+90h] [rbp+48h] BYREF
  char v42; // [rsp+98h] [rbp+50h]
  unsigned __int8 *v43; // [rsp+A0h] [rbp+58h]
  int v44; // [rsp+A8h] [rbp+60h] BYREF

  v43 = a3;
  v42 = a2;
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v24);
  }
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  *a3 = 0;
  v7 = *((_QWORD *)this + 5);
  if ( !v7 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v25);
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
    {
      v26 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v26 + 24) = this;
LABEL_28:
      WdLogEvent5_WdError(v26);
      return 3223192337LL;
    }
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( !v8 )
  {
    v26 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v26 + 24) = v7;
    goto LABEL_28;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 112LL);
  if ( !v9 )
  {
    v27 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v27 + 24) = *(unsigned int *)(v8 + 24);
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdWarning(v27);
    return 3223192376LL;
  }
  v10 = 0;
  LODWORD(v11) = 0;
  v41 = 0;
  v44 = 0;
  if ( this != (DMMVIDPNTARGETMODE *)-72LL )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v9 + 296), 1u);
    v14 = *(unsigned int *)(v9 + 48);
    if ( ((unsigned int)(v14 - 1) <= 2 || (_DWORD)v14 == 14) && (*(_DWORD *)(v9 + 40) & 8) != 0 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v14, v12);
      *(_QWORD *)(v28 + 24) = v9;
      WdLogEvent5_WdDmmEvent(v28);
      LODWORD(v11) = 1;
      v10 = 1;
    }
    else
    {
      v15 = *(unsigned int *)(v9 + 120);
      if ( (unsigned int)(v15 - 1) <= 1 )
      {
        LOBYTE(v13) = v42;
        IsSupportedModeInternal = DXGMONITOR::_IsSupportedModeInternal(v9, (char *)this + 72, v15, v13, &v41, &v44);
        v10 = v41;
        v16 = IsSupportedModeInternal;
        LODWORD(v11) = v44;
        goto LABEL_21;
      }
      v41 = 0;
      LOBYTE(v44) = 0;
      v39 = 0;
      v40[0] = 0;
      if ( (_DWORD)v15 != 3 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v14, v12);
        WdLogEvent5_WdAssertion(v29);
      }
      LOBYTE(v13) = v42;
      v16 = DXGMONITOR::_IsSupportedModeInternal(v9, (char *)this + 72, 2LL, v13, &v41, &v39);
      if ( v16 < 0 )
        goto LABEL_21;
      LOBYTE(v17) = v42;
      v16 = DXGMONITOR::_IsSupportedModeInternal(v9, (char *)this + 72, 1LL, v17, &v44, v40);
      if ( v16 < 0 )
        goto LABEL_21;
      v20 = (unsigned __int8)v44;
      v11 = v40[0];
      if ( v41 != (_BYTE)v44 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18);
        v30[4] = v41;
        v30[5] = v39;
        v30[3] = v9;
        v30[6] = v20;
        v30[7] = v11;
        WdLogEvent5_WdDmmEvent(v30);
        v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31);
        v33[3] = *((unsigned int *)this + 21);
        v33[4] = *((unsigned int *)this + 22);
        v33[5] = *((unsigned int *)this + 23);
        v33[6] = *((unsigned int *)this + 24);
        v33[7] = (int)(*((_DWORD *)this + 30) << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v33);
        v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v34);
        v36[3] = *((unsigned int *)this + 25);
        v36[4] = *((unsigned int *)this + 26);
        v36[5] = *((_QWORD *)this + 14);
        WdLogEvent5_WdDmmEvent(v36);
      }
      if ( !(_BYTE)v20 && !v41 || (v10 = 1, !(_BYTE)v20) )
        LODWORD(v11) = v39;
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
    v38 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v38[5] = v16;
    v38[3] = this;
    v38[4] = v9;
    WdLogEvent5_WdError(v38);
    return (unsigned int)v16;
  }
  else
  {
    v21 = v43;
    *a4 = v11;
    *v21 = v10;
    return 0LL;
  }
}
