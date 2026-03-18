/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0145900
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C000C7F4 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C01443A4 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C014441C (MonitorIsUsingSimulatedMonitor.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0145A54 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C02DCF50 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        const struct DMMVIDPN *a2,
        void *const a3,
        __int64 a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r13
  char v14; // di
  char v15; // si
  int v16; // ecx
  ADAPTER_DISPLAY *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ADAPTER_DISPLAY *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rsi
  ADAPTER_DISPLAY *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rsi
  ADAPTER_DISPLAY *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  ADAPTER_DISPLAY *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rdi
  ADAPTER_DISPLAY *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  ADAPTER_DISPLAY *v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rdi
  ADAPTER_DISPLAY *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _DXGKARG_COMMITVIDPN v70; // [rsp+20h] [rbp-20h] BYREF

  v9 = (unsigned int)a4;
  if ( a2 == (const struct DMMVIDPN *)-96LL )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, -96LL);
    WdLogEvent5_WdAssertion(v30);
  }
  v13 = a8;
  *(_QWORD *)&v70.Flags = 0LL;
  v14 = *((_BYTE *)a8 + 4) & 8;
  if ( a2 == (const struct DMMVIDPN *)-88LL )
    v70.hFunctionalVidPn = 0LL;
  else
    v70.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
  v70.hPrimaryAllocation = a3;
  v15 = a7;
  v70.AffectedVidPnSourceId = v9;
  v16 = a7 & 1;
  LOBYTE(a7) = 0;
  v70.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v70.Flags & 0xFFFFFFFC | a6 & 1 | (2 * v16));
  v17 = this[1];
  if ( !v17 )
  {
    v31 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v31);
    v17 = this[1];
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*((DXGADAPTER **)v17 + 2), &a7, (__int64)a3, a4) < 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (_BYTE)a7 || v15 )
    v70.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v70.MonitorConnectivityChecks = a5;
  if ( v14 )
    goto LABEL_18;
  v20 = this[1];
  if ( !v20 )
  {
    v33 = WdLogNewEntry5_WdAssertion(0LL, v18);
    WdLogEvent5_WdAssertion(v33);
    v20 = this[1];
  }
  v21 = ADAPTER_DISPLAY::DdiCommitVidPn(v20, &v70);
  v24 = v21;
  if ( v21 != -1071774920 && v21 != -1071774976 )
  {
    if ( v21 >= 0 )
      goto LABEL_18;
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v36[3] = a2;
    v37 = this[1];
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v35, v34);
      WdLogEvent5_WdAssertion(v38);
      v37 = this[1];
    }
    v36[4] = *((_QWORD *)v37 + 2);
    v36[5] = v24;
    WdLogEvent5_WdError(v36);
LABEL_25:
    DmmLogCommitVidPnFailedPacket(&v70, (unsigned int)v24, 4LL);
    return (unsigned int)v24;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23, v22);
  v41[3] = a2;
  v41[4] = v9;
  v42 = this[1];
  if ( !v42 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40, v39);
    WdLogEvent5_WdAssertion(v43);
    v42 = this[1];
  }
  v41[5] = *((_QWORD *)v42 + 2);
  WdLogEvent5_WdDmmEvent(v41);
  if ( v70.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
    *a9 = 1;
  a7 = 0;
  v47 = this[1];
  if ( !v47 )
  {
    v48 = WdLogNewEntry5_WdAssertion(0LL, v44);
    WdLogEvent5_WdAssertion(v48);
    v47 = this[1];
  }
  if ( (int)MonitorGetNumConnectedMonitor(*((DXGADAPTER **)v47 + 2), &a7, v45, v46) < 0 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v50, v49);
    WdLogEvent5_WdAssertion(v51);
  }
  if ( a7 != 1 || v70.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
    goto LABEL_25;
  v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50, v49);
  v54[3] = a2;
  v54[4] = v9;
  v55 = this[1];
  if ( !v55 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v53, v52);
    WdLogEvent5_WdAssertion(v56);
    v55 = this[1];
  }
  v54[5] = *((_QWORD *)v55 + 2);
  WdLogEvent5_WdDmmEvent(v54);
  v58 = this[1];
  v70.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  if ( !v58 )
  {
    v59 = WdLogNewEntry5_WdAssertion(0LL, v57);
    WdLogEvent5_WdAssertion(v59);
    v58 = this[1];
  }
  v60 = ADAPTER_DISPLAY::DdiCommitVidPn(v58, &v70);
  v63 = v60;
  if ( v60 >= 0 )
  {
    DmmLogCommitVidPnFailedPacket(&v70, (unsigned int)v60, 3LL);
LABEL_18:
    v25 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, a2, v9, v13);
    v28 = v25;
    if ( v25 >= 0 )
      return 0LL;
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v69[5] = (int)(*(_DWORD *)v13 << 28) >> 28;
    v69[3] = a2;
    v69[4] = v9;
    v69[6] = v28;
    WdLogEvent5_WdError(v69);
    return (unsigned int)v28;
  }
  v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v62, v61);
  v66[3] = a2;
  v66[4] = v9;
  v67 = this[1];
  if ( !v67 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v65, v64);
    WdLogEvent5_WdAssertion(v68);
    v67 = this[1];
  }
  v66[5] = *((_QWORD *)v67 + 2);
  v66[6] = v63;
  WdLogEvent5_WdDmmEvent(v66);
  DmmLogCommitVidPnFailedPacket(&v70, (unsigned int)v63, 2LL);
  return (unsigned int)v63;
}
