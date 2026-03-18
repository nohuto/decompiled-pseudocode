/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0151480
 * Callers:
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C0151160 (DxgkWaitForVerticalBlankEvent2.c)
 *     DxgkWaitForVerticalBlankEvent @ 0x1C0151390 (DxgkWaitForVerticalBlankEvent.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D390 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C00246CC (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0024798 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C00DD4C0 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBEC0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0149594 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C020FE98 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C0214270 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C028358C (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v6; // r13
  __int64 v8; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  signed __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int PairingAdapters; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  volatile signed __int64 *v43; // rdi
  volatile signed __int64 *v44; // rsi
  signed __int64 v45; // rcx
  struct DXGADAPTER *v46; // rdi
  struct DXGADAPTER *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  DXGADAPTER *v50; // rsi
  char *v51; // rdx
  struct DXGADAPTER *v52; // r12
  ADAPTER_DISPLAY **v53; // r8
  ADAPTER_DISPLAY *v54; // r13
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // r13d
  unsigned int v59; // ecx
  char v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rcx
  ADAPTER_DISPLAY *v63; // rcx
  __int64 v64; // rax
  union _LARGE_INTEGER v65; // rax
  unsigned int v66; // r8d
  DXGADAPTER *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  DXGGLOBAL **v70; // rcx
  DXGGLOBAL **v71; // rcx
  BLTQUEUE **v73; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v78; // rax
  int v79; // r9d
  __int64 v80; // r15
  __int64 v81; // r9
  int v82; // edx
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  struct DXGTHREAD *v88; // rax
  DXGSESSIONMGR *v89; // rdi
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  struct DXGADAPTER *v94; // r8
  DXGADAPTER *v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  unsigned int v107; // eax
  _QWORD *v108; // rax
  DXGADAPTER *v109; // rcx
  int v110; // eax
  char v111; // [rsp+40h] [rbp-C0h]
  char v112; // [rsp+41h] [rbp-BFh]
  unsigned int v113; // [rsp+44h] [rbp-BCh]
  unsigned int v114; // [rsp+44h] [rbp-BCh]
  DXGADAPTER *v115; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v116; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v117; // [rsp+58h] [rbp-A8h]
  char *v118; // [rsp+60h] [rbp-A0h]
  struct DXGDEVICE *v119; // [rsp+68h] [rbp-98h] BYREF
  __int64 v120; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY **v121; // [rsp+78h] [rbp-88h]
  int v122; // [rsp+80h] [rbp-80h] BYREF
  struct DXGDEVICE *v123; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v124; // [rsp+90h] [rbp-70h]
  struct _KEVENT **v125; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v127; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v128; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v129[56]; // [rsp+B8h] [rbp-48h] BYREF
  char v130; // [rsp+F0h] [rbp-10h] BYREF
  char v131; // [rsp+F1h] [rbp-Fh]
  char v132[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v133; // [rsp+100h] [rbp+0h]
  struct DXGADAPTER *v134; // [rsp+108h] [rbp+8h]
  char v135; // [rsp+110h] [rbp+10h]
  __int64 v136; // [rsp+118h] [rbp+18h]
  char v137[8]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v138; // [rsp+140h] [rbp+40h]
  struct DXGADAPTER *v139; // [rsp+148h] [rbp+48h]
  char v140; // [rsp+150h] [rbp+50h]
  char *v141; // [rsp+158h] [rbp+58h]

  SessionDataForSpecifiedSession = 0LL;
  v6 = a3;
  v117 = a3;
  v125 = a5;
  v119 = 0LL;
  v124 = a4;
  v113 = a2;
  v8 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v15 = *((_QWORD *)Current + 1)) == 0 )
  {
    v15 = v14;
    if ( !v14 )
    {
      v75 = WdLogNewEntry5_WdError(v12, v11);
      LODWORD(v42) = -1073741811;
      *(_QWORD *)(v75 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v75);
      return (unsigned int)v42;
    }
  }
  if ( !a4 || *(_BYTE *)(v15 + 346) || g_OSTestSigningEnabled && (*(_BYTE *)(v15 + 348) & 2) != 0 )
  {
    KeEnterCriticalRegion();
    if ( !(_DWORD)v8 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      Global = DXGGLOBAL::GetGlobal(v17, v16);
      LODWORD(v42) = REMOTE_VSYNC::WaitForVSync((BLTQUEUE **)Global + 108);
LABEL_102:
      KeLeaveCriticalRegion();
      return (unsigned int)v42;
    }
    if ( v15 != -208 && *(struct _KTHREAD **)(v15 + 216) == KeGetCurrentThread() )
    {
      v78 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v78 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v78);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v79 = *(_DWORD *)(v15 + 232);
        if ( v79 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v79);
      }
      ExAcquirePushLockSharedEx(v15 + 208, 0LL);
    }
    v20 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v15 + 347) & 0x20) == 0 )
    {
      if ( v20 < *(_DWORD *)(v15 + 256) )
      {
        v21 = *(_QWORD *)(v15 + 240);
        v22 = *(_DWORD *)(v21 + 16LL * v20 + 8);
        if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60)
          && (v22 & 0x2000) == 0
          && (v22 & 0x1F) != 0 )
        {
          v23 = v22 & 0x1F;
          if ( (_BYTE)v23 == 1 )
          {
            v24 = *(_QWORD *)(v21 + 16LL * v20);
            goto LABEL_19;
          }
          v25 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v23);
          *(_QWORD *)(v25 + 24) = 267LL;
          WdLogEvent5_WdError(v25);
        }
      }
      v24 = 0LL;
LABEL_19:
      if ( v24 )
        _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
      ExReleasePushLockSharedEx(v15 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !v24 )
      {
        v85 = WdLogNewEntry5_WdWarning(v27, v26, v28);
        LODWORD(v42) = -1073741811;
        *(_QWORD *)(v85 + 24) = v8;
        *(_QWORD *)(v85 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v85);
        goto LABEL_102;
      }
      if ( v113 )
      {
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v123, v113, (struct _KTHREAD **)v15, &v119);
        if ( !v119 )
        {
          v87 = WdLogNewEntry5_WdWarning(v27, v26, v86);
          *(_QWORD *)(v87 + 24) = v24;
          *(_QWORD *)(v87 + 32) = v113;
          WdLogEvent5_WdWarning(v87);
          if ( v123 && _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
          LODWORD(v42) = -1073741811;
          goto LABEL_100;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v119 + 8);
        if ( v123 )
        {
          v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v27 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v123 + 2), v123);
        }
      }
      v29 = PsGetCurrentProcess(v27, v26);
      v30 = PsGetProcessDxgProcess(v29);
      v33 = v30;
      if ( (!v30 || (*(_BYTE *)(v30 + 347) & 0x10) != 0)
        && (v88 = DXGTHREAD::GetCurrent(v32, v31)) != 0LL
        && (v34 = *((_QWORD *)v88 + 1)) != 0
        || (v34 = v33) != 0 )
      {
        v35 = *(_QWORD *)(v34 + 88);
        if ( v35 )
        {
          v122 = 0;
          if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v35 + 224))(0LL, 0LL, &v122) )
          {
            if ( !v122 )
            {
              if ( !*(_BYTE *)(v24 + 209) )
                goto LABEL_109;
              v89 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v37, v36) + 102);
              if ( v89 )
              {
                CurrentProcessSessionId = PsGetCurrentProcessSessionId(v37, v36);
                SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                   v89,
                                                   CurrentProcessSessionId);
              }
              if ( *((_DWORD *)SessionDataForSpecifiedSession + 4730) )
                v73 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal(v37, v36) + 936);
              else
LABEL_109:
                v73 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal(v37, v36) + 864);
              LODWORD(v42) = REMOTE_VSYNC::WaitForVSync(v73);
              goto LABEL_99;
            }
          }
        }
      }
      v115 = 0LL;
      v116 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(
                          (struct DXGADAPTER *)v24,
                          (unsigned int)v6,
                          &v115,
                          &v127,
                          &v116,
                          &v128,
                          0);
      v42 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v91 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
        v91[3] = v24;
        v91[4] = v6;
        v91[5] = v42;
        WdLogEvent5_WdError(v91);
LABEL_99:
        if ( v119 && _InterlockedExchangeAdd64((volatile signed __int64 *)v119 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v119 + 2), v119);
LABEL_100:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v24 + 16), (struct DXGADAPTER *)v24);
        goto LABEL_102;
      }
      v43 = (volatile signed __int64 *)v115;
      v44 = (volatile signed __int64 *)v116;
      if ( !v115 || !v116 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v40, v39);
        *(_QWORD *)(v92 + 24) = 6792LL;
        WdLogEvent5_WdAssertion(v92);
      }
      if ( v119
        && (v43 != *(volatile signed __int64 **)(*((_QWORD *)v119 + 2) + 16LL)
         || v44 != *((volatile signed __int64 **)v119 + 231)) )
      {
        v93 = WdLogNewEntry5_WdWarning(v119, v39, v41);
        *(_QWORD *)(v93 + 24) = v24;
        *(_QWORD *)(v93 + 32) = v113;
        WdLogEvent5_WdWarning(v93);
        LODWORD(v42) = -1073741811;
        goto LABEL_99;
      }
      v131 = 0;
      v134 = (struct DXGADAPTER *)v43;
      v135 = 0;
      v136 = 0LL;
      if ( v43 )
      {
        _InterlockedIncrement64(v43 + 3);
        v43 = (volatile signed __int64 *)v115;
        v44 = (volatile signed __int64 *)v116;
        v133 = -1LL;
      }
      if ( !v44 )
        v44 = v43;
      v139 = (struct DXGADAPTER *)v44;
      v140 = 0;
      v141 = 0LL;
      if ( v44 )
      {
        _InterlockedIncrement64(v44 + 3);
        v43 = (volatile signed __int64 *)v115;
        v138 = -1LL;
      }
      if ( _InterlockedExchangeAdd64(v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
      v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)v116 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v46 = v116;
      if ( v45 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v116 + 2), v116);
      if ( *((_DWORD *)v46 + 40) != 1 )
      {
LABEL_43:
        if ( v140 )
        {
          v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v39);
          v99[5] = v137;
          v99[3] = 275LL;
          v99[4] = 4LL;
          v99[6] = 0LL;
          v99[7] = 0LL;
          WdLogEvent5_WdCriticalError(v99);
        }
        v47 = v139;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v139 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v139 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v48, &EventBlockThread, v49, 72);
            KeWaitForSingleObject((char *)v139 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v139, 0LL);
          v47 = v139;
        }
        v141 = 0LL;
        v140 = 1;
        if ( *((_DWORD *)v47 + 50) != 1 )
          goto LABEL_170;
        if ( v134 != v139 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v132, 0LL);
          v47 = (struct DXGADAPTER *)*((unsigned int *)v134 + 50);
          if ( (_DWORD)v47 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v132);
LABEL_170:
            COREACCESS::Release((COREACCESS *)v137);
LABEL_171:
            LODWORD(v42) = -1073741130;
            goto LABEL_87;
          }
        }
        v50 = v115;
        LODWORD(v42) = 0;
        v131 = 1;
        v51 = (char *)v115 + 2704;
        v118 = (char *)v115 + 2704;
        if ( !*((_QWORD *)v115 + 338) )
        {
          v100 = WdLogNewEntry5_WdAssertion(v47, v51);
          *(_QWORD *)(v100 + 24) = 6846LL;
          WdLogEvent5_WdAssertion(v100);
          v51 = v118;
        }
        v52 = v116;
        v53 = (ADAPTER_DISPLAY **)((char *)v116 + 2696);
        v121 = (ADAPTER_DISPLAY **)((char *)v116 + 2696);
        if ( !*((_QWORD *)v116 + 337) )
        {
          v101 = WdLogNewEntry5_WdAssertion(v47, v51);
          *(_QWORD *)(v101 + 24) = 6847LL;
          WdLogEvent5_WdAssertion(v101);
          v53 = v121;
          v51 = v118;
        }
        if ( v113 )
        {
          v47 = (struct DXGADAPTER *)*((unsigned int *)v119 + 144);
          if ( (_DWORD)v47 != 1 )
            goto LABEL_171;
          v50 = v115;
          v52 = v116;
        }
        v54 = *v53;
        v111 = 0;
        v112 = 0;
        v114 = 0;
        if ( !*v53 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v47, v51);
          *(_QWORD *)(v102 + 24) = 9659LL;
          WdLogEvent5_WdAssertion(v102);
          v53 = v121;
          v51 = v118;
          v54 = *v121;
          if ( !*v121 )
            goto LABEL_104;
        }
        v55 = v117;
        if ( v117 >= *((_DWORD *)v54 + 20) )
        {
          v103 = WdLogNewEntry5_WdAssertion(v47, v51);
          *(_QWORD *)(v103 + 24) = 6068LL;
          WdLogEvent5_WdAssertion(v103);
          v53 = v121;
          v55 = v117;
          v51 = v118;
        }
        v56 = 3968 * v55;
        v57 = *((_QWORD *)v54 + 14);
        v120 = v56;
        if ( !*(_BYTE *)(v57 + v56 + 720) )
          goto LABEL_104;
        if ( !*((_QWORD *)v52 + 338) )
        {
          v58 = v117;
          ADAPTER_DISPLAY::ControlVSyncAdapter(*v53, v117);
          v60 = 0;
          goto LABEL_66;
        }
        if ( v52 != v50 )
        {
          v104 = WdLogNewEntry5_WdAssertion(v56, v51);
          *(_QWORD *)(v104 + 24) = 6869LL;
          WdLogEvent5_WdAssertion(v104);
          v51 = v118;
        }
        v58 = v117;
        v59 = v117;
        if ( (*((_DWORD *)v50 + 642) & 0x10) != 0 )
        {
          if ( v117 >= 0x10 )
            goto LABEL_65;
        }
        else
        {
          v59 = 0;
        }
        _InterlockedIncrement((volatile signed __int32 *)v50 + v59 + 682);
        v50 = v115;
LABEL_65:
        v60 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 616LL) + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*(_QWORD *)v51 + 624LL),
               v58) )
        {
          goto LABEL_66;
        }
        v105 = *(_QWORD *)v118;
        if ( v119 )
        {
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v105 + 616) + 8LL)
                                                                      + 560LL))(
                 *((_QWORD *)v119 + 96),
                 0LL,
                 1LL,
                 v58) >= 0 )
          {
            v112 = 1;
            goto LABEL_66;
          }
          goto LABEL_181;
        }
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v105 + 616) + 8LL) + 552LL))(
               *(_QWORD *)(v105 + 624),
               1LL,
               1LL,
               v58) < 0 )
        {
LABEL_181:
          DXGADAPTER::DecrementVSyncWaiter(v50, v58);
LABEL_104:
          LODWORD(v42) = -1071775738;
LABEL_87:
          if ( v131 )
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v130);
          if ( v139 )
          {
            if ( v140 )
              COREACCESS::Release((COREACCESS *)v137);
            v70 = (DXGGLOBAL **)v139;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v139 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v70[2], (struct DXGADAPTER *)v70);
          }
          if ( v134 )
          {
            if ( v135 )
              COREACCESS::Release((COREACCESS *)v132);
            v71 = (DXGGLOBAL **)v134;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(v71[2], (struct DXGADAPTER *)v71);
          }
          goto LABEL_99;
        }
        v111 = 1;
LABEL_66:
        if ( v134 != v139 )
          COREACCESS::Release((COREACCESS *)v132);
        if ( !v140 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v61);
          v106[5] = v137;
          v106[3] = 275LL;
          v106[4] = 4LL;
          v106[6] = 0LL;
          v106[7] = 0LL;
          WdLogEvent5_WdCriticalError(v106);
        }
        v140 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v139 + 23) )
          DXGADAPTER::ReleaseCoreResource(v139, v141);
        v141 = 0LL;
        v131 = 0;
        v63 = *v121;
        if ( v124 )
        {
          v107 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v63, v58, 1, v124, v125);
          LODWORD(v42) = v107;
          if ( v107 > 0x3E )
          {
            v66 = 0;
          }
          else
          {
            v66 = v107;
            v114 = v107;
          }
        }
        else
        {
          v64 = *((_QWORD *)v63 + 2);
          if ( *(_QWORD *)(v64 + 2696) && *(_QWORD *)(v64 + 600) )
            v65.QuadPart = -1000000LL;
          else
            v65.QuadPart = -5000000LL;
          Timeout = v65;
          KeWaitForSingleObject((PVOID)(*((_QWORD *)v63 + 14) + v120 + 912), UserRequest, 0, 0, &Timeout);
          v66 = 0;
        }
        if ( v60 )
        {
          v67 = v115;
          v68 = v58;
          if ( (*((_DWORD *)v115 + 642) & 0x10) != 0 )
          {
            if ( v58 >= 0x10 )
              goto LABEL_82;
          }
          else
          {
            v68 = 0LL;
          }
          v69 = (unsigned int)v68;
          if ( _InterlockedDecrement((volatile signed __int32 *)v115 + (unsigned int)v68 + 682) < 0 )
          {
            v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v67);
            v109 = v115;
            v108[5] = v115;
            v108[3] = 275LL;
            v108[4] = 37LL;
            v108[6] = *((unsigned int *)v109 + v69 + 682);
            v108[7] = 0LL;
            WdLogEvent5_WdCriticalError(v108);
            v66 = v114;
          }
        }
LABEL_82:
        if ( v111 )
        {
          LODWORD(v42) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v130, 0LL);
          if ( (int)v42 < 0 )
            goto LABEL_87;
          v110 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v118 + 616LL)
                                                                                        + 8LL)
                                                                            + 552LL))(
                   *(_QWORD *)(*(_QWORD *)v118 + 624LL),
                   1LL,
                   0LL,
                   v58);
        }
        else
        {
          if ( !v112 )
          {
LABEL_84:
            if ( (int)v42 >= 0 && v66 )
              LODWORD(v42) = v66;
            goto LABEL_87;
          }
          LODWORD(v42) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v130, 0LL);
          if ( (int)v42 < 0 )
            goto LABEL_87;
          if ( *((_DWORD *)v119 + 144) != 1 )
          {
LABEL_197:
            v66 = v114;
            goto LABEL_84;
          }
          v110 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v118 + 616LL)
                                                                                       + 8LL)
                                                                           + 560LL))(
                   *((_QWORD *)v119 + 96),
                   0LL,
                   0LL,
                   v58);
        }
        LODWORD(v42) = v110;
        goto LABEL_197;
      }
      v94 = v46;
      v95 = v115;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v129,
        v115,
        v94);
      if ( *((_DWORD *)v95 + 50) == 1 && *((_DWORD *)v116 + 50) == 1 )
      {
        if ( (unsigned int)v6 < *(_DWORD *)(*((_QWORD *)v116 + 337) + 80LL) )
        {
          if ( DXGADAPTER::IsVSyncAvailable(v116, (unsigned int)v6) )
          {
            DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v129);
            goto LABEL_43;
          }
          LODWORD(v42) = -1071775738;
        }
        else
        {
          v98 = WdLogNewEntry5_WdWarning(v116, v96, v97);
          LODWORD(v42) = -1073741811;
          *(_QWORD *)(v98 + 24) = v6;
          *(_QWORD *)(v98 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v98);
        }
      }
      else
      {
        LODWORD(v42) = -1073741130;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v129);
      goto LABEL_87;
    }
    v80 = *(_QWORD *)(v15 + 496);
    v121 = (ADAPTER_DISPLAY **)(v80 + 208);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v80 + 208));
    if ( v20 < *(_DWORD *)(v80 + 256) )
    {
      v81 = *(_QWORD *)(v80 + 240);
      v82 = *(_DWORD *)(v81 + 16LL * v20 + 8);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v81 + 16LL * v20 + 8) & 0x60)
        && (v82 & 0x2000) == 0
        && (v82 & 0x1F) != 0 )
      {
        v83 = v82 & 0x1F;
        if ( (_BYTE)v83 == 1 )
        {
          v24 = *(_QWORD *)(v81 + 16LL * v20);
          goto LABEL_132;
        }
        v84 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v83);
        *(_QWORD *)(v84 + 24) = 267LL;
        WdLogEvent5_WdError(v84);
      }
    }
    v24 = 0LL;
LABEL_132:
    ExReleasePushLockSharedEx(v121, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  v76 = WdLogNewEntry5_WdWarning(v12, v11, v13);
  *(_QWORD *)(v76 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v76);
  return 3221225506LL;
}
