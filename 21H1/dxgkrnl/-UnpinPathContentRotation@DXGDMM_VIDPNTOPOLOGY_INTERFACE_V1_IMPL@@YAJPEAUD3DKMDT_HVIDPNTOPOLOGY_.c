/*
 * XREFs of ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C01589B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000E1C8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A41C (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011D638 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentRotation(
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
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // [rsp+28h] [rbp-49h]
  DXGK_ENUM_PIVOT v53; // [rsp+48h] [rbp-29h] BYREF
  __int64 Container; // [rsp+50h] [rbp-21h]
  int v55; // [rsp+58h] [rbp-19h] BYREF
  __int64 v56; // [rsp+60h] [rbp-11h]
  char v57; // [rsp+68h] [rbp-9h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v58; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v59[32]; // [rsp+88h] [rbp+17h] BYREF

  v55 = -1;
  v56 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 6029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6029);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 6029LL);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v8;
  if ( !v8 )
  {
    v39 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v39 + 24) = v5;
    WdLogEvent5_WdError(v39);
    LODWORD(v5) = -1071774976;
    goto LABEL_28;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v6);
  if ( !Path )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v40[3] = v7;
    v40[4] = v6;
    v40[5] = v5;
    WdLogEvent5_WdError(v40);
    LODWORD(v5) = -1071774937;
    goto LABEL_28;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(Path) < 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v41);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160, v15);
  v53 = (DXGK_ENUM_PIVOT)__PAIR64__(v6, v7);
  v19 = *(_QWORD *)(Container + 48);
  v20 = -(Container + 88);
  v21 = Container & -(__int64)(Container != -88);
  if ( !v21 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v20, v17);
    WdLogEvent5_WdAssertion(v42);
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
      v43 = WdLogNewEntry5_WdAssertion(v20, v17);
      WdLogEvent5_WdAssertion(v43);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v59,
      v22 + 152,
      3u,
      v18,
      v52,
      *(_QWORD *)(v22 + 136));
    v24 = *(_QWORD *)(v19 + 8);
    if ( !v24 )
    {
      v44 = WdLogNewEntry5_WdAssertion(0LL, v23);
      WdLogEvent5_WdAssertion(v44);
      v24 = *(_QWORD *)(v19 + 8);
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 168)) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v26, v23);
      WdLogEvent5_WdAssertion(v45);
    }
    *((_DWORD *)&v58.EnumPivot + 2) = 0;
    v27 = *(ADAPTER_DISPLAY **)(v19 + 8);
    v58.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v58.EnumPivotType = D3DKMDT_EPT_ROTATION;
    v58.EnumPivot = v53;
    if ( !v27 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, v23);
      WdLogEvent5_WdAssertion(v46);
      v27 = *(ADAPTER_DISPLAY **)(v19 + 8);
    }
    v28 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v27, &v58);
    v5 = v28;
    if ( v28 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v47[3] = v21;
      v47[4] = v58.EnumPivot.VidPnSourceId;
      v47[5] = v58.EnumPivot.VidPnTargetId;
      v47[6] = v5;
      WdLogEvent5_WdError(v47);
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v59, v29);
    if ( (int)v5 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
      v48[3] = v21;
      v48[4] = 10LL;
      v48[5] = &v53;
      v49 = *(_QWORD *)(v19 + 8);
      if ( !v49 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v32, v31);
        WdLogEvent5_WdAssertion(v50);
        v49 = *(_QWORD *)(v19 + 8);
      }
      v48[6] = *(_QWORD *)(v49 + 16);
      v48[7] = (int)v5;
      goto LABEL_26;
    }
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20);
    v38[3] = 10LL;
    v38[4] = v21;
    v38[5] = v53.VidPnSourceId;
    v38[6] = v53.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v38);
  }
  LODWORD(v5) = 0;
LABEL_26:
  if ( (int)v5 < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v51[5] = Container;
    v51[6] = (int)v5;
    v51[3] = v7;
    v51[4] = v6;
    WdLogEvent5_WdError(v51);
  }
  else
  {
    LODWORD(v5) = 0;
  }
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v31);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v55);
  return (unsigned int)v5;
}
