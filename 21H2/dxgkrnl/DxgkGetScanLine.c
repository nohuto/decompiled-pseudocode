/*
 * XREFs of DxgkGetScanLine @ 0x1C01EB450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C02CA2D0 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C033D398 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C03BC2EC (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD **v13; // rdi
  struct _KTHREAD **v14; // rsi
  _OWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  int PairingAdapters; // eax
  unsigned int ScanLine; // edi
  volatile signed __int64 *v30; // rdi
  DXGADAPTER *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGADAPTER *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // r12
  _BYTE *v37; // rcx
  _DWORD *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v46; // rdx
  struct DXGTHREAD *v47; // rax
  __int64 v48; // rcx
  DXGSESSIONMGR *v49; // rdi
  unsigned int CurrentProcessSessionId; // eax
  REMOTE_VSYNC *v51; // rcx
  bool v52; // sf
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r10
  __int64 v58; // rcx
  unsigned int v59; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v61; // cc
  UINT v62; // ecx
  int v63; // [rsp+50h] [rbp-138h] BYREF
  __int64 v64; // [rsp+58h] [rbp-130h]
  char v65; // [rsp+60h] [rbp-128h]
  int v66; // [rsp+68h] [rbp-120h] BYREF
  struct DXGADAPTER *v67; // [rsp+70h] [rbp-118h] BYREF
  struct DXGADAPTER *v68; // [rsp+78h] [rbp-110h] BYREF
  struct DXGADAPTER *v69; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v70[6]; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-E0h] BYREF
  _DXGKARG_GETSCANLINE v72; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v73[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v74[16]; // [rsp+C8h] [rbp-C0h] BYREF
  DXGADAPTER *v75; // [rsp+D8h] [rbp-B0h]
  _BYTE v76[16]; // [rsp+108h] [rbp-80h] BYREF
  DXGADAPTER *v77; // [rsp+118h] [rbp-70h]
  char v78; // [rsp+120h] [rbp-68h]
  __int64 v79; // [rsp+128h] [rbp-60h]

  v63 = -1;
  SessionDataForSpecifiedSession = 0LL;
  v64 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2034);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 3)) == 0LL )
  {
    v14 = v13;
    if ( !v13 )
    {
      ScanLine = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return ScanLine;
      goto LABEL_81;
    }
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v70 = *v15;
  *(_QWORD *)&v72.VidPnTargetId = 0LL;
  v72.ScanLine = 0;
  v16 = v70[0];
  if ( !v70[0] && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors((__int64)v15, MmUserProbeAddress, v11, v12) )
  {
    Global = DXGGLOBAL_GetGlobal();
    ScanLine = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 1024), &v72);
    goto LABEL_43;
  }
  v69 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v68, v16, v14, &v69, 1);
  v21 = v69;
  if ( !v69 )
  {
    v46 = v16;
    ScanLine = -1073741811;
    WdLogSingleEntry2(3LL, v46, -1073741811LL);
    if ( v68 )
      DXGADAPTER::ReleaseReference(v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return ScanLine;
    goto LABEL_81;
  }
  v22 = PsGetCurrentProcess(v18, v17, v19, v20);
  v23 = PsGetProcessDxgProcess(v22);
  v24 = v23;
  if ( (!v23 || (*(_DWORD *)(v23 + 424) & 0x80) != 0)
    && (v47 = DXGTHREAD::GetCurrent()) != 0LL
    && (v25 = *((_QWORD *)v47 + 3)) != 0
    || (v25 = v24) != 0 )
  {
    v26 = *(_QWORD *)(v25 + 88);
    if ( v26 )
    {
      v66 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v26 + 224))(0LL, 0LL, &v66) )
      {
        if ( !v66 )
        {
          if ( !*((_BYTE *)v21 + 209) )
            goto LABEL_74;
          v49 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
          if ( v49 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v48);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v49,
                                               CurrentProcessSessionId);
          }
          if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) )
            v51 = (struct DXGGLOBAL *)((char *)DXGGLOBAL_GetGlobal() + 1096);
          else
LABEL_74:
            v51 = (struct DXGGLOBAL *)((char *)DXGGLOBAL_GetGlobal() + 1024);
          ScanLine = REMOTE_VSYNC::GetScanLine(v51, &v72);
          goto LABEL_40;
        }
      }
    }
  }
  v67 = 0LL;
  v27 = v70[1];
  PairingAdapters = DxgkpGetPairingAdapters(v21, v70[1], 0LL, 0LL, &v67, &v71, 0);
  ScanLine = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, v21, v27, PairingAdapters);
    if ( v68 )
      DXGADAPTER::ReleaseReference(v68);
LABEL_78:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 )
      return ScanLine;
    v52 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_80:
    if ( v52 )
LABEL_81:
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v63);
    return ScanLine;
  }
  v30 = (volatile signed __int64 *)v67;
  if ( !v67 )
  {
    WdLogSingleEntry1(1LL, 7610LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 7610LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, (struct DXGADAPTER *const)v30, 0LL);
  if ( _InterlockedExchangeAdd64(v30 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v67 + 2), v67);
  if ( v78 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v76, 0LL, 0LL);
  v31 = v77;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v77 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v77 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (const EVENT_DESCRIPTOR *)"g", v33, 72);
      KeWaitForSingleObject((char *)v77 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v77, 0LL);
    v31 = v77;
  }
  v79 = 0LL;
  v78 = 1;
  if ( *((_DWORD *)v31 + 50) != 1 )
    goto LABEL_89;
  if ( v75 != v77 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v74, 0LL);
    if ( *((_DWORD *)v75 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v74);
LABEL_89:
      COREACCESS::Release((COREACCESS *)v76);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
      if ( v68 )
        DXGADAPTER::ReleaseReference(v68);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v63);
      return 3221226166LL;
    }
  }
  v73[1] = 1;
  v34 = v67;
  v35 = *((_QWORD *)v67 + 349);
  if ( !v35 )
  {
    WdLogSingleEntry1(1LL, 7624LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      7624LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v35 = *((_QWORD *)v34 + 349);
  }
  v36 = v70[1];
  if ( v70[1] >= *(_DWORD *)(v35 + 96) )
  {
    ScanLine = -1073741811;
    WdLogSingleEntry2(3LL, v70[1], -1073741811LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
    if ( v68 )
      DXGADAPTER::ReleaseReference(v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 )
      return ScanLine;
    v43 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v52 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_80;
  }
  if ( !v35 )
  {
    WdLogSingleEntry1(1LL, 10119LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10119LL, 0LL, 0LL, 0LL, 0LL);
    v35 = *((_QWORD *)v34 + 349);
  }
  if ( !v35 )
    goto LABEL_110;
  if ( (unsigned int)v36 >= *(_DWORD *)(v35 + 96) )
  {
    WdLogSingleEntry1(1LL, 6126LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      6126LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v35 + 128) + 4000 * v36 + 760) )
  {
LABEL_110:
    v57 = *((_QWORD *)v34 + 349);
    v58 = *(_QWORD *)(v57 + 128);
    v59 = *(_DWORD *)(v58 + 4000 * v36 + 1096) + 20;
    InVerticalBlank = v72.InVerticalBlank;
    v61 = v59 <= *(_DWORD *)(v58 + 4000 * v36 + 1012);
    if ( v59 > *(_DWORD *)(v58 + 4000 * v36 + 1012) )
      InVerticalBlank = 1;
    v72.InVerticalBlank = InVerticalBlank;
    v62 = 0;
    if ( v61 )
      v62 = v59;
    *(_DWORD *)(4000 * v36 + *(_QWORD *)(v57 + 128) + 1096) = v62;
    v72.ScanLine = v62;
    goto LABEL_115;
  }
  v72.VidPnTargetId = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 349) + 128LL) + 4000 * v36 + 1088);
  if ( v72.VidPnTargetId != -1 )
  {
    if ( *((_QWORD *)v34 + 350) )
    {
      ScanLine = ADAPTER_DISPLAY::DdiGetScanLine(*((ADAPTER_DISPLAY **)v34 + 349), &v72);
LABEL_39:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
LABEL_40:
      if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v68 + 2), v68);
LABEL_43:
      if ( (ScanLine & 0x80000000) == 0 )
      {
        v37 = (_BYTE *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v37 = (_BYTE *)MmUserProbeAddress;
        *v37 = v72.InVerticalBlank;
        v38 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v38 = (_DWORD *)MmUserProbeAddress;
        *v38 = v72.ScanLine;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
        if ( v65 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v63);
        }
        return 0LL;
      }
      goto LABEL_78;
    }
    v56 = *(_QWORD *)(*((_QWORD *)v34 + 349) + 448LL);
    if ( !v56 )
    {
      ScanLine = -1073741811;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v56 + 96) )
      LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(*(ADAPTER_DISPLAY **)(v56 + 88), &v72);
    else
      BLTQUEUE::GetScanLineEmulation(
        (BLTQUEUE *)(*(_QWORD *)(v56 + 8) + 2920 * v36),
        &v72.ScanLine,
        &v72.InVerticalBlank);
LABEL_115:
    ScanLine = (unsigned int)SessionDataForSpecifiedSession;
    goto LABEL_39;
  }
  WdLogSingleEntry3(4LL, v36, v70[0], -1071774912LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
  if ( v68 )
    DXGADAPTER::ReleaseReference(v68);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v55, v63);
  return 3223192384LL;
}
