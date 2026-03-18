/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03A0C20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0FC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01D73F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C03B096C (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v6; // r14
  __int64 v8; // rax
  unsigned int v9; // edi
  VIDPN_MGR *v10; // rdi
  __int64 v11; // rcx
  int DmmSourceModeSetInterface; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  struct HDXGMONITOR__ *v18; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]
  char v25; // [rsp+60h] [rbp-10h]
  struct HDXGMONITOR__ *v26; // [rsp+B0h] [rbp+40h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v27; // [rsp+B8h] [rbp+48h]

  v23 = -1;
  v6 = (unsigned int)a2;
  v24 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v25 = 1;
    v23 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 6038);
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4680LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_phMonitorSourceModeSet != NULL",
      4680LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4681LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_ppDxgDmmMonitorSourceModeSetInterface != NULL",
      4681LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v9 = -1071774973;
    goto LABEL_27;
  }
  v10 = *(VIDPN_MGR **)(v8 + 48);
  v27 = 0LL;
  v11 = *((_QWORD *)v10 + 1);
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    v11 = *((_QWORD *)v10 + 1);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(v11 + 16));
  v13 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v14 = *((_QWORD *)v10 + 1);
    if ( !v14 )
    {
      WdLogSingleEntry0(1LL);
      v14 = *((_QWORD *)v10 + 1);
    }
    WdLogSingleEntry2(2LL, *(_QWORD *)(v14 + 16), v13);
  }
  v15 = *((_QWORD *)v10 + 15);
  v26 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 72));
  v16 = *((_QWORD *)v10 + 15);
  v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v16, v6);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, v6);
    v9 = -1071774971;
    goto LABEL_25;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v10, *(_DWORD *)(v17 + 24), &v26) < 0 || (v18 = v26) == 0LL )
  {
    WdLogSingleEntry1(3LL, v6);
    v9 = -1071774920;
LABEL_25:
    if ( v16 )
      ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
    goto LABEL_27;
  }
  if ( v16 )
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
  v19 = v27;
  *a3 = v18;
  v9 = 0;
  *a4 = v19;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 )
  {
    LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v23);
  }
  return v9;
}
