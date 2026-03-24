/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C0297D00
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007D38 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0129A20 (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C012BB78 (MonitorGetMonitorType.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012F96C (MonitorReleaseMonitorHandle.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C015F010 (DxgkInvalidateMonitorConnections.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DDF78 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F31C4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C02F352C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  __int64 v18; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  signed int v36; // edi
  int MonitorHandle; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int MonitorType; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int SimulatedMonitor; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // r8
  int v61; // [rsp+20h] [rbp-E0h]
  int v62; // [rsp+30h] [rbp-D0h]
  char v63[4]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v64; // [rsp+44h] [rbp-BCh] BYREF
  struct HDXGMONITOR__ *v65; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID v66; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h]
  char v69; // [rsp+68h] [rbp-98h]
  unsigned __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  __int64 v71[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v72[144]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  v6 = a3;
  v66 = a1;
  v7 = a4;
  memset(v71, 0, 0x48uLL);
  v8 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v71[1]);
  v67 = -1;
  v68 = 0LL;
  v71[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v71[3]) = 41;
  LOBYTE(v71[6]) = -1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerEnter, v10, 2179);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2179LL);
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
  v13[4] = v4;
  v13[6] = v66.HighPart;
  v13[7] = a1.LowPart;
  v13[3] = v6;
  v13[5] = v7;
  WdLogEvent5_WdEvent(v13);
  v16 = v6;
  v17 = v6 & 0x7FFFFFFF;
  v66.LowPart = v16 >> 31;
  if ( v17 > 2 )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v18 + 24) = v17;
LABEL_53:
    WdLogEvent5_WdError(v18);
    goto LABEL_54;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( (_DWORD)v7 != 2 )
      {
        v18 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v18 + 24) = v7;
        goto LABEL_53;
      }
      v8 = 4;
    }
  }
  else
  {
    v8 = 2;
  }
  Global = DXGGLOBAL::GetGlobal(v15, v14);
  v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v70);
  v24 = v20;
  if ( !v20 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 1923LL;
    WdLogEvent5_WdWarning(v25);
LABEL_54:
    LODWORD(v28) = -1073741811;
    goto LABEL_55;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v20, 0LL);
  v28 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v72, (unsigned int)(v27 + 1));
  DXGADAPTER::ReleaseReference(v24);
  if ( (int)v28 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v24;
    *(_QWORD *)(v32 + 32) = v28;
    goto LABEL_50;
  }
  v63[0] = 0;
  LODWORD(v28) = DmmIsTargetForceable(v24, (unsigned int)v4, v63, 0LL);
  if ( (int)v28 >= 0 && !v63[0] )
  {
    v35 = WdLogNewEntry5_WdEvent(v34, v33);
    *(_QWORD *)(v35 + 24) = v4;
    *(_QWORD *)(v35 + 32) = v24;
    WdLogEvent5_WdEvent(v35);
    LODWORD(v28) = -1073741811;
  }
  v36 = 0;
  v64 = 0;
  if ( (int)v28 >= 0 )
  {
    v65 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle((__int64)v24, (unsigned int)v4, 0LL, DxgkHandleForceProjectionMonitor, &v65);
    LODWORD(v28) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle == -1073741275 )
      {
        if ( v65 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v48 + 24) = 1990LL;
          WdLogEvent5_WdAssertion(v48);
        }
        LODWORD(v28) = 0;
      }
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v65, &v64, v40, v41);
      v36 = v64;
      LODWORD(v28) = MonitorType;
      if ( MonitorType >= 0 && !v64 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v44, v43);
        *(_QWORD *)(v46 + 24) = 1979LL;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( (int)MonitorReleaseMonitorHandle((__int64)v24, (__int64)v65, DxgkHandleForceProjectionMonitor, v45) < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v39, v38);
        *(_QWORD *)(v47 + 24) = 1984LL;
        WdLogEvent5_WdAssertion(v47);
      }
    }
    if ( (int)v28 >= 0 && v17 != 2 )
    {
      if ( !v17 )
      {
        if ( v36 && (v36 != 1 || v8 == 4) && v36 != 5 && (int)v8 >= v36 )
        {
          v49 = WdLogNewEntry5_WdError(v39, v38);
          *(_QWORD *)(v49 + 24) = v8;
          *(_QWORD *)(v49 + 32) = v36;
          WdLogEvent5_WdError(v49);
          goto LABEL_47;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v24, v61, 0, v62, (__int64)v71);
        goto LABEL_46;
      }
      if ( v36 )
      {
        if ( v8 == v36 )
        {
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v24, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v71);
LABEL_46:
          LODWORD(v28) = SimulatedMonitor;
          goto LABEL_47;
        }
        v52 = WdLogNewEntry5_WdWarning(v39, v38, v40);
        *(_QWORD *)(v52 + 24) = v8;
        *(_QWORD *)(v52 + 32) = v36;
        WdLogEvent5_WdWarning(v52);
      }
      else
      {
        v51 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v51 + 24) = v4;
        WdLogEvent5_WdError(v51);
      }
      LODWORD(v28) = -1073741811;
    }
  }
LABEL_47:
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v72);
  if ( !LOBYTE(v66.LowPart) )
    goto LABEL_51;
  v54 = DxgkInvalidateMonitorConnections(1uLL);
  v57 = v54;
  if ( v54 >= 0 )
    goto LABEL_51;
  v32 = WdLogNewEntry5_WdWarning(v55, v53, v56);
  *(_QWORD *)(v32 + 24) = v57;
LABEL_50:
  WdLogEvent5_WdWarning(v32);
LABEL_51:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72, v53);
LABEL_55:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v26);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v67);
  return (unsigned int)v28;
}
