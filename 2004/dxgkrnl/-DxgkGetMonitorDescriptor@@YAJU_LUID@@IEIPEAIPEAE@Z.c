/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0166B90
 * Callers:
 *     DxgkGetMonitorEdid @ 0x1C0166B60 (DxgkGetMonitorEdid.c)
 *     DxgkGetMonitorDisplayId @ 0x1C02977F0 (DxgkGetMonitorDisplayId.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011D0FC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C0126370 (MonitorGetMonitorHandle.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C012A280 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012C2CC (MonitorReleaseMonitorHandle.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01619FC (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetEdidFromMonitor @ 0x1C0166D80 (MonitorGetEdidFromMonitor.c)
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
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  DXGGLOBAL *Global; // rax
  DWORD v18; // ebx
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGADAPTER *v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rsi
  int MonitorHandle; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct HDXGMONITOR__ *v31; // rsi
  int EdidFromMonitor; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 HighPart; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  int DisplayIDFromMonitor; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID v60; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID v61; // [rsp+40h] [rbp-C0h] BYREF
  struct HDXGMONITOR__ *v62; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v63; // [rsp+50h] [rbp-B0h]
  unsigned int *v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h]
  char v67; // [rsp+70h] [rbp-90h]
  unsigned __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v69[144]; // [rsp+80h] [rbp-80h] BYREF

  v65 = -1;
  v6 = a3;
  LowPart = a1.LowPart;
  v64 = a5;
  v63 = a6;
  v8 = a4;
  v9 = a2;
  v61 = a1;
  v66 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2187);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2187LL);
  v60 = 0LL;
  v59 = 0;
  v62 = 0LL;
  if ( v6 && (v8 & 0x7F) != 0 )
  {
    v43 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v43 + 24) = v8;
    *(_QWORD *)(v43 + 32) = 128LL;
    WdLogEvent5_WdWarning(v43);
    LODWORD(v16) = -1073741811;
    goto LABEL_19;
  }
  v13 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v61, (unsigned int)v9, &v60, &v59);
  v16 = v13;
  if ( v13 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v44[3] = v61.HighPart;
    v45 = LowPart;
    v44[5] = v9;
    v44[6] = v16;
LABEL_28:
    v44[4] = v45;
    WdLogEvent5_WdError(v44);
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal(v15, v14);
  v18 = v60.LowPart;
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v60, &v68);
  v22 = v19;
  if ( !v19 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v44[6] = 0LL;
LABEL_27:
    v44[3] = v60.HighPart;
    v45 = v18;
    LODWORD(v16) = -1073741811;
    v44[5] = -1073741811LL;
    goto LABEL_28;
  }
  if ( !*((_QWORD *)v19 + 337) )
  {
    DXGADAPTER::ReleaseReference(v19);
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
    v44[6] = 1LL;
    goto LABEL_27;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v19, 0LL);
  DXGADAPTER::ReleaseReference(v22);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69, 0LL);
  v27 = v23;
  if ( v23 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v48[3] = v60.HighPart;
    v48[4] = v18;
    v48[5] = v27;
    WdLogEvent5_WdWarning(v48);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle((__int64)v22, v59, 0LL, DxgkGetMonitorDescriptor, &v62);
    v27 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v31 = v62;
      if ( !v62 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v51 + 24) = 7377LL;
        WdLogEvent5_WdAssertion(v51);
      }
      if ( v6 )
      {
        EdidFromMonitor = MonitorGetEdidFromMonitor(v31, v8, v64, v63);
        v36 = EdidFromMonitor;
        if ( EdidFromMonitor < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
          v52[3] = v61.HighPart;
          v52[4] = LowPart;
          v52[5] = v9;
          v52[6] = v36;
          v52[7] = 1LL;
          WdLogEvent5_WdError(v52);
        }
        LODWORD(v16) = 0;
      }
      else
      {
        DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v31, v8, v64, v63);
        v16 = DisplayIDFromMonitor;
        v56 = DisplayIDFromMonitor + 0x80000000;
        if ( (int)v56 >= 0 && DisplayIDFromMonitor != -1073741789 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v54, v55);
          v57[3] = v61.HighPart;
          v57[4] = LowPart;
          v57[5] = v9;
          v57[6] = v16;
          WdLogEvent5_WdWarning(v57);
        }
      }
      if ( (int)MonitorReleaseMonitorHandle((__int64)v22, (__int64)v31, DxgkGetMonitorDescriptor, v35) < 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v38, v37);
        *(_QWORD *)(v58 + 24) = 7422LL;
        WdLogEvent5_WdAssertion(v58);
      }
      goto LABEL_18;
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    HighPart = v61.HighPart;
    v49[7] = 0LL;
    v49[3] = HighPart;
    v49[4] = LowPart;
    v49[5] = v9;
    v49[6] = v27;
    WdLogEvent5_WdError(v49);
  }
  LODWORD(v16) = v27;
LABEL_18:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v37);
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v39);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v65);
  return (unsigned int)v16;
}
