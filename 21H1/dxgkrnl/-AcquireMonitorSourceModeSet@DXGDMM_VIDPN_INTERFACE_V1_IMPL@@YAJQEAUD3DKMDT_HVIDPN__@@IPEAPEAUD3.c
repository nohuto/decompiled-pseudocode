/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02DD360
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F360 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010CB0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C013B1A0 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C02EF830 (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // edi
  VIDPN_MGR *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  struct HDXGMONITOR__ *v37; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v43; // [rsp+20h] [rbp-20h] BYREF
  __int64 v44; // [rsp+28h] [rbp-18h]
  char v45; // [rsp+30h] [rbp-10h]
  struct HDXGMONITOR__ *v46; // [rsp+80h] [rbp+40h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v47; // [rsp+88h] [rbp+48h]

  v43 = -1;
  v44 = 0LL;
  v7 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 6038LL);
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 4559LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 4560LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    v17 = -1071774973;
    goto LABEL_27;
  }
  v18 = *(VIDPN_MGR **)(v12 + 48);
  v47 = 0LL;
  v19 = *((_QWORD *)v18 + 1);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(0LL, v13);
    WdLogEvent5_WdAssertion(v20);
    v19 = *((_QWORD *)v18 + 1);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(v19 + 16));
  v24 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22);
    v27 = *((_QWORD *)v18 + 1);
    v28 = v25;
    if ( !v27 )
    {
      v29 = WdLogNewEntry5_WdAssertion(0LL, v26);
      WdLogEvent5_WdAssertion(v29);
      v27 = *((_QWORD *)v18 + 1);
    }
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(v27 + 16);
    *(_QWORD *)(v28 + 32) = v24;
    WdLogEvent5_WdError(v28);
  }
  v46 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v18 + 10) + 72LL));
  v30 = *((_QWORD *)v18 + 10);
  v31 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v30, v7);
  if ( !v31 )
  {
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = v7;
    WdLogEvent5_WdError(v34);
    v17 = -1071774971;
    goto LABEL_25;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v18, *(unsigned int *)(v31 + 24), &v46) < 0 || (v37 = v46) == 0LL )
  {
    v39 = WdLogNewEntry5_WdWarning(v35, v16, v36);
    *(_QWORD *)(v39 + 24) = v7;
    WdLogEvent5_WdWarning(v39);
    v17 = -1071774920;
LABEL_25:
    if ( v30 )
      ReferenceCounted::Release((ReferenceCounted *)(v30 + 64), v16);
    goto LABEL_27;
  }
  if ( v30 )
    ReferenceCounted::Release((ReferenceCounted *)(v30 + 64), v16);
  v38 = v47;
  *a3 = v37;
  v17 = 0;
  *a4 = v38;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v16);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v43);
  return v17;
}
