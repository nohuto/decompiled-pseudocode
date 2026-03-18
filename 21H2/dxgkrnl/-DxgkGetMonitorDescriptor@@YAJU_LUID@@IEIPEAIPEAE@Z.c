/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01E63E0
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C01E63B0 (DxgkGetMonitorEdid.c)
 *     DxgkGetMonitorDisplayId @ 0x1C02F2EE0 (DxgkGetMonitorDisplayId.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01639A0 (MonitorGetDisplayIDFromMonitor.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01E65CC (MonitorGetEdidFromMonitor.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  char v6; // r13
  DWORD LowPart; // edi
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r15
  DXGGLOBAL *Global; // rax
  DWORD v13; // ebx
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // r12
  int v16; // eax
  __int64 v17; // r15
  int MonitorHandle; // eax
  DXGMONITOR *v19; // r15
  int EdidFromMonitor; // eax
  unsigned int v21; // ebx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rsi
  __int64 HighPart; // r14
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // r14
  signed int DisplayIDFromMonitor; // eax
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v37; // [rsp+58h] [rbp-A8h] BYREF
  struct _LUID v38; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v39; // [rsp+68h] [rbp-98h] BYREF
  void *v40; // [rsp+70h] [rbp-90h]
  unsigned int *v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  char v44; // [rsp+90h] [rbp-70h]
  unsigned __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v46[144]; // [rsp+A0h] [rbp-60h] BYREF

  v42 = -1;
  v6 = a3;
  LowPart = a1.LowPart;
  v41 = a5;
  v40 = a6;
  v8 = a4;
  v9 = a2;
  v38 = a1;
  v43 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2187);
  v37 = 0LL;
  v36 = 0;
  v39 = 0LL;
  if ( v6 && (v8 & 0x7F) != 0 )
  {
    WdLogSingleEntry2(3LL, v8, 128LL);
    v22 = -1073741811;
    goto LABEL_20;
  }
  v10 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v38, v9, &v37, &v36);
  v11 = v10;
  if ( v10 < 0 )
  {
    v26 = v9;
    HighPart = v38.HighPart;
    WdLogSingleEntry4(2LL, v38.HighPart, LowPart, v26, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
      HighPart,
      LowPart,
      v26,
      v11,
      0LL);
    v22 = v11;
    goto LABEL_20;
  }
  Global = DXGGLOBAL_GetGlobal();
  v13 = v37.LowPart;
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v37, &v45);
  v15 = v14;
  if ( !v14 )
  {
    v28 = v37.HighPart;
    v22 = -1073741811;
    WdLogSingleEntry4(2LL, v37.HighPart, v13, -1073741811LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorDescriptor function, returning 0x%I64x.",
      v28,
      v13,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  if ( !*((_QWORD *)v14 + 349) )
  {
    DXGADAPTER::ReleaseReference(v14);
    v29 = v37.HighPart;
    v22 = -1073741811;
    WdLogSingleEntry4(2LL, v37.HighPart, v13, -1073741811LL, 1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
      v29,
      v13,
      -1073741811LL,
      1LL,
      0LL);
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v14, 0LL);
  DXGADAPTER::ReleaseReference(v15);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46, 0LL);
  LODWORD(v17) = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry3(3LL, v37.HighPart, v13, v16);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle((__int64)v15, v36, 0, DxgkGetMonitorDescriptor, &v39);
    v17 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v19 = v39;
      if ( !v39 )
      {
        WdLogSingleEntry1(1LL, 7829LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 7829LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v6 )
      {
        EdidFromMonitor = MonitorGetEdidFromMonitor(v19, (unsigned int)v8, v41, v40);
        if ( EdidFromMonitor < 0 )
        {
          v32 = EdidFromMonitor;
          v33 = v9;
          v34 = v38.HighPart;
          WdLogSingleEntry5(2LL, v38.HighPart, LowPart, v33, EdidFromMonitor, 1LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to get monitor EDID from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
            v34,
            LowPart,
            v33,
            v32,
            1LL);
        }
        v21 = 0;
      }
      else
      {
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor((__int64)v19, v8, v41, v40);
        v21 = DisplayIDFromMonitor;
        if ( (int)(DisplayIDFromMonitor + 0x80000000) >= 0 && DisplayIDFromMonitor != -1073741789 )
          WdLogSingleEntry4(3LL, v38.HighPart, LowPart, v9, DisplayIDFromMonitor);
      }
      if ( (int)MonitorReleaseMonitorHandle((__int64)v15, (__int64)v19, DxgkGetMonitorDescriptor) < 0 )
      {
        WdLogSingleEntry1(1LL, 7874LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status2)", 7874LL, 0LL, 0LL, 0LL, 0LL);
      }
      v22 = v21;
      goto LABEL_19;
    }
    v30 = v9;
    v31 = v38.HighPart;
    WdLogSingleEntry5(2LL, v38.HighPart, LowPart, v30, MonitorHandle, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v31,
      LowPart,
      v30,
      v17,
      0LL);
  }
  v22 = v17;
LABEL_19:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 )
  {
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v42);
  }
  return v22;
}
