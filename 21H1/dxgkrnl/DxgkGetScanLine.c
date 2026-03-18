/*
 * XREFs of DxgkGetScanLine @ 0x1C015C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0217DC0 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C02800DC (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0285BC0 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C02F8F30 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  struct _KTHREAD **v12; // rsi
  _OWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r12
  int PairingAdapters; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  volatile signed __int64 *v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct DXGADAPTER *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  _BYTE *v46; // rcx
  _DWORD *v47; // r15
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  struct DXGTHREAD *v61; // rax
  DXGSESSIONMGR *v62; // rdi
  unsigned int CurrentProcessSessionId; // eax
  REMOTE_VSYNC *v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r10
  __int64 v87; // rcx
  unsigned int v88; // r8d
  BOOLEAN InVerticalBlank; // al
  UINT v90; // ecx
  int v91; // [rsp+40h] [rbp-138h] BYREF
  __int64 v92; // [rsp+48h] [rbp-130h]
  char v93; // [rsp+50h] [rbp-128h]
  int v94; // [rsp+58h] [rbp-120h] BYREF
  struct DXGADAPTER *v95; // [rsp+60h] [rbp-118h] BYREF
  struct DXGADAPTER *v96; // [rsp+68h] [rbp-110h] BYREF
  struct DXGADAPTER *v97; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v98[6]; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v99; // [rsp+98h] [rbp-E0h] BYREF
  _DXGKARG_GETSCANLINE v100; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v101[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v102[16]; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned int *v103; // [rsp+C8h] [rbp-B0h]
  _BYTE v104[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v105; // [rsp+108h] [rbp-70h]
  char v106; // [rsp+110h] [rbp-68h]
  __int64 v107; // [rsp+118h] [rbp-60h]

  v91 = -1;
  SessionDataForSpecifiedSession = 0LL;
  v92 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v93 = 1;
    v91 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v93 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v91, 2034LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v12 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v12 = v11;
    if ( !v11 )
    {
      v52 = WdLogNewEntry5_WdError(v10, v9);
      LODWORD(SessionDataForSpecifiedSession) = -1073741811;
      *(_QWORD *)(v52 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v52);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v53);
      if ( !v93 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)SessionDataForSpecifiedSession;
      goto LABEL_98;
    }
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v98 = *v13;
  *(_QWORD *)&v100.VidPnTargetId = 0LL;
  v100.ScanLine = 0;
  v14 = v98[0];
  if ( !v98[0] && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    Global = DXGGLOBAL::GetGlobal(v57, v56);
    LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine(
                                                (struct DXGGLOBAL *)((char *)Global + 752),
                                                &v100);
    goto LABEL_43;
  }
  v97 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v96, (unsigned int)v14, v12, &v97, 1);
  v18 = v97;
  if ( !v97 )
  {
    v59 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v59 + 24) = v14;
    LODWORD(SessionDataForSpecifiedSession) = -1073741811;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v59);
    if ( v96 )
      DXGADAPTER::ReleaseReferenceNoTracking(v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v60);
    if ( !v93 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)SessionDataForSpecifiedSession;
LABEL_98:
    McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v91);
    return (unsigned int)SessionDataForSpecifiedSession;
  }
  v19 = PsGetCurrentProcess(v16, v15);
  v20 = PsGetProcessDxgProcess(v19);
  v23 = v20;
  if ( (!v20 || (*(_BYTE *)(v20 + 347) & 0x10) != 0)
    && (v61 = DXGTHREAD::GetCurrent(v22, v21)) != 0LL
    && (v24 = *((_QWORD *)v61 + 1)) != 0
    || (v24 = v23) != 0 )
  {
    v25 = *(_QWORD *)(v24 + 88);
    if ( v25 )
    {
      v94 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v25 + 224))(0LL, 0LL, &v94) )
      {
        if ( !v94 )
        {
          if ( !*((_BYTE *)v18 + 209) )
            goto LABEL_74;
          v62 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 88);
          if ( v62 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v27);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v62,
                                               CurrentProcessSessionId);
          }
          if ( *((_DWORD *)SessionDataForSpecifiedSession + 4730) )
            v64 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v27, v26) + 824);
          else
LABEL_74:
            v64 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v27, v26) + 752);
          LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine(v64, &v100);
          goto LABEL_40;
        }
      }
    }
  }
  v95 = 0LL;
  v28 = v98[1];
  PairingAdapters = DxgkpGetPairingAdapters(v18, v98[1], 0LL, 0LL, &v95, &v99, 0);
  v32 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v31, v30);
    v65[3] = v18;
    v65[4] = v28;
    v65[5] = v32;
    WdLogEvent5_WdEvent(v65);
    if ( v96 )
      DXGADAPTER::ReleaseReferenceNoTracking(v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v66);
    if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v91);
    return (unsigned int)v32;
  }
  else
  {
    v33 = (volatile signed __int64 *)v95;
    if ( !v95 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v69 + 24) = 7499LL;
      WdLogEvent5_WdAssertion(v69);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v101, (struct DXGADAPTER *const)v33, 0LL);
    if ( _InterlockedExchangeAdd64(v33 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v95 + 2), v95);
    if ( v106 )
    {
      v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
      v70[3] = 275LL;
      v70[4] = 4LL;
      v70[5] = v104;
      v70[6] = 0LL;
      v70[7] = 0LL;
      WdLogEvent5_WdCriticalError(v70);
    }
    v37 = v105;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v105 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v105 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, 72);
        KeWaitForSingleObject((char *)v105 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v105, 0LL);
      v37 = v105;
    }
    v107 = 0LL;
    v106 = 1;
    if ( *((_DWORD *)v37 + 50) != 1 )
      goto LABEL_88;
    if ( v103 != (unsigned int *)v105 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v102, 0LL);
      v37 = (DXGADAPTER *)v103[50];
      if ( (_DWORD)v37 != 1 )
      {
        COREACCESS::Release((COREACCESS *)v102);
LABEL_88:
        COREACCESS::Release((COREACCESS *)v104);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v71);
        if ( v96 )
          DXGADAPTER::ReleaseReferenceNoTracking(v96);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v72);
        if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v91);
        return 3221226166LL;
      }
    }
    v101[1] = 1;
    v40 = v95;
    v41 = *((_QWORD *)v95 + 334);
    if ( !v41 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v37, v34);
      *(_QWORD *)(v75 + 24) = 7513LL;
      WdLogEvent5_WdAssertion(v75);
      v41 = *((_QWORD *)v40 + 334);
    }
    v42 = v98[1];
    if ( v98[1] >= *(_DWORD *)(v41 + 80) )
    {
      v76 = WdLogNewEntry5_WdWarning(v37, v34, v36);
      *(_QWORD *)(v76 + 24) = v42;
      LODWORD(SessionDataForSpecifiedSession) = -1073741811;
      *(_QWORD *)(v76 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v76);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v77);
      if ( v96 )
        DXGADAPTER::ReleaseReferenceNoTracking(v96);
      goto LABEL_96;
    }
    if ( !v41 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v37, v34);
      *(_QWORD *)(v78 + 24) = 9656LL;
      WdLogEvent5_WdAssertion(v78);
      v41 = *((_QWORD *)v40 + 334);
    }
    if ( !v41 )
      goto LABEL_111;
    if ( (unsigned int)v42 >= *(_DWORD *)(v41 + 80) )
    {
      v79 = WdLogNewEntry5_WdAssertion(v37, v34);
      *(_QWORD *)(v79 + 24) = 6048LL;
      WdLogEvent5_WdAssertion(v79);
    }
    v43 = 3968 * v42;
    if ( !*(_BYTE *)(*(_QWORD *)(v41 + 112) + 3968 * v42 + 720) )
    {
LABEL_111:
      v86 = *((_QWORD *)v40 + 334);
      v87 = *(_QWORD *)(v86 + 112);
      v88 = *(_DWORD *)(v87 + 3968 * v42 + 1076) + 20;
      v43 = *(unsigned int *)(v87 + 3968 * v42 + 1016);
      InVerticalBlank = v100.InVerticalBlank;
      if ( v88 > (unsigned int)v43 )
        InVerticalBlank = 1;
      v100.InVerticalBlank = InVerticalBlank;
      v90 = 0;
      if ( v88 <= (unsigned int)v43 )
        v90 = v88;
      *(_DWORD *)(3968 * v42 + *(_QWORD *)(v86 + 112) + 1076) = v90;
      v100.ScanLine = v90;
      goto LABEL_39;
    }
    v44 = *(_QWORD *)(*((_QWORD *)v40 + 334) + 112LL);
    v100.VidPnTargetId = *(_DWORD *)(v44 + v43 + 1068);
    if ( v100.VidPnTargetId != -1 )
    {
      if ( *((_QWORD *)v40 + 335) )
      {
        LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(
                                                    *((ADAPTER_DISPLAY **)v40 + 334),
                                                    &v100);
      }
      else
      {
        v85 = *(_QWORD *)(*((_QWORD *)v40 + 334) + 384LL);
        if ( v85 )
        {
          if ( *(_BYTE *)(v85 + 96) )
            LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(
                                                        *(ADAPTER_DISPLAY **)(v85 + 88),
                                                        &v100);
          else
            BLTQUEUE::GetScanLineEmulation(
              (BLTQUEUE *)(*(_QWORD *)(v85 + 8) + 2904 * v42),
              &v100.ScanLine,
              &v100.InVerticalBlank);
        }
        else
        {
          LODWORD(SessionDataForSpecifiedSession) = -1073741811;
        }
      }
LABEL_39:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v43);
LABEL_40:
      if ( v96 && _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v96 + 2), v96);
LABEL_43:
      if ( (int)SessionDataForSpecifiedSession >= 0 )
      {
        v46 = (_BYTE *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v46 = (_BYTE *)MmUserProbeAddress;
        *v46 = v100.InVerticalBlank;
        v47 = (_DWORD *)(a1 + 12);
        if ( (unsigned __int64)v47 >= MmUserProbeAddress )
          v47 = (_DWORD *)MmUserProbeAddress;
        *v47 = v100.ScanLine;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, MmUserProbeAddress);
        if ( v93 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v91);
        }
        return 0LL;
      }
LABEL_96:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v45);
      if ( !v93 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)SessionDataForSpecifiedSession;
      goto LABEL_98;
    }
    v80 = (_QWORD *)WdLogNewEntry5_WdEvent(v44, v43);
    v80[3] = v42;
    v80[4] = v98[0];
    v80[5] = -1071774912LL;
    WdLogEvent5_WdEvent(v80);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v81);
    if ( v96 )
      DXGADAPTER::ReleaseReferenceNoTracking(v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91, v82);
    if ( v93 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v83, &EventProfilerExit, v84, v91);
    return 3223192384LL;
  }
}
