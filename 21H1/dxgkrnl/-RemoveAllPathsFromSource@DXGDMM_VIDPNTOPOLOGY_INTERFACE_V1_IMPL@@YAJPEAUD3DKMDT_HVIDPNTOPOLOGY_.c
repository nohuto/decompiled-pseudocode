/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C02DF940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000E1C8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C011D638 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C013E3E8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  ApplyPermissionWithinThisScope *v20; // rcx
  __int64 v21; // rdx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  DXGADAPTER *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  ADAPTER_DISPLAY *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // [rsp+28h] [rbp-29h]
  __int64 v41; // [rsp+28h] [rbp-29h]
  int v42; // [rsp+48h] [rbp-9h] BYREF
  __int64 v43; // [rsp+50h] [rbp-1h]
  char v44; // [rsp+58h] [rbp+7h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v45; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v46[32]; // [rsp+78h] [rbp+27h] BYREF

  v42 = -1;
  v43 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 6025LL);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v9 = v5;
  if ( v5 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v12);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v45,
      v9 + 56,
      2u,
      v8,
      v40,
      *(_QWORD *)(v9 + 40));
    v13 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((char **)v9, v4);
    v3 = v13;
    if ( v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v20 = (ApplyPermissionWithinThisScope *)&v45;
      v18[3] = v9;
      v18[4] = v4;
      v18[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v20, v19);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v45, v14);
    if ( *(_QWORD *)(v9 + 24) != v9 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v9 + 160, v11);
      v23 = *((_QWORD *)Container + 6);
      v24 = *(_QWORD *)(v23 + 8);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdAssertion(0LL, v21);
        WdLogEvent5_WdAssertion(v25);
        v24 = *(_QWORD *)(v23 + 8);
      }
      v26 = *(DXGADAPTER **)(v24 + 16);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v26) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v30);
      }
      LOBYTE(v28) = *(_BYTE *)(v9 + 76);
      if ( ((unsigned __int16)((2 << v28) - 1) & *(_WORD *)(v9 + 78)) != 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v31);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v46,
        v9 + 56,
        3u,
        v29,
        v41,
        *(_QWORD *)(v9 + 40));
      *((_DWORD *)&v45.EnumPivot + 2) = 0;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v45.hConstrainingVidPn = 0LL;
      else
        v45.hConstrainingVidPn = Container;
      v32 = (ADAPTER_DISPLAY *)*((_QWORD *)v26 + 334);
      v45.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v45.EnumPivot.VidPnSourceId = -1;
      v45.EnumPivot.VidPnTargetId = -1;
      v33 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v32, &v45);
      v3 = v33;
      if ( v33 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
        v36[3] = Container;
        v36[4] = v4;
        v36[5] = v3;
        WdLogEvent5_WdError(v36);
        v20 = (ApplyPermissionWithinThisScope *)v46;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v46, v34);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  v10 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v10 + 24) = v3;
  WdLogEvent5_WdError(v10);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v11);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v42);
  return (unsigned int)v3;
}
