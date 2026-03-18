/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1C02F2F10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C01DAE20 (DxgkInvalidateMonitorConnections.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03AFD5C (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C03B005C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // r12d
  const wchar_t *v13; // r9
  __int64 v14; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rax
  DXGADAPTER *v17; // r14
  __int64 v18; // rsi
  int IsTargetForceable; // eax
  DXGADAPTER *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  int MonitorHandle; // eax
  int MonitorType; // eax
  int SimulatedMonitor; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+20h] [rbp-E0h]
  int v32; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v33[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct HDXGMONITOR__ *v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-9Ch]
  int v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h]
  char v39; // [rsp+78h] [rbp-88h]
  __int64 v40[10]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v41[144]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = a2;
  v6 = a3;
  v34 = (struct HDXGMONITOR__ *)a1;
  v7 = a4;
  memset(v40, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v37 = -1;
  v40[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 41;
  LOBYTE(v40[6]) = -1;
  v38 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerEnter, v9, 2179);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2179);
  v10 = v7;
  WdLogSingleEntry5(4LL, v6, v4, v7, SHIDWORD(v34), a1.LowPart);
  v11 = v6;
  v12 = v6 & 0x7FFFFFFF;
  v36 = v11 >> 31;
  if ( v12 > 2 )
  {
    v10 = v12;
    WdLogSingleEntry1(2LL, v12);
    v13 = L"Caller specified an invalid force projection monitor action %I64u.";
LABEL_55:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v10, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_56;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v14 = 3LL;
    }
    else
    {
      if ( (_DWORD)v7 != 2 )
      {
        WdLogSingleEntry1(2LL, v7);
        v13 = L"Caller specified an invalid force projection monitor type %I64u.";
        goto LABEL_55;
      }
      v14 = 4LL;
    }
  }
  else
  {
    v14 = 2LL;
  }
  Global = DXGGLOBAL_GetGlobal();
  v16 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v34);
  v17 = v16;
  if ( !v16 )
  {
    WdLogSingleEntry1(3LL, 1942LL);
LABEL_56:
    LODWORD(v18) = -1073741811;
    goto LABEL_57;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v16, 0LL);
  v18 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v41);
  DXGADAPTER::ReleaseReference(v17);
  if ( (int)v18 >= 0 )
  {
    v33[0] = 0;
    IsTargetForceable = DmmIsTargetForceable(v17, v4, v33, 0);
    LODWORD(v18) = IsTargetForceable;
    if ( IsTargetForceable >= 0 && !v33[0] )
    {
      v20 = v17;
      v21 = v4;
      v22 = 4LL;
LABEL_46:
      WdLogSingleEntry2(v22, v21, v20);
      goto LABEL_47;
    }
    v23 = 0;
    v35 = 0;
    if ( IsTargetForceable >= 0 )
    {
      v34 = 0LL;
      MonitorHandle = MonitorGetMonitorHandle((__int64)v17, (unsigned int)v4, 0, DxgkHandleForceProjectionMonitor, &v34);
      LODWORD(v18) = MonitorHandle;
      if ( MonitorHandle < 0 )
      {
        if ( MonitorHandle != -1073741275 )
          goto LABEL_50;
        if ( v34 )
        {
          WdLogSingleEntry1(1LL, 2009LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"hOldMonitor == NULL", 2009LL, 0LL, 0LL, 0LL, 0LL);
        }
        LODWORD(v18) = 0;
      }
      else
      {
        MonitorType = MonitorGetMonitorType(v34, &v35);
        v23 = v35;
        LODWORD(v18) = MonitorType;
        if ( MonitorType >= 0 && !v35 )
        {
          WdLogSingleEntry1(1LL, 1998LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(!NT_SUCCESS(ntStatus)) || (OldMonitorType != DMM_VMT_UNINITIALIZED)",
            1998LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)MonitorReleaseMonitorHandle((__int64)v17, (__int64)v34, DxgkHandleForceProjectionMonitor) < 0 )
        {
          WdLogSingleEntry1(1LL, 2003LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_ntStatus)", 2003LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (int)v18 < 0 )
          goto LABEL_50;
      }
      if ( v12 != 2 )
      {
        if ( v12 )
        {
          if ( !v23 )
          {
            WdLogSingleEntry1(2LL, v4);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Caller specified traget %I64u does not have any monitor connected.\n",
              v4,
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_47:
            LODWORD(v18) = -1073741811;
            goto LABEL_50;
          }
          if ( (_DWORD)v14 != v23 )
          {
            v20 = (DXGADAPTER *)v23;
            v22 = 3LL;
            v21 = (unsigned int)v14;
            goto LABEL_46;
          }
          SimulatedMonitor = MonitorDestroySimulatedMonitor(v17, v4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v40);
        }
        else
        {
          if ( v23 && (v23 != 1 || (_DWORD)v14 == 4) && v23 != 5 && (int)v14 >= v23 )
          {
            WdLogSingleEntry2(2LL, v14, v23);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The new force porjection monitor type %I64u has lower priority than old one %I64u.\n",
              v14,
              v23,
              0LL,
              0LL,
              0LL);
            goto LABEL_50;
          }
          SimulatedMonitor = MonitorCreateSimulatedMonitor(v17, v31, 0, v32, (__int64)v40);
        }
        LODWORD(v18) = SimulatedMonitor;
      }
    }
LABEL_50:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v41);
    if ( (_BYTE)v36 )
    {
      v27 = DxgkInvalidateMonitorConnections(1uLL);
      if ( v27 < 0 )
        WdLogSingleEntry1(3LL, v27);
    }
    goto LABEL_53;
  }
  WdLogSingleEntry2(3LL, v17, v18);
LABEL_53:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
LABEL_57:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 )
  {
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v37);
  }
  return (unsigned int)v18;
}
