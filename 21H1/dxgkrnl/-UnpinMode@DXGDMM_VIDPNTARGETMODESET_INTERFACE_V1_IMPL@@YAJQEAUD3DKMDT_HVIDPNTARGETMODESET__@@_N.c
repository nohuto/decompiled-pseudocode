/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C014B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000DC40 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0018818 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011D638 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // [rsp+28h] [rbp-39h]
  int v55; // [rsp+48h] [rbp-19h] BYREF
  __int64 v56; // [rsp+50h] [rbp-11h]
  char v57; // [rsp+58h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v58; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v59[32]; // [rsp+78h] [rbp+17h] BYREF
  DXGK_ENUM_PIVOT v60; // [rsp+D8h] [rbp+77h] BYREF

  v55 = -1;
  v3 = (char)a2;
  v56 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 6016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6016);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 6016LL);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( !v5 )
  {
    v40 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdError(v40);
    LODWORD(v14) = -1071774967;
    goto LABEL_30;
  }
  v9 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v14 = v9;
  if ( v9 < 0 )
  {
    v41 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v41 + 24) = this;
    *(_QWORD *)(v41 + 32) = v14;
    goto LABEL_30;
  }
  v15 = *((_QWORD *)v8 + 14);
  if ( !v15 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v42);
  }
  v16 = *(_QWORD *)(v15 + 40);
  if ( !v16 )
  {
    v43 = WdLogNewEntry5_WdAssertion(0LL, v10);
    WdLogEvent5_WdAssertion(v43);
    v16 = *(_QWORD *)(v15 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v16 + 64, v10);
  v20 = *(_QWORD *)(Container + 48);
  v60.VidPnSourceId = -1;
  v60.VidPnTargetId = *(_DWORD *)(v15 + 24);
  v21 = -(Container + 88);
  v22 = Container & -(__int64)(Container != -88);
  if ( !v22 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v21, v17);
    WdLogEvent5_WdAssertion(v44);
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
      v45 = WdLogNewEntry5_WdAssertion(v21, v17);
      WdLogEvent5_WdAssertion(v45);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v59,
      v23 + 152,
      3u,
      v18,
      v54,
      *(_QWORD *)(v23 + 136));
    v25 = *(_QWORD *)(v20 + 8);
    if ( !v25 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v24);
      WdLogEvent5_WdAssertion(v46);
      v25 = *(_QWORD *)(v20 + 8);
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v26 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 168)) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v27, v24);
      WdLogEvent5_WdAssertion(v47);
    }
    *((_DWORD *)&v58.EnumPivot + 2) = 0;
    v28 = *(ADAPTER_DISPLAY **)(v20 + 8);
    v58.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v58.EnumPivotType = D3DKMDT_EPT_VIDPNTARGET;
    v58.EnumPivot = v60;
    if ( !v28 )
    {
      v48 = WdLogNewEntry5_WdAssertion(0LL, v24);
      WdLogEvent5_WdAssertion(v48);
      v28 = *(ADAPTER_DISPLAY **)(v20 + 8);
    }
    v29 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v28, &v58);
    v14 = v29;
    if ( v29 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v49[3] = v22;
      v49[4] = v58.EnumPivot.VidPnSourceId;
      v49[5] = v58.EnumPivot.VidPnTargetId;
      v49[6] = v14;
      WdLogEvent5_WdError(v49);
    }
    else
    {
      LODWORD(v14) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v59, v30);
    if ( (int)v14 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      v50[3] = v22;
      v50[4] = 6LL;
      v50[5] = &v60;
      v51 = *(_QWORD *)(v20 + 8);
      if ( !v51 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v33, v32);
        WdLogEvent5_WdAssertion(v52);
        v51 = *(_QWORD *)(v20 + 8);
      }
      v50[6] = *(_QWORD *)(v51 + 16);
      v50[7] = (int)v14;
      goto LABEL_28;
    }
  }
  else
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
    v39[3] = 6LL;
    v39[4] = v22;
    v39[5] = v60.VidPnSourceId;
    v39[6] = v60.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v39);
  }
  LODWORD(v14) = 0;
LABEL_28:
  if ( (int)v14 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
    v53[3] = *(unsigned int *)(v15 + 24);
    v53[5] = (int)v14;
    v53[4] = Container;
    WdLogEvent5_WdError(v53);
  }
  else
  {
    LODWORD(v14) = 0;
  }
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v32);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v55);
  return (unsigned int)v14;
}
