/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C02E2F00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017E58 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010EDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C010EEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C010EF28 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01466D4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
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
  __int64 v20; // r8
  __int64 v21; // r9
  ApplyPermissionWithinThisScope *v22; // rcx
  __int64 v23; // rdx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  DXGADAPTER *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  ADAPTER_DISPLAY *v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v44; // [rsp+28h] [rbp-29h]
  __int64 v45; // [rsp+28h] [rbp-29h]
  int v46; // [rsp+48h] [rbp-9h] BYREF
  __int64 v47; // [rsp+50h] [rbp-1h]
  char v48; // [rsp+58h] [rbp+7h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v49; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v50[32]; // [rsp+78h] [rbp+27h] BYREF

  v46 = -1;
  v47 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 6025LL);
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
      (__int64)&v49,
      v9 + 56,
      2u,
      v8,
      v44,
      *(_QWORD *)(v9 + 40));
    v13 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((char **)v9, v4);
    v3 = v13;
    if ( v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v22 = (ApplyPermissionWithinThisScope *)&v49;
      v18[3] = v9;
      v18[4] = v4;
      v18[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v22, v19, v20, v21);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)&v49,
      v14,
      v16,
      v17);
    if ( *(_QWORD *)(v9 + 24) != v9 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v9 + 160, v11);
      v25 = *((_QWORD *)Container + 6);
      v26 = *(_QWORD *)(v25 + 8);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(0LL, v23);
        WdLogEvent5_WdAssertion(v27);
        v26 = *(_QWORD *)(v25 + 8);
      }
      v28 = *(DXGADAPTER **)(v26 + 16);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v28) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v32);
      }
      LOBYTE(v30) = *(_BYTE *)(v9 + 76);
      if ( ((unsigned __int16)((2 << v30) - 1) & *(_WORD *)(v9 + 78)) != 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v33);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v50,
        v9 + 56,
        3u,
        v31,
        v45,
        *(_QWORD *)(v9 + 40));
      *((_DWORD *)&v49.EnumPivot + 2) = 0;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v49.hConstrainingVidPn = 0LL;
      else
        v49.hConstrainingVidPn = Container;
      v34 = (ADAPTER_DISPLAY *)*((_QWORD *)v28 + 337);
      v49.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v49.EnumPivot.VidPnSourceId = -1;
      v49.EnumPivot.VidPnTargetId = -1;
      v35 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v34, &v49);
      v3 = v35;
      if ( v35 < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
        v40[3] = Container;
        v40[4] = v4;
        v40[5] = v3;
        WdLogEvent5_WdError(v40);
        v22 = (ApplyPermissionWithinThisScope *)v50;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v50,
        v36,
        v38,
        v39);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  v10 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v10 + 24) = v3;
  WdLogEvent5_WdError(v10);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v11);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v46);
  return (unsigned int)v3;
}
