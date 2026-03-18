/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C0122320
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0007C04 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017DF8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010FF20 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0110048 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01100A8 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
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
  __int64 v54; // [rsp+28h] [rbp-49h]
  DXGK_ENUM_PIVOT v55; // [rsp+48h] [rbp-29h] BYREF
  __int64 Container; // [rsp+50h] [rbp-21h]
  int v57; // [rsp+58h] [rbp-19h] BYREF
  __int64 v58; // [rsp+60h] [rbp-11h]
  char v59; // [rsp+68h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v60; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v61[32]; // [rsp+88h] [rbp+17h] BYREF

  v57 = -1;
  v58 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v59 = 1;
    v57 = 6027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6027);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 6027LL);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v8;
  if ( !v8 )
  {
    v41 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v41 + 24) = v5;
    WdLogEvent5_WdError(v41);
    LODWORD(v5) = -1071774976;
    goto LABEL_28;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v6);
  if ( !Path )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v42[3] = v7;
    v42[4] = v6;
    v42[5] = v5;
    WdLogEvent5_WdError(v42);
    LODWORD(v5) = -1071774937;
    goto LABEL_28;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v43);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160, v15);
  v55 = (DXGK_ENUM_PIVOT)__PAIR64__(v6, v7);
  v19 = *(_QWORD *)(Container + 48);
  v20 = -(Container + 88);
  v21 = Container & -(__int64)(Container != -88);
  if ( !v21 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v20, v17);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( a4 )
  {
    if ( v21 && *(_DWORD *)((Container & -(__int64)(Container != -88)) + 0x40) == 1833172997 )
      v22 = Container & -(__int64)(Container != -88);
    else
      v22 = 0LL;
    LOBYTE(v20) = *(_BYTE *)(v22 + 172);
    if ( ((unsigned __int16)((2 << v20) - 1) & *(_WORD *)(v22 + 174)) != 0 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v20, v17);
      WdLogEvent5_WdAssertion(v45);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v61,
      v22 + 152,
      3u,
      v18,
      v54,
      *(_QWORD *)(v22 + 136));
    v24 = *(_QWORD *)(v19 + 8);
    if ( !v24 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v23);
      WdLogEvent5_WdAssertion(v46);
      v24 = *(_QWORD *)(v19 + 8);
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 168)) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v26, v23);
      WdLogEvent5_WdAssertion(v47);
    }
    *((_DWORD *)&v60.EnumPivot + 2) = 0;
    v27 = *(ADAPTER_DISPLAY **)(v19 + 8);
    v60.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v60.EnumPivotType = D3DKMDT_EPT_SCALING;
    v60.EnumPivot = v55;
    if ( !v27 )
    {
      v48 = WdLogNewEntry5_WdAssertion(0LL, v23);
      WdLogEvent5_WdAssertion(v48);
      v27 = *(ADAPTER_DISPLAY **)(v19 + 8);
    }
    v28 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v27, &v60);
    v5 = v28;
    if ( v28 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v49[3] = v21;
      v49[4] = v60.EnumPivot.VidPnSourceId;
      v49[5] = v60.EnumPivot.VidPnTargetId;
      v49[6] = v5;
      WdLogEvent5_WdError(v49);
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v61,
      v29,
      v31,
      v32);
    if ( (int)v5 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
      v50[3] = v21;
      v50[4] = 8LL;
      v50[5] = &v55;
      v51 = *(_QWORD *)(v19 + 8);
      if ( !v51 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v52);
        v51 = *(_QWORD *)(v19 + 8);
      }
      v50[6] = *(_QWORD *)(v51 + 16);
      v50[7] = (int)v5;
      goto LABEL_26;
    }
  }
  else
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20, v17);
    v40[3] = 8LL;
    v40[4] = v21;
    v40[5] = v55.VidPnSourceId;
    v40[6] = v55.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v40);
  }
  LODWORD(v5) = 0;
LABEL_26:
  if ( (int)v5 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
    v53[5] = Container;
    v53[6] = (int)v5;
    v53[3] = v7;
    v53[4] = v6;
    WdLogEvent5_WdError(v53);
  }
  else
  {
    LODWORD(v5) = 0;
  }
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v33);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v57);
  return (unsigned int)v5;
}
