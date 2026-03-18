/*
 * XREFs of DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C0176F60 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C01E7A80 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C002B5A4 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C002B654 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __chkstk_0 @ 0x1C002CAF0 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C002EBB8 (McTemplateK0tt_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U2@U1@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@4355555@Z @ 0x1C0049580 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0160104 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01A5434 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C01C5974 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02BF51C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        union _LARGE_INTEGER *a6,
        char a7)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // r9
  int v19; // edx
  struct DXGADAPTER *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  signed __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  int PairingAdapters; // eax
  __int64 v32; // r15
  volatile signed __int64 *v33; // rdi
  volatile signed __int64 *v34; // rsi
  signed __int64 v35; // rcx
  struct DXGADAPTER *v36; // rdi
  struct DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  DXGADAPTER *v40; // rsi
  char *v41; // r9
  struct DXGADAPTER *v42; // r15
  ADAPTER_DISPLAY **v43; // r8
  ADAPTER_DISPLAY *v44; // rdi
  unsigned int v45; // edx
  unsigned int v46; // ecx
  char v47; // al
  __int64 v48; // r8
  char *v49; // r15
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // r12d
  ADAPTER_DISPLAY **v53; // r13
  ADAPTER_DISPLAY *v54; // rsi
  __int64 v55; // rcx
  NTSTATUS v56; // edi
  ULONG v57; // edi
  NTSTATUS v58; // eax
  NTSTATUS v59; // edx
  int v60; // edi
  __int64 v61; // r8
  __int64 v62; // rcx
  bool v63; // zf
  bool v64; // dl
  unsigned int v65; // eax
  DXGGLOBAL **v66; // rcx
  DXGGLOBAL **v67; // rcx
  int v69; // r15d
  BLTQUEUE **v70; // rax
  int v71; // r9d
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v74; // r12
  __int64 v75; // r9
  int v76; // edx
  struct DXGTHREAD *v77; // rax
  DXGSESSIONMGR *v78; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGADAPTER *v80; // r8
  DXGADAPTER *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // rax
  int LiveDumpWithWdLogs; // r15d
  struct DXGADAPTER *v86; // rsi
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // eax
  __int64 WaitMode; // [rsp+20h] [rbp-100h]
  int Alertable; // [rsp+28h] [rbp-F8h]
  unsigned __int8 v93; // [rsp+A0h] [rbp-80h]
  bool v94; // [rsp+A1h] [rbp-7Fh]
  unsigned int v95; // [rsp+A4h] [rbp-7Ch]
  unsigned int v96; // [rsp+A4h] [rbp-7Ch]
  char v97; // [rsp+A8h] [rbp-78h]
  char v98; // [rsp+A9h] [rbp-77h]
  char v99; // [rsp+AAh] [rbp-76h]
  unsigned int v100; // [rsp+ACh] [rbp-74h]
  __int64 v101; // [rsp+B0h] [rbp-70h]
  __int64 v102; // [rsp+B0h] [rbp-70h]
  __int64 v103; // [rsp+B0h] [rbp-70h]
  NTSTATUS v104; // [rsp+B8h] [rbp-68h] BYREF
  struct DXGADAPTER *v105; // [rsp+C0h] [rbp-60h] BYREF
  DXGADAPTER *v106; // [rsp+C8h] [rbp-58h] BYREF
  char *v107; // [rsp+D0h] [rbp-50h]
  struct DXGADAPTER *v108; // [rsp+D8h] [rbp-48h]
  struct DXGDEVICE *v109; // [rsp+E0h] [rbp-40h] BYREF
  __int16 v110[2]; // [rsp+E8h] [rbp-38h] BYREF
  int v111; // [rsp+ECh] [rbp-34h] BYREF
  struct DXGDEVICE *v112; // [rsp+F0h] [rbp-30h] BYREF
  ADAPTER_DISPLAY **v113; // [rsp+F8h] [rbp-28h]
  PLARGE_INTEGER Timeout; // [rsp+100h] [rbp-20h] BYREF
  void *Src; // [rsp+108h] [rbp-18h] BYREF
  int v116; // [rsp+110h] [rbp-10h] BYREF
  int IsDebuggerPresent; // [rsp+114h] [rbp-Ch] BYREF
  int v118; // [rsp+118h] [rbp-8h] BYREF
  int v119; // [rsp+11Ch] [rbp-4h] BYREF
  int v120; // [rsp+120h] [rbp+0h] BYREF
  int v121; // [rsp+124h] [rbp+4h] BYREF
  int v122; // [rsp+128h] [rbp+8h] BYREF
  int v123; // [rsp+12Ch] [rbp+Ch] BYREF
  __int64 v124; // [rsp+130h] [rbp+10h] BYREF
  void *v125; // [rsp+138h] [rbp+18h] BYREF
  __int64 v126; // [rsp+140h] [rbp+20h] BYREF
  __int64 v127; // [rsp+148h] [rbp+28h] BYREF
  unsigned __int64 v128; // [rsp+150h] [rbp+30h] BYREF
  unsigned __int64 v129; // [rsp+158h] [rbp+38h] BYREF
  _BYTE v130[64]; // [rsp+160h] [rbp+40h] BYREF
  char v131; // [rsp+1A0h] [rbp+80h] BYREF
  char v132; // [rsp+1A1h] [rbp+81h]
  char v133[8]; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v134; // [rsp+1B0h] [rbp+90h]
  struct DXGADAPTER *v135; // [rsp+1B8h] [rbp+98h]
  char v136; // [rsp+1C0h] [rbp+A0h]
  __int64 v137; // [rsp+1C8h] [rbp+A8h]
  char v138[8]; // [rsp+1E8h] [rbp+C8h] BYREF
  __int64 v139; // [rsp+1F0h] [rbp+D0h]
  struct DXGADAPTER *v140; // [rsp+1F8h] [rbp+D8h]
  char v141; // [rsp+200h] [rbp+E0h]
  char *v142; // [rsp+208h] [rbp+E8h]
  PVOID Object[64]; // [rsp+230h] [rbp+110h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+430h] [rbp+310h] BYREF

  SessionDataForSpecifiedSession = 0LL;
  Src = a5;
  v8 = a4;
  v9 = (unsigned int)a2;
  Timeout = a6;
  v104 = a4;
  v100 = a3;
  v95 = a2;
  v10 = (unsigned int)a1;
  v109 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v14 = *((_QWORD *)Current + 3)) == 0 )
  {
    v14 = v13;
    if ( !v13 )
    {
      LODWORD(v32) = -1073741811;
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
      return (unsigned int)v32;
    }
  }
  if ( v8 >= 0x3F )
  {
    LODWORD(v32) = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    return (unsigned int)v32;
  }
  KeEnterCriticalRegion();
  if ( !(_DWORD)v10 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    Global = DXGGLOBAL_GetGlobal();
    LODWORD(v32) = REMOTE_VSYNC::WaitForVSync((BLTQUEUE **)Global + 128);
    goto LABEL_119;
  }
  if ( v14 != -248 && *(struct _KTHREAD **)(v14 + 256) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v71 = *(_DWORD *)(v14 + 272);
      if ( v71 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (const EVENT_DESCRIPTOR *)"g", v16, v71);
    }
    ExAcquirePushLockSharedEx(v14 + 248, 0LL);
  }
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (*(_DWORD *)(v14 + 424) & 0x100) != 0 )
  {
    v74 = *(_QWORD *)(v14 + 608);
    v102 = v74 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v74 + 248));
    if ( v17 < *(_DWORD *)(v74 + 296) )
    {
      v75 = *(_QWORD *)(v74 + 280);
      v76 = *(_DWORD *)(v75 + 16LL * v17 + 8);
      if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v75 + 16LL * v17 + 8) & 0x60)
        && (v76 & 0x2000) == 0
        && (v76 & 0x1F) != 0 )
      {
        if ( (v76 & 0x1F) == 1 )
        {
          v20 = *(struct DXGADAPTER **)(v75 + 16LL * v17);
          goto LABEL_149;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v20 = 0LL;
LABEL_149:
    v108 = v20;
    ExReleasePushLockSharedEx(v102, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  if ( v17 < *(_DWORD *)(v14 + 296) )
  {
    v18 = *(_QWORD *)(v14 + 280);
    v19 = *(_DWORD *)(v18 + 16LL * v17 + 8);
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      if ( (v19 & 0x1F) == 1 )
      {
        v20 = *(struct DXGADAPTER **)(v18 + 16LL * v17);
        v108 = v20;
        goto LABEL_19;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v108 = 0LL;
  v20 = 0LL;
LABEL_19:
  v21 = v14 + 248;
  if ( !v20 )
  {
    ExReleasePushLockSharedEx(v21, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v32) = -1073741811;
    WdLogSingleEntry2(3LL, v10, -1073741811LL);
    goto LABEL_119;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v20 + 3);
  ExReleasePushLockSharedEx(v21, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v9 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v112, v9, (struct _KTHREAD **)v14, &v109);
    if ( !v109 )
    {
      WdLogSingleEntry2(3LL, v20, v9);
      if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
      LODWORD(v32) = -1073741811;
      goto LABEL_117;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v109 + 8);
    if ( v112 )
    {
      v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v23 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
    }
  }
  v26 = PsGetCurrentProcess(v23, v22, v24, v25);
  v27 = PsGetProcessDxgProcess(v26);
  v28 = v27;
  if ( (!v27 || (*(_DWORD *)(v27 + 424) & 0x80) != 0)
    && (v77 = DXGTHREAD::GetCurrent()) != 0LL
    && (v29 = *((_QWORD *)v77 + 3)) != 0
    || (v29 = v28) != 0 )
  {
    v30 = *(_QWORD *)(v29 + 88);
    if ( v30 )
    {
      v111 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v30 + 224))(0LL, 0LL, &v111) )
      {
        if ( !v111 )
        {
          if ( !*((_BYTE *)v20 + 209) )
            goto LABEL_125;
          v78 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
          if ( v78 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v78,
                                               CurrentProcessSessionId);
          }
          if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) )
            v70 = (BLTQUEUE **)((char *)DXGGLOBAL_GetGlobal() + 1096);
          else
LABEL_125:
            v70 = (BLTQUEUE **)((char *)DXGGLOBAL_GetGlobal() + 1024);
          LODWORD(v32) = REMOTE_VSYNC::WaitForVSync(v70);
          goto LABEL_116;
        }
      }
    }
  }
  v106 = 0LL;
  v105 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v20, v100, &v106, &v128, &v105, &v129, 0);
  v32 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, v20, v100, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)v20,
      v100,
      v32,
      0LL,
      0LL);
    goto LABEL_116;
  }
  v33 = (volatile signed __int64 *)v106;
  v34 = (volatile signed __int64 *)v105;
  if ( !v106 || !v105 )
  {
    WdLogSingleEntry1(1LL, 6999LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      6999LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v109
    && (v33 != *(volatile signed __int64 **)(*((_QWORD *)v109 + 2) + 16LL)
     || v34 != *((volatile signed __int64 **)v109 + 231)) )
  {
    WdLogSingleEntry2(3LL, v20, v95);
    LODWORD(v32) = -1073741811;
    goto LABEL_116;
  }
  v132 = 0;
  v135 = (struct DXGADAPTER *)v33;
  v136 = 0;
  v137 = 0LL;
  if ( v33 )
  {
    _InterlockedIncrement64(v33 + 3);
    v33 = (volatile signed __int64 *)v106;
    v34 = (volatile signed __int64 *)v105;
    v134 = -1LL;
  }
  if ( !v34 )
    v34 = v33;
  v140 = (struct DXGADAPTER *)v34;
  v141 = 0;
  v142 = 0LL;
  if ( v34 )
  {
    _InterlockedIncrement64(v34 + 3);
    v33 = (volatile signed __int64 *)v106;
    v139 = -1LL;
  }
  if ( _InterlockedExchangeAdd64(v33 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v106 + 2), v106);
  v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v36 = v105;
  if ( v35 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v105 + 2), v105);
  if ( *((_DWORD *)v36 + 40) == 1 )
  {
    v80 = v36;
    v81 = v106;
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
      (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v130,
      v106,
      v80);
    if ( *((_DWORD *)v81 + 50) == 1 && *((_DWORD *)v105 + 50) == 1 )
    {
      if ( v100 < *(_DWORD *)(*((_QWORD *)v105 + 349) + 96LL) )
      {
        if ( DXGADAPTER::IsVSyncAvailable(v105, v100) )
        {
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v130);
          goto LABEL_41;
        }
        v69 = -1071775738;
      }
      else
      {
        v69 = -1073741811;
        WdLogSingleEntry2(3LL, v100, -1073741811LL);
      }
    }
    else
    {
      v69 = -1073741130;
    }
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v130);
    goto LABEL_122;
  }
LABEL_41:
  if ( v141 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v138, 0LL, 0LL);
  v37 = v140;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v140 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v140 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (const EVENT_DESCRIPTOR *)"g", v39, 72);
      KeWaitForSingleObject((char *)v140 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v140, 0LL);
    v37 = v140;
  }
  v142 = 0LL;
  v141 = 1;
  if ( *((_DWORD *)v37 + 50) != 1 )
    goto LABEL_186;
  if ( v135 != v140 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v133, 0LL);
    if ( *((_DWORD *)v135 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v133);
LABEL_186:
      COREACCESS::Release((COREACCESS *)v138);
LABEL_187:
      v69 = -1073741130;
      goto LABEL_122;
    }
  }
  v40 = v106;
  v132 = 1;
  v41 = (char *)v106 + 2800;
  v107 = (char *)v106 + 2800;
  if ( !*((_QWORD *)v106 + 350) )
  {
    WdLogSingleEntry1(1LL, 7053LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pRenderAdapter->IsRenderAdapter()",
      7053LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v41 = v107;
  }
  v42 = v105;
  v43 = (ADAPTER_DISPLAY **)((char *)v105 + 2792);
  v113 = (ADAPTER_DISPLAY **)((char *)v105 + 2792);
  if ( !*((_QWORD *)v105 + 349) )
  {
    WdLogSingleEntry1(1LL, 7054LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      7054LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v43 = v113;
    v41 = v107;
  }
  if ( v95 )
  {
    if ( *((_DWORD *)v109 + 144) != 1 )
      goto LABEL_187;
    v40 = v106;
    v42 = v105;
  }
  v44 = *v43;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v96 = 0;
  if ( !*v43 )
  {
    WdLogSingleEntry1(1LL, 10119LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10119LL, 0LL, 0LL, 0LL, 0LL);
    v43 = v113;
    v44 = *v113;
    if ( !*v113 )
      goto LABEL_121;
    v41 = v107;
  }
  v45 = v100;
  if ( v100 >= *((_DWORD *)v44 + 24) )
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
    v43 = v113;
    v45 = v100;
    v41 = v107;
  }
  v101 = 4000LL * v45;
  if ( !*(_BYTE *)(*((_QWORD *)v44 + 16) + v101 + 760) )
    goto LABEL_121;
  if ( *((_QWORD *)v42 + 350) )
  {
    if ( v42 != v40 )
    {
      WdLogSingleEntry1(1LL, 7076LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter == pRenderAdapter",
        7076LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v41 = v107;
    }
    v46 = v100;
    if ( (*((_DWORD *)v40 + 666) & 0x10) != 0 )
    {
      if ( v100 >= 0x10 )
        goto LABEL_63;
    }
    else
    {
      v46 = 0;
    }
    _InterlockedIncrement((volatile signed __int32 *)v40 + v46 + 706);
    v40 = v106;
LABEL_63:
    v97 = 1;
    v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 624LL) + 8LL) + 544LL))(
            *(_QWORD *)(*(_QWORD *)v41 + 632LL),
            v100);
    v49 = v107;
    if ( v47 )
    {
LABEL_64:
      v50 = *(_QWORD *)(v14 + 64);
      v51 = *(_QWORD *)(*(_QWORD *)v49 + 624LL);
      if ( v50 && *(_QWORD *)(v50 + 8LL * (unsigned int)(*(_DWORD *)v51 - 1) + 16) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v51 + 8) + 1064LL))(*(_QWORD *)(*(_QWORD *)v49 + 632LL));
      goto LABEL_67;
    }
    v82 = *(_QWORD *)v107;
    if ( v109 )
    {
      v83 = *(_QWORD *)(v82 + 624);
      v84 = *(_QWORD *)(v83 + 8);
      LOBYTE(v83) = 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v84 + 560))(*((_QWORD *)v109 + 96), 0LL, v83, v100) >= 0 )
      {
        v99 = 1;
        goto LABEL_64;
      }
    }
    else
    {
      LOBYTE(v48) = 1;
      if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v82 + 624) + 8LL) + 552LL))(
             *(_QWORD *)(v82 + 632),
             1LL,
             v48,
             v100) >= 0 )
      {
        v98 = 1;
        goto LABEL_64;
      }
    }
    DXGADAPTER::DecrementVSyncWaiter(v40, v100);
LABEL_121:
    v69 = -1071775738;
    goto LABEL_122;
  }
  ADAPTER_DISPLAY::ControlVSyncAdapter(*v43, v45);
LABEL_67:
  if ( v135 != v140 )
    COREACCESS::Release((COREACCESS *)v133);
  if ( !v141 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v138, 0LL, 0LL);
  v141 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v140 + 23) )
    DXGADAPTER::ReleaseCoreResource(v140, v142);
  v52 = 60;
  v142 = 0LL;
  v132 = 0;
  v94 = a7 || *(_BYTE *)(*(_QWORD *)(v14 + 64) + 130LL);
  v53 = v113;
  v54 = *v113;
  while ( 1 )
  {
    v55 = *((_QWORD *)v54 + 2);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v55 + 184)
      || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v55 + 168)) )
    {
      WdLogSingleEntry1(1LL, 7283LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsCoreResourceSharedOwner()", 7283LL, 0LL, 0LL, 0LL, 0LL);
    }
    memset(Object, 0, sizeof(Object));
    v56 = v104;
    if ( v104 )
    {
      if ( !Src )
      {
        WdLogSingleEntry1(2LL, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid object array in ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v59 = v104;
        v60 = -1073741811;
LABEL_204:
        v61 = v96;
        goto LABEL_85;
      }
      memmove(Object, Src, 8LL * (unsigned int)v104);
    }
    Object[v104] = (PVOID)(*((_QWORD *)v54 + 16) + v101 + 904);
    v57 = v56 + 1;
    if ( v57 > 0x40 )
    {
      WdLogSingleEntry1(1LL, 7313LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Count <= _countof(Objects)", 7313LL, 0LL, 0LL, 0LL, 0LL);
    }
    v58 = KeWaitForMultipleObjects(v57, Object, WaitAny, UserRequest, 0, 0, Timeout, &WaitBlockArray);
    v59 = v104;
    v60 = v58;
    if ( (v58 < 0 || v58 > v104) && v58 != 258 )
      goto LABEL_204;
    v61 = (unsigned int)v58;
    v96 = v58;
LABEL_85:
    v54 = *v53;
    --v52;
    v62 = v101;
    LOBYTE(v62) = *(_BYTE *)(*((_QWORD *)*v53 + 16) + v101 + 960) != 0;
    v63 = v60 == v59;
    v93 = v62;
    v64 = v94;
    if ( !v63 || (_BYTE)v62 == 1 || v94 )
      break;
    if ( !v52 )
      goto LABEL_207;
  }
  if ( v52 )
    goto LABEL_88;
LABEL_207:
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v105 + 1164) >= 2 )
  {
    v62 = (unsigned __int8)v62;
  }
  else
  {
    LOBYTE(Alertable) = 1;
    WaitMode = 0LL;
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2073LL);
    v86 = v105;
    v103 = *(_QWORD *)((char *)v105 + 404);
    if ( (unsigned int)dword_1C012F918 > 5 && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000400000LL) )
    {
      v116 = *((unsigned __int8 *)v86 + 209);
      IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(1LL);
      v118 = *((_DWORD *)v86 + 722);
      v119 = *((unsigned __int8 *)v86 + 2742);
      v120 = LiveDumpWithWdLogs;
      v110[0] = *((_WORD *)v86 + 1346);
      v124 = *((_QWORD *)v86 + 212);
      v125 = (void *)*((_QWORD *)v86 + 211);
      v121 = *((_DWORD *)v86 + 107);
      v122 = *((_DWORD *)v86 + 106);
      v123 = *((_DWORD *)v86 + 105);
      LODWORD(Timeout) = *((_DWORD *)v86 + 104);
      LODWORD(Src) = *((_DWORD *)v86 + 103);
      v126 = v103;
      v127 = 0x1000000LL;
      LOWORD(v104) = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v87,
        byte_1C0097809,
        v88,
        v89,
        (__int64)&v104,
        (__int64)&v127,
        (__int64)&v126,
        (__int64)&Src,
        (__int64)&Timeout,
        (__int64)&v123,
        (__int64)&v122,
        (__int64)&v121,
        &v125,
        (__int64)&v124,
        (__int64)v110,
        (__int64)&v120,
        (__int64)&v119,
        (__int64)&v118,
        (__int64)&IsDebuggerPresent,
        (__int64)&v116);
    }
    v62 = v93;
    v64 = v94;
    v61 = v96;
  }
LABEL_88:
  if ( v97 )
  {
    v65 = 0;
    if ( (*((_DWORD *)v106 + 666) & 0x10) != 0 )
      v65 = v100;
    if ( v65 < 0x10 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)v106 + v65 + 706) < 0 )
      {
        WdLogSingleEntry5(0LL, 275LL, 37LL, v106, *((unsigned int *)v106 + v65 + 706), 0LL);
        v64 = v94;
      }
      v61 = v96;
    }
    v62 = v93;
  }
  if ( v98 )
  {
    v69 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v131, 0LL);
    if ( v69 >= 0 )
    {
      v90 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v107 + 624LL)
                                                                                                 + 8LL)
                                                                                     + 552LL))(
              *(_QWORD *)(*(_QWORD *)v107 + 632LL),
              1LL,
              0LL,
              v100,
              WaitMode,
              Alertable);
      goto LABEL_219;
    }
    v20 = v108;
LABEL_122:
    v60 = v69;
LABEL_103:
    LODWORD(v32) = v60;
    goto LABEL_104;
  }
  if ( !v99 )
    goto LABEL_98;
  v60 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v131, 0LL);
  if ( v60 < 0 )
    goto LABEL_102;
  if ( *((_DWORD *)v109 + 144) == 1 )
  {
    v90 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v107 + 624LL)
                                                                                              + 8LL)
                                                                                  + 560LL))(
            *((_QWORD *)v109 + 96),
            0LL,
            0LL,
            v100,
            WaitMode,
            Alertable);
LABEL_219:
    v60 = v90;
  }
  v62 = v93;
  v64 = v94;
  v61 = v96;
LABEL_98:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(WaitMode) = (unsigned __int8)v62;
    McTemplateK0tt_EtwWriteTransfer(v62, &WaitForVerticalBlankEventInternal, v61, v64, WaitMode);
    LODWORD(v61) = v96;
  }
  if ( v60 < 0 || !(_DWORD)v61 )
  {
LABEL_102:
    v20 = v108;
    goto LABEL_103;
  }
  v20 = v108;
  LODWORD(v32) = v61;
LABEL_104:
  if ( v132 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v131);
  if ( v140 )
  {
    if ( v141 )
      COREACCESS::Release((COREACCESS *)v138);
    v66 = (DXGGLOBAL **)v140;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v140 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v66[2], (struct DXGADAPTER *)v66);
  }
  if ( v135 )
  {
    if ( v136 )
      COREACCESS::Release((COREACCESS *)v133);
    v67 = (DXGGLOBAL **)v135;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v67[2], (struct DXGADAPTER *)v67);
  }
LABEL_116:
  if ( v109 && _InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v109 + 2), v109);
LABEL_117:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v20 + 2), v20);
LABEL_119:
  KeLeaveCriticalRegion();
  return (unsigned int)v32;
}
