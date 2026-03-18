/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F6310
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C00F6220 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0003BBC (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D330 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C002466C (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0024738 (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003ACC0 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C003E230 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C005E32C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C014A744 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0211048 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C0215074 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
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
  __int64 v53; // r8
  unsigned int v54; // ecx
  ADAPTER_DISPLAY *v55; // rsi
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdi
  __int64 v63; // rax
  unsigned int v64; // edi
  DXGGLOBAL **v65; // rcx
  DXGGLOBAL **v66; // rcx
  int v68; // edi
  struct DXGTHREAD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // r9d
  __int64 v74; // r15
  __int64 v75; // r9
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  struct DXGADAPTER *v87; // r8
  DXGADAPTER *v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // r8
  __int64 v100; // rax
  struct DXGTHREAD *Current; // rax
  unsigned int v102; // eax
  unsigned int v103; // edx
  ADAPTER_DISPLAY *v104; // r10
  _QWORD *v105; // rax
  int v106; // eax
  unsigned __int8 v107; // [rsp+40h] [rbp-C0h] BYREF
  char v108; // [rsp+41h] [rbp-BFh]
  char v109; // [rsp+42h] [rbp-BEh]
  char v110; // [rsp+43h] [rbp-BDh]
  unsigned int v111; // [rsp+44h] [rbp-BCh]
  unsigned int v112; // [rsp+48h] [rbp-B8h]
  char *v113; // [rsp+50h] [rbp-B0h]
  struct DXGADAPTER *v114; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v115; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v116; // [rsp+68h] [rbp-98h]
  struct DXGDEVICE *v117; // [rsp+70h] [rbp-90h] BYREF
  __int64 v118; // [rsp+78h] [rbp-88h]
  int v119; // [rsp+80h] [rbp-80h] BYREF
  int v120; // [rsp+84h] [rbp-7Ch] BYREF
  struct DXGDEVICE *v121; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v122; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v123; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v124[64]; // [rsp+A0h] [rbp-60h] BYREF
  char v125; // [rsp+E0h] [rbp-20h] BYREF
  char v126; // [rsp+E1h] [rbp-1Fh]
  char v127[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v128; // [rsp+F0h] [rbp-10h]
  struct DXGADAPTER *v129; // [rsp+F8h] [rbp-8h]
  char v130; // [rsp+100h] [rbp+0h]
  __int64 v131; // [rsp+108h] [rbp+8h]
  char v132[8]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v133; // [rsp+130h] [rbp+30h]
  struct DXGADAPTER *v134; // [rsp+138h] [rbp+38h]
  char v135; // [rsp+140h] [rbp+40h]
  char *v136; // [rsp+148h] [rbp+48h]

  v4 = a3;
  v5 = 0;
  v116 = a3;
  v117 = 0LL;
  v111 = a4;
  v112 = a2;
  v6 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
    && (v69 = DXGTHREAD::GetCurrent()) != 0LL
    && (v13 = *((_QWORD *)v69 + 1)) != 0
    || (v13 = v12) != 0 )
  {
    if ( *(_BYTE *)(v13 + 346) )
    {
      v119 = 0;
      v120 = 0;
      v14 = (*(__int64 (__fastcall **)(int *, _QWORD, int *))(*(_QWORD *)(v13 + 88) + 224LL))(&v119, 0LL, &v120);
      if ( v119 && (!v14 || v120) )
      {
        if ( v13 != -208 && *(struct _KTHREAD **)(v13 + 216) == KeGetCurrentThread() )
        {
          v72 = WdLogNewEntry5_WdAssertion(v16, v15);
          *(_QWORD *)(v72 + 24) = 1571LL;
          WdLogEvent5_WdAssertion(v72);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 208, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v73 = *(_DWORD *)(v13 + 232);
            if ( v73 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, v73);
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
            v79 = WdLogNewEntry5_WdWarning(v26, v25, v27);
            LODWORD(v33) = -1073741811;
            *(_QWORD *)(v79 + 24) = v6;
            *(_QWORD *)(v79 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v79);
            return (unsigned int)v33;
          }
          v28 = v112;
          if ( v112 )
          {
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v121, v112, (struct _KTHREAD **)v13, &v117);
            if ( !v117 )
            {
              v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
              *(_QWORD *)(v83 + 24) = v23;
              *(_QWORD *)(v83 + 32) = v28;
              WdLogEvent5_WdWarning(v83);
              if ( v121 && _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v121 + 2), v121);
              LODWORD(v33) = -1073741811;
              goto LABEL_97;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v117 + 8);
            if ( v121 && _InterlockedExchangeAdd64((volatile signed __int64 *)v121 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v121 + 2), v121);
          }
          v115 = 0LL;
          v114 = 0LL;
          PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v23, v4, &v115, &v122, &v114, &v123, 0);
          v33 = PairingAdapters;
          if ( PairingAdapters < 0 )
          {
            v84 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
            v84[3] = v23;
            v84[4] = v4;
            v84[5] = v33;
            WdLogEvent5_WdError(v84);
LABEL_96:
            if ( v117 && _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
LABEL_97:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
            return (unsigned int)v33;
          }
          v34 = (volatile signed __int64 *)v115;
          v35 = (volatile signed __int64 *)v114;
          if ( !v115 || !v114 )
          {
            v85 = WdLogNewEntry5_WdAssertion(v31, v30);
            *(_QWORD *)(v85 + 24) = 6477LL;
            WdLogEvent5_WdAssertion(v85);
          }
          if ( v117
            && (v34 != *(volatile signed __int64 **)(*((_QWORD *)v117 + 2) + 16LL)
             || v35 != *((volatile signed __int64 **)v117 + 231)) )
          {
            v86 = WdLogNewEntry5_WdWarning(v117, v30, v32);
            *(_QWORD *)(v86 + 24) = v23;
            *(_QWORD *)(v86 + 32) = v28;
            WdLogEvent5_WdWarning(v86);
            LODWORD(v33) = -1073741811;
            goto LABEL_96;
          }
          v126 = 0;
          v129 = (struct DXGADAPTER *)v34;
          v130 = 0;
          v131 = 0LL;
          if ( v34 )
          {
            _InterlockedIncrement64(v34 + 3);
            v34 = (volatile signed __int64 *)v115;
            v35 = (volatile signed __int64 *)v114;
            v128 = -1LL;
          }
          if ( !v35 )
            v35 = v34;
          v134 = (struct DXGADAPTER *)v35;
          v135 = 0;
          v136 = 0LL;
          if ( v35 )
          {
            _InterlockedIncrement64(v35 + 3);
            v34 = (volatile signed __int64 *)v115;
            v133 = -1LL;
          }
          if ( _InterlockedExchangeAdd64(v34 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
          v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v114 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v37 = v114;
          if ( v36 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v114 + 2), v114);
          if ( *((_DWORD *)v37 + 40) != 1 )
          {
LABEL_39:
            if ( v135 )
            {
              v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v30);
              v92[5] = v132;
              v92[3] = 275LL;
              v92[4] = 4LL;
              v92[6] = 0LL;
              v92[7] = 0LL;
              WdLogEvent5_WdCriticalError(v92);
            }
            v38 = v134;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v134 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v39, &EventBlockThread, v40, 72);
                KeWaitForSingleObject((char *)v134 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v134, 0LL);
              v38 = v134;
            }
            v136 = 0LL;
            v135 = 1;
            if ( *((_DWORD *)v38 + 50) != 1 )
              goto LABEL_155;
            if ( v129 != v134 )
            {
              COREACCESS::AcquireShared((COREACCESS *)v127, 0LL);
              v38 = (struct DXGADAPTER *)*((unsigned int *)v129 + 50);
              if ( (_DWORD)v38 != 1 )
              {
                COREACCESS::Release((COREACCESS *)v127);
LABEL_155:
                COREACCESS::Release((COREACCESS *)v132);
LABEL_156:
                v68 = -1073741130;
                goto LABEL_103;
              }
            }
            v41 = v115;
            v126 = 1;
            v42 = (__int64 *)((char *)v115 + 2704);
            v113 = (char *)v115 + 2704;
            if ( !*((_QWORD *)v115 + 338) )
            {
              v93 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v93 + 24) = 6531LL;
              WdLogEvent5_WdAssertion(v93);
              v42 = (__int64 *)v113;
            }
            v43 = v114;
            v44 = (ADAPTER_DISPLAY **)((char *)v114 + 2696);
            if ( !*((_QWORD *)v114 + 337) )
            {
              v94 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v94 + 24) = 6532LL;
              WdLogEvent5_WdAssertion(v94);
              v42 = (__int64 *)v113;
            }
            if ( v112 )
            {
              v38 = (struct DXGADAPTER *)*((unsigned int *)v117 + 144);
              if ( (_DWORD)v38 != 1 )
                goto LABEL_156;
              v41 = v115;
              v43 = v114;
            }
            v45 = *v44;
            v108 = 0;
            v107 = 0;
            v109 = 0;
            v110 = 0;
            if ( !v45 )
            {
              v95 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v95 + 24) = 9659LL;
              WdLogEvent5_WdAssertion(v95);
              v45 = *v44;
              v42 = (__int64 *)v113;
              if ( !*v44 )
                goto LABEL_102;
            }
            v46 = v116;
            if ( v116 >= *((_DWORD *)v45 + 20) )
            {
              v96 = WdLogNewEntry5_WdAssertion(v38, v42);
              *(_QWORD *)(v96 + 24) = 6068LL;
              WdLogEvent5_WdAssertion(v96);
              v46 = v116;
              v42 = (__int64 *)v113;
            }
            v47 = 3968 * v46;
            v48 = *((_QWORD *)v45 + 14);
            v118 = v47;
            if ( !*(_BYTE *)(v48 + v47 + 720) )
            {
LABEL_102:
              v68 = -1071775738;
LABEL_103:
              v5 = v68;
LABEL_84:
              LODWORD(v33) = v5;
              if ( v126 )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v125);
              if ( v134 )
              {
                if ( v135 )
                  COREACCESS::Release((COREACCESS *)v132);
                v65 = (DXGGLOBAL **)v134;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v134 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v65[2], (struct DXGADAPTER *)v65);
              }
              if ( v129 )
              {
                if ( v130 )
                  COREACCESS::Release((COREACCESS *)v127);
                v66 = (DXGGLOBAL **)v129;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v129 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v66[2], (struct DXGADAPTER *)v66);
              }
              goto LABEL_96;
            }
            if ( !*((_QWORD *)v43 + 338) )
            {
              LODWORD(v49) = v116;
              v102 = DXGADAPTER::NumberOfVSyncWaiter(v41, v116);
              ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(v104, v103, v111, v102, &v107);
              ADAPTER_DISPLAY::ControlVSyncAdapter(*v44, v49);
              goto LABEL_75;
            }
            if ( v43 != v41 )
            {
              v97 = WdLogNewEntry5_WdAssertion(v47, v42);
              *(_QWORD *)(v97 + 24) = 6554LL;
              WdLogEvent5_WdAssertion(v97);
              v42 = (__int64 *)v113;
            }
            v49 = v116;
            v50 = (_DWORD *)((char *)v41 + 2568);
            v51 = v116;
            if ( (*((_DWORD *)v41 + 642) & 0x10) != 0 )
            {
              if ( v116 >= 0x10 )
                goto LABEL_61;
            }
            else
            {
              v51 = 0;
            }
            _InterlockedIncrement((volatile signed __int32 *)v41 + v51 + 682);
            v41 = v115;
LABEL_61:
            v52 = *v42;
            v108 = 1;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v52 + 616) + 8LL) + 544LL))(
                   *(_QWORD *)(v52 + 624),
                   (unsigned int)v49) )
            {
              goto LABEL_62;
            }
            v98 = *(_QWORD *)v113;
            if ( v117 )
            {
              v99 = *(_QWORD *)(v98 + 616);
              v100 = *(_QWORD *)(v99 + 8);
              LOBYTE(v99) = 1;
              if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v100 + 560))(
                     *((_QWORD *)v117 + 96),
                     0LL,
                     v99,
                     (unsigned int)v49) >= 0 )
              {
                v110 = 1;
                goto LABEL_62;
              }
            }
            else
            {
              LOBYTE(v53) = 1;
              if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v98 + 616) + 8LL)
                                                                           + 552LL))(
                     *(_QWORD *)(v98 + 624),
                     1LL,
                     v53,
                     (unsigned int)v49) >= 0 )
              {
                v109 = 1;
LABEL_62:
                v54 = v49;
                if ( (*v50 & 0x10) != 0 )
                {
                  if ( (unsigned int)v49 >= 0x10 )
                  {
                    v112 = 0;
                    goto LABEL_65;
                  }
                }
                else
                {
                  v54 = 0;
                }
                v112 = *((_DWORD *)v41 + v54 + 682);
LABEL_65:
                v55 = *v44;
                v56 = *((_QWORD *)*v44 + 14) + v118;
                v57 = PsGetCurrentProcess();
                v58 = PsGetProcessDxgProcess(v57);
                v62 = v58;
                if ( v58 && (*(_BYTE *)(v58 + 347) & 0x10) == 0
                  || (Current = DXGTHREAD::GetCurrent()) == 0LL
                  || (v63 = *((_QWORD *)Current + 1)) == 0 )
                {
                  v63 = v62;
                }
                v107 = 1;
                if ( *(_QWORD *)(v56 + 936) && *(_BYTE *)(v63 + 346) )
                {
                  v64 = v111;
                  if ( *((_QWORD *)v55 + 48) )
                  {
                    *(_DWORD *)(v56 + 944) = v111;
                    BLTQUEUE::SetDWMTargetVsync(
                      (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v55 + 48) + 8LL) + 2904 * v49),
                      v64);
                  }
                  else
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0qqqq_EtwWriteTransfer(
                        v112,
                        &EventDWMVsyncCountWait,
                        v61,
                        v111,
                        *(_DWORD *)(v56 + 948),
                        *(_BYTE *)(v56 + 952),
                        v112);
                    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v55, v49, v111, &v107);
                  }
                }
LABEL_75:
                if ( v129 != v134 )
                  COREACCESS::Release((COREACCESS *)v127);
                if ( !v135 )
                {
                  v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
                  v105[5] = v132;
                  v105[3] = 275LL;
                  v105[4] = 4LL;
                  v105[6] = 0LL;
                  v105[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v105);
                }
                v135 = 0;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 23) )
                  DXGADAPTER::ReleaseCoreResource(v134, v136);
                v136 = 0LL;
                v126 = 0;
                if ( v107 && v108 )
                  DXGADAPTER::DecrementVSyncWaiter(v115, (unsigned int)v49);
                if ( v109 )
                {
                  v68 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v125, 0LL);
                  if ( v68 < 0 )
                    goto LABEL_103;
                  v106 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v113 + 616LL)
                                                                                                + 8LL)
                                                                                    + 552LL))(
                           *(_QWORD *)(*(_QWORD *)v113 + 624LL),
                           1LL,
                           0LL,
                           (unsigned int)v49);
                }
                else
                {
                  if ( !v110 )
                    goto LABEL_84;
                  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v125, 0LL);
                  if ( v5 < 0 || *((_DWORD *)v117 + 144) != 1 )
                    goto LABEL_84;
                  v106 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v113 + 616LL)
                                                                                               + 8LL)
                                                                                   + 560LL))(
                           *((_QWORD *)v117 + 96),
                           0LL,
                           0LL,
                           (unsigned int)v49);
                }
                v5 = v106;
                goto LABEL_84;
              }
            }
            DXGADAPTER::DecrementVSyncWaiter(v41, (unsigned int)v49);
            goto LABEL_102;
          }
          v87 = v37;
          v88 = v115;
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
            (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v124,
            v115,
            v87);
          if ( *((_DWORD *)v88 + 50) == 1 && *((_DWORD *)v114 + 50) == 1 )
          {
            if ( (unsigned int)v4 < *(_DWORD *)(*((_QWORD *)v114 + 337) + 80LL) )
            {
              if ( DXGADAPTER::IsVSyncAvailable(v114, v4) )
              {
                DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v124);
                goto LABEL_39;
              }
              v68 = -1071775738;
            }
            else
            {
              v91 = WdLogNewEntry5_WdWarning(v114, v89, v90);
              v68 = -1073741811;
              *(_QWORD *)(v91 + 24) = v4;
              *(_QWORD *)(v91 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v91);
            }
          }
          else
          {
            v68 = -1073741130;
          }
          DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v124);
          goto LABEL_103;
        }
        v74 = *(_QWORD *)(v13 + 496);
        v113 = (char *)(v74 + 208);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v74 + 208));
        if ( v19 < *(_DWORD *)(v74 + 256) )
        {
          v75 = *(_QWORD *)(v74 + 240);
          v76 = *(_DWORD *)(v75 + 16LL * v19 + 8);
          if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v75 + 16LL * v19 + 8) & 0x60)
            && (v76 & 0x2000) == 0
            && (v76 & 0x1F) != 0 )
          {
            v77 = v76 & 0x1F;
            if ( (_BYTE)v77 == 1 )
            {
              v23 = *(_QWORD *)(v75 + 16LL * v19);
              goto LABEL_124;
            }
            v78 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v77);
            *(_QWORD *)(v78 + 24) = 267LL;
            WdLogEvent5_WdError(v78);
          }
        }
        v23 = 0LL;
LABEL_124:
        ExReleasePushLockSharedEx(v113, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      return 3221225659LL;
    }
    else
    {
      v71 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v71 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v71);
      return 3221225506LL;
    }
  }
  else
  {
    v70 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v70 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v70);
    return 3221225485LL;
  }
}
