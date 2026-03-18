/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C0123030
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0008174 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00090F8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017E58 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010EDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C010EEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C010EF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r12
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDPNTARGETMODESET *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 Container; // r13
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  ADAPTER_DISPLAY *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+28h] [rbp-39h]
  int v57; // [rsp+48h] [rbp-19h] BYREF
  __int64 v58; // [rsp+50h] [rbp-11h]
  char v59; // [rsp+58h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v60; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v61[32]; // [rsp+78h] [rbp+17h] BYREF
  DXGK_ENUM_PIVOT v62; // [rsp+D8h] [rbp+77h] BYREF

  v57 = -1;
  v3 = (char)a2;
  v58 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v59 = 1;
    v57 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 6016LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( !v5 )
  {
    v42 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdError(v42);
    LODWORD(v14) = -1071774967;
    goto LABEL_30;
  }
  v9 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v14 = v9;
  if ( v9 < 0 )
  {
    v43 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v43 + 24) = this;
    *(_QWORD *)(v43 + 32) = v14;
    goto LABEL_30;
  }
  v15 = *((_QWORD *)v8 + 14);
  if ( !v15 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v44);
  }
  v16 = *(_QWORD *)(v15 + 40);
  if ( !v16 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL, v10);
    WdLogEvent5_WdAssertion(v45);
    v16 = *(_QWORD *)(v15 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v16 + 64, v10);
  v20 = *(_QWORD *)(Container + 48);
  v62.VidPnSourceId = -1;
  v62.VidPnTargetId = *(_DWORD *)(v15 + 24);
  v21 = -(Container + 88);
  v22 = Container & -(__int64)(Container != -88);
  if ( !v22 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v21, v17);
    WdLogEvent5_WdAssertion(v46);
  }
  if ( v3 )
  {
    if ( v22 && *(_DWORD *)((Container & -(__int64)(Container != -88)) + 0x40) == 1833172997 )
      v23 = Container & -(__int64)(Container != -88);
    else
      v23 = 0LL;
    LOBYTE(v21) = *(_BYTE *)(v23 + 172);
    if ( ((unsigned __int16)((2 << v21) - 1) & *(_WORD *)(v23 + 174)) != 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v21, v17);
      WdLogEvent5_WdAssertion(v47);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v61,
      v23 + 152,
      3u,
      v18,
      v56,
      *(_QWORD *)(v23 + 136));
    v25 = *(_QWORD *)(v20 + 8);
    if ( !v25 )
    {
      v48 = WdLogNewEntry5_WdAssertion(0LL, v24);
      WdLogEvent5_WdAssertion(v48);
      v25 = *(_QWORD *)(v20 + 8);
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v26 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 168)) )
    {
      v49 = WdLogNewEntry5_WdAssertion(v27, v24);
      WdLogEvent5_WdAssertion(v49);
    }
    *((_DWORD *)&v60.EnumPivot + 2) = 0;
    v28 = *(ADAPTER_DISPLAY **)(v20 + 8);
    v60.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v60.EnumPivotType = D3DKMDT_EPT_VIDPNTARGET;
    v60.EnumPivot = v62;
    if ( !v28 )
    {
      v50 = WdLogNewEntry5_WdAssertion(0LL, v24);
      WdLogEvent5_WdAssertion(v50);
      v28 = *(ADAPTER_DISPLAY **)(v20 + 8);
    }
    v29 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v28, &v60);
    v14 = v29;
    if ( v29 < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v51[3] = v22;
      v51[4] = v60.EnumPivot.VidPnSourceId;
      v51[5] = v60.EnumPivot.VidPnTargetId;
      v51[6] = v14;
      WdLogEvent5_WdError(v51);
    }
    else
    {
      LODWORD(v14) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v61,
      v30,
      v32,
      v33);
    if ( (int)v14 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
      v52[3] = v22;
      v52[4] = 6LL;
      v52[5] = &v62;
      v53 = *(_QWORD *)(v20 + 8);
      if ( !v53 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v54);
        v53 = *(_QWORD *)(v20 + 8);
      }
      v52[6] = *(_QWORD *)(v53 + 16);
      v52[7] = (int)v14;
      goto LABEL_28;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v17);
    v41[3] = 6LL;
    v41[4] = v22;
    v41[5] = v62.VidPnSourceId;
    v41[6] = v62.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v41);
  }
  LODWORD(v14) = 0;
LABEL_28:
  if ( (int)v14 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v55[3] = *(unsigned int *)(v15 + 24);
    v55[5] = (int)v14;
    v55[4] = Container;
    WdLogEvent5_WdError(v55);
  }
  else
  {
    LODWORD(v14) = 0;
  }
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v34);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v57);
  return (unsigned int)v14;
}
