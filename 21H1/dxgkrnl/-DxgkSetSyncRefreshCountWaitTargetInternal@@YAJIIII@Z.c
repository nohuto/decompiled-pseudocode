/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0141110
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C0141020 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C00139F0 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0013AA4 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C0024748 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0024814 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0039DA0 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C003D2D8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C005D2AC (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0140264 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C020CDF8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C0210E24 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r12
  int v5; // r14d
  __int64 v6; // r13
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r13
  int PairingAdapters; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  volatile signed __int64 *v34; // rdi
  volatile signed __int64 *v35; // rsi
  signed __int64 v36; // rcx
  struct DXGADAPTER *v37; // rdi
  struct DXGADAPTER *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  DXGADAPTER *v41; // rdi
  __int64 *v42; // rdx
  struct DXGADAPTER *v43; // r13
  ADAPTER_DISPLAY **v44; // r12
  ADAPTER_DISPLAY *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r13
  _DWORD *v50; // rsi
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  ADAPTER_DISPLAY *v56; // rsi
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned int v65; // edi
  DXGGLOBAL **v66; // rcx
  DXGGLOBAL **v67; // rcx
  int v69; // edi
  struct DXGTHREAD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r9d
  __int64 v75; // r15
  __int64 v76; // r9
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  struct DXGADAPTER *v88; // r8
  DXGADAPTER *v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rax
  struct DXGTHREAD *Current; // rax
  unsigned int v103; // eax
  unsigned int v104; // edx
  ADAPTER_DISPLAY *v105; // r10
  _QWORD *v106; // rax
  int v107; // eax
  unsigned __int8 v108; // [rsp+40h] [rbp-C0h] BYREF
  char v109; // [rsp+41h] [rbp-BFh]
  char v110; // [rsp+42h] [rbp-BEh]
  char v111; // [rsp+43h] [rbp-BDh]
  unsigned int v112; // [rsp+44h] [rbp-BCh]
  unsigned int v113; // [rsp+48h] [rbp-B8h]
  char *v114; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v115; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v116; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v117; // [rsp+68h] [rbp-98h]
  struct DXGDEVICE *v118; // [rsp+70h] [rbp-90h] BYREF
  __int64 v119; // [rsp+78h] [rbp-88h]
  int v120; // [rsp+80h] [rbp-80h] BYREF
  int v121; // [rsp+84h] [rbp-7Ch] BYREF
  struct DXGDEVICE *v122; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v123; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v124; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v125[64]; // [rsp+A0h] [rbp-60h] BYREF
  char v126; // [rsp+E0h] [rbp-20h] BYREF
  char v127; // [rsp+E1h] [rbp-1Fh]
  char v128[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v130; // [rsp+F8h] [rbp-8h]
  char v131; // [rsp+100h] [rbp+0h]
  __int64 v132; // [rsp+108h] [rbp+8h]
  char v133[8]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v134; // [rsp+130h] [rbp+30h]
  struct DXGADAPTER *v135; // [rsp+138h] [rbp+38h]
  char v136; // [rsp+140h] [rbp+40h]
  char *v137; // [rsp+148h] [rbp+48h]

  v4 = a3;
  v5 = 0;
  v117 = a3;
  v118 = 0LL;
  v112 = a4;
  v113 = a2;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (v70 = DXGTHREAD::GetCurrent(v10, v9)) != 0LL
    && (v13 = *((_QWORD *)v70 + 1)) != 0
    || (v13 = v12) != 0 )
  {
    if ( *(_BYTE *)(v13 + 346) )
    {
      v120 = 0;
      v121 = 0;
      v14 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*(_QWORD *)(v13 + 88) + 224LL))(&v120, 0LL, &v121);
      if ( v120 && (!v14 || v121) )
      {
        if ( v13 != -208 && *(struct _KTHREAD **)(v13 + 216) == KeGetCurrentThread() )
        {
          v73 = WdLogNewEntry5_WdAssertion(v16, v15);
          *(_QWORD *)(v73 + 24) = 1569LL;
          WdLogEvent5_WdAssertion(v73);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 208, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v74 = *(_DWORD *)(v13 + 232);
            if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, v74);
          }
          ExAcquirePushLockSharedEx(v13 + 208, 0LL);
        }
        v19 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
        if ( (*(_BYTE *)(v13 + 347) & 0x20) == 0 )
        {
          if ( v19 < *(_DWORD *)(v13 + 256) )
          {
            v20 = *(_QWORD *)(v13 + 240);
            v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
            if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60)
              && (v21 & 0x2000) == 0
              && (v21 & 0x1F) != 0 )
            {
              v22 = v21 & 0x1F;
              if ( (_BYTE)v22 == 1 )
              {
                v23 = *(_QWORD *)(v20 + 16LL * v19);
                goto LABEL_20;
              }
              v24 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v22);
              *(_QWORD *)(v24 + 24) = 267LL;
              WdLogEvent5_WdError(v24);
            }
          }
          v23 = 0LL;
LABEL_20:
          if ( v23 )
            _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
          ExReleasePushLockSharedEx(v13 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v23 )
          {
            v80 = WdLogNewEntry5_WdWarning(v26, v25, v27);
            LODWORD(v33) = -1073741811;
            *(_QWORD *)(v80 + 24) = v6;
            *(_QWORD *)(v80 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v80);
            return (unsigned int)v33;
          }
          v28 = v113;
          if ( v113 )
          {
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v122, v113, (struct _KTHREAD **)v13, &v118);
            if ( !v118 )
            {
              v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
              *(_QWORD *)(v84 + 24) = v23;
              *(_QWORD *)(v84 + 32) = v28;
              WdLogEvent5_WdWarning(v84);
              if ( v122 && _InterlockedExchangeAdd64((volatile signed __int64 *)v122 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v122 + 2), v122);
              LODWORD(v33) = -1073741811;
              goto LABEL_97;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v118 + 8);
            if ( v122 && _InterlockedExchangeAdd64((volatile signed __int64 *)v122 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v122 + 2), v122);
          }
          v116 = 0LL;
          v115 = 0LL;
          PairingAdapters = DxgkpGetPairingAdapters(
                              (struct DXGADAPTER *)v23,
                              (unsigned int)v4,
                              &v116,
                              &v123,
                              &v115,
                              &v124,
                              0);
          v33 = PairingAdapters;
          if ( PairingAdapters < 0 )
          {
            v85 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
            v85[3] = v23;
            v85[4] = v4;
            v85[5] = v33;
            WdLogEvent5_WdError(v85);
LABEL_96:
            if ( v118 && _InterlockedExchangeAdd64((volatile signed __int64 *)v118 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v118 + 2), v118);
LABEL_97:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
            return (unsigned int)v33;
          }
          v34 = (volatile signed __int64 *)v116;
          v35 = (volatile signed __int64 *)v115;
          if ( !v116 || !v115 )
          {
            v86 = WdLogNewEntry5_WdAssertion(v31, v30);
            *(_QWORD *)(v86 + 24) = 6477LL;
            WdLogEvent5_WdAssertion(v86);
          }
          if ( v118
            && (v34 != *(volatile signed __int64 **)(*((_QWORD *)v118 + 2) + 16LL)
             || v35 != *((volatile signed __int64 **)v118 + 231)) )
          {
            v87 = WdLogNewEntry5_WdWarning(v118, v30, v32);
            *(_QWORD *)(v87 + 24) = v23;
            *(_QWORD *)(v87 + 32) = v28;
            WdLogEvent5_WdWarning(v87);
            LODWORD(v33) = -1073741811;
            goto LABEL_96;
          }
          v127 = 0;
          v130 = (struct DXGADAPTER *)v34;
          v131 = 0;
          v132 = 0LL;
          if ( v34 )
          {
            _InterlockedIncrement64(v34 + 3);
            v34 = (volatile signed __int64 *)v116;
            v35 = (volatile signed __int64 *)v115;
            v129 = -1LL;
          }
          if ( !v35 )
            v35 = v34;
          v135 = (struct DXGADAPTER *)v35;
          v136 = 0;
          v137 = 0LL;
          if ( v35 )
          {
            _InterlockedIncrement64(v35 + 3);
            v34 = (volatile signed __int64 *)v116;
            v134 = -1LL;
          }
          if ( _InterlockedExchangeAdd64(v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v116 + 2), v116);
          v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v115 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v37 = v115;
          if ( v36 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
          if ( *((_DWORD *)v37 + 40) != 1 )
          {
LABEL_39:
            if ( v136 )
            {
              v93 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v30);
              v93[5] = v133;
              v93[3] = 275LL;
              v93[4] = 4LL;
              v93[6] = 0LL;
              v93[7] = 0LL;
              WdLogEvent5_WdCriticalError(v93);
            }
            v38 = v135;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v135 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v135 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v40, 72);
                KeWaitForSingleObject((char *)v135 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v135, 0LL);
              v38 = v135;
            }
            v137 = 0LL;
            v136 = 1;
            if ( *((_DWORD *)v38 + 50) != 1 )
              goto LABEL_155;
            if ( v130 != v135 )
            {
              COREACCESS::AcquireShared((COREACCESS *)v128, 0LL);
              v38 = (struct DXGADAPTER *)*((unsigned int *)v130 + 50);
              if ( (_DWORD)v38 != 1 )
              {
                COREACCESS::Release((COREACCESS *)v128);
LABEL_155:
                COREACCESS::Release((COREACCESS *)v133);
LABEL_156:
                v69 = -1073741130;
                goto LABEL_103;
              }
            }
            v41 = v116;
            v127 = 1;
            v42 = (__int64 *)((char *)v116 + 2680);
            v114 = (char *)v116 + 2680;
            if ( !*((_QWORD *)v116 + 335) )
            {
              v94 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v94 + 24) = 6531LL;
              WdLogEvent5_WdAssertion(v94);
              v42 = (__int64 *)v114;
            }
            v43 = v115;
            v44 = (ADAPTER_DISPLAY **)((char *)v115 + 2672);
            if ( !*((_QWORD *)v115 + 334) )
            {
              v95 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v95 + 24) = 6532LL;
              WdLogEvent5_WdAssertion(v95);
              v42 = (__int64 *)v114;
            }
            if ( v113 )
            {
              v38 = (struct DXGADAPTER *)*((unsigned int *)v118 + 144);
              if ( (_DWORD)v38 != 1 )
                goto LABEL_156;
              v41 = v116;
              v43 = v115;
            }
            v45 = *v44;
            v109 = 0;
            v108 = 0;
            v110 = 0;
            v111 = 0;
            if ( !v45 )
            {
              v96 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v96 + 24) = 9656LL;
              WdLogEvent5_WdAssertion(v96);
              v45 = *v44;
              v42 = (__int64 *)v114;
              if ( !*v44 )
                goto LABEL_102;
            }
            v46 = v117;
            if ( v117 >= *((_DWORD *)v45 + 20) )
            {
              v97 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v97 + 24) = 6048LL;
              WdLogEvent5_WdAssertion(v97);
              v46 = v117;
              v42 = (__int64 *)v114;
            }
            v47 = 3968 * v46;
            v48 = *((_QWORD *)v45 + 14);
            v119 = v47;
            if ( !*(_BYTE *)(v48 + v47 + 720) )
            {
LABEL_102:
              v69 = -1071775738;
LABEL_103:
              v5 = v69;
LABEL_84:
              LODWORD(v33) = v5;
              if ( v127 )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v126);
              if ( v135 )
              {
                if ( v136 )
                  COREACCESS::Release((COREACCESS *)v133);
                v66 = (DXGGLOBAL **)v135;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v135 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v66[2], (struct DXGADAPTER *)v66);
              }
              if ( v130 )
              {
                if ( v131 )
                  COREACCESS::Release((COREACCESS *)v128);
                v67 = (DXGGLOBAL **)v130;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v67[2], (struct DXGADAPTER *)v67);
              }
              goto LABEL_96;
            }
            if ( !*((_QWORD *)v43 + 335) )
            {
              LODWORD(v49) = v117;
              v103 = DXGADAPTER::NumberOfVSyncWaiter(v41, v117);
              ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v105, v104, v112, v103, &v108);
              ADAPTER_DISPLAY::ControlVSyncAdapter(*v44, v49);
              goto LABEL_75;
            }
            if ( v43 != v41 )
            {
              v98 = WdLogNewEntry5_WdAssertion(v47, v42);
              *(_QWORD *)(v98 + 24) = 6554LL;
              WdLogEvent5_WdAssertion(v98);
              v42 = (__int64 *)v114;
            }
            v49 = v117;
            v50 = (_DWORD *)((char *)v41 + 2544);
            v51 = v117;
            if ( (*((_DWORD *)v41 + 636) & 0x10) != 0 )
            {
              if ( v117 >= 0x10 )
                goto LABEL_61;
            }
            else
            {
              v51 = 0;
            }
            _InterlockedIncrement((volatile signed __int32 *)v41 + v51 + 676);
            v41 = v116;
LABEL_61:
            v52 = *v42;
            v109 = 1;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v52 + 616) + 8LL) + 544LL))(
                   *(_QWORD *)(v52 + 624),
                   (unsigned int)v49) )
            {
              goto LABEL_62;
            }
            v99 = *(_QWORD *)v114;
            if ( v118 )
            {
              v100 = *(_QWORD *)(v99 + 616);
              v101 = *(_QWORD *)(v100 + 8);
              LOBYTE(v100) = 1;
              if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v101 + 560))(
                     *((_QWORD *)v118 + 96),
                     0LL,
                     v100,
                     (unsigned int)v49) >= 0 )
              {
                v111 = 1;
                goto LABEL_62;
              }
            }
            else
            {
              LOBYTE(v54) = 1;
              if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v99 + 616) + 8LL)
                                                                           + 552LL))(
                     *(_QWORD *)(v99 + 624),
                     1LL,
                     v54,
                     (unsigned int)v49) >= 0 )
              {
                v110 = 1;
LABEL_62:
                v55 = (unsigned int)v49;
                if ( (*v50 & 0x10) != 0 )
                {
                  if ( (unsigned int)v49 >= 0x10 )
                  {
                    v113 = 0;
                    goto LABEL_65;
                  }
                }
                else
                {
                  v55 = 0LL;
                }
                v113 = *((_DWORD *)v41 + (unsigned int)v55 + 676);
LABEL_65:
                v56 = *v44;
                v57 = *((_QWORD *)*v44 + 14) + v119;
                v58 = PsGetCurrentProcess(v55, v53);
                v59 = PsGetProcessDxgProcess(v58);
                v63 = v59;
                if ( v59 && (*(_BYTE *)(v59 + 347) & 0x10) == 0
                  || (Current = DXGTHREAD::GetCurrent(v61, v60)) == 0LL
                  || (v64 = *((_QWORD *)Current + 1)) == 0 )
                {
                  v64 = v63;
                }
                v108 = 1;
                if ( *(_QWORD *)(v57 + 936) && *(_BYTE *)(v64 + 346) )
                {
                  v65 = v112;
                  if ( *((_QWORD *)v56 + 48) )
                  {
                    *(_DWORD *)(v57 + 944) = v112;
                    BLTQUEUE::SetDWMTargetVsync(
                      (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v56 + 48) + 8LL) + 2904 * v49),
                      v65);
                  }
                  else
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0qqqq_EtwWriteTransfer(
                        v113,
                        &EventDWMVsyncCountWait,
                        v62,
                        v112,
                        *(_DWORD *)(v57 + 948),
                        *(_BYTE *)(v57 + 952),
                        v113);
                    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v56, v49, v112, &v108);
                  }
                }
LABEL_75:
                if ( v130 != v135 )
                  COREACCESS::Release((COREACCESS *)v128);
                if ( !v136 )
                {
                  v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v60);
                  v106[5] = v133;
                  v106[3] = 275LL;
                  v106[4] = 4LL;
                  v106[6] = 0LL;
                  v106[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v106);
                }
                v136 = 0;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v135 + 23) )
                  DXGADAPTER::ReleaseCoreResource(v135, v137);
                v137 = 0LL;
                v127 = 0;
                if ( v108 && v109 )
                  DXGADAPTER::DecrementVSyncWaiter(v116, (unsigned int)v49);
                if ( v110 )
                {
                  v69 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v126, 0LL);
                  if ( v69 < 0 )
                    goto LABEL_103;
                  v107 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v114 + 616LL)
                                                                                                + 8LL)
                                                                                    + 552LL))(
                           *(_QWORD *)(*(_QWORD *)v114 + 624LL),
                           1LL,
                           0LL,
                           (unsigned int)v49);
                }
                else
                {
                  if ( !v111 )
                    goto LABEL_84;
                  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v126, 0LL);
                  if ( v5 < 0 || *((_DWORD *)v118 + 144) != 1 )
                    goto LABEL_84;
                  v107 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v114 + 616LL)
                                                                                               + 8LL)
                                                                                   + 560LL))(
                           *((_QWORD *)v118 + 96),
                           0LL,
                           0LL,
                           (unsigned int)v49);
                }
                v5 = v107;
                goto LABEL_84;
              }
            }
            DXGADAPTER::DecrementVSyncWaiter(v41, (unsigned int)v49);
            goto LABEL_102;
          }
          v88 = v37;
          v89 = v116;
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
            (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v125,
            v116,
            v88);
          if ( *((_DWORD *)v89 + 50) == 1 && *((_DWORD *)v115 + 50) == 1 )
          {
            if ( (unsigned int)v4 < *(_DWORD *)(*((_QWORD *)v115 + 334) + 80LL) )
            {
              if ( DXGADAPTER::IsVSyncAvailable(v115, (unsigned int)v4) )
              {
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v125);
                goto LABEL_39;
              }
              v69 = -1071775738;
            }
            else
            {
              v92 = WdLogNewEntry5_WdWarning(v115, v90, v91);
              v69 = -1073741811;
              *(_QWORD *)(v92 + 24) = v4;
              *(_QWORD *)(v92 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v92);
            }
          }
          else
          {
            v69 = -1073741130;
          }
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v125);
          goto LABEL_103;
        }
        v75 = *(_QWORD *)(v13 + 496);
        v114 = (char *)(v75 + 208);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v75 + 208));
        if ( v19 < *(_DWORD *)(v75 + 256) )
        {
          v76 = *(_QWORD *)(v75 + 240);
          v77 = *(_DWORD *)(v76 + 16LL * v19 + 8);
          if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v76 + 16LL * v19 + 8) & 0x60)
            && (v77 & 0x2000) == 0
            && (v77 & 0x1F) != 0 )
          {
            v78 = v77 & 0x1F;
            if ( (_BYTE)v78 == 1 )
            {
              v23 = *(_QWORD *)(v76 + 16LL * v19);
              goto LABEL_124;
            }
            v79 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v78);
            *(_QWORD *)(v79 + 24) = 267LL;
            WdLogEvent5_WdError(v79);
          }
        }
        v23 = 0LL;
LABEL_124:
        ExReleasePushLockSharedEx(v114, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      return 3221225659LL;
    }
    else
    {
      v72 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v72 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v72);
      return 3221225506LL;
    }
  }
  else
  {
    v71 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v71 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v71);
    return 3221225485LL;
  }
}
