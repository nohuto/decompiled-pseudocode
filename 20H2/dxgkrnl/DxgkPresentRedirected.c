/*
 * XREFs of DxgkPresentRedirected @ 0x1C0281DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016994 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C004639C (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0046474 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0102FF0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0151B30 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0156388 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C0156854 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  PERESOURCE *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  DXGPUSHLOCK *v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  bool v32; // zf
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rax
  int v45; // r14d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGDEVICE *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v53; // r12
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  ULONG64 v62; // rcx
  struct DXGDEVICE *v63; // [rsp+60h] [rbp-5F8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v64; // [rsp+68h] [rbp-5F0h]
  int v65; // [rsp+70h] [rbp-5E8h] BYREF
  __int64 v66; // [rsp+78h] [rbp-5E0h]
  ULONG64 v67; // [rsp+80h] [rbp-5D8h]
  int *v68; // [rsp+88h] [rbp-5D0h]
  char v69; // [rsp+90h] [rbp-5C8h]
  int v70; // [rsp+98h] [rbp-5C0h] BYREF
  struct DXGDEVICE *v71; // [rsp+A0h] [rbp-5B8h] BYREF
  char v72[8]; // [rsp+A8h] [rbp-5B0h] BYREF
  char v73; // [rsp+B0h] [rbp-5A8h]
  char v74[8]; // [rsp+B8h] [rbp-5A0h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-598h]
  char v76; // [rsp+C8h] [rbp-590h]
  ULONG64 v77; // [rsp+D0h] [rbp-588h]
  struct VIDSCH_SUBMIT_DATA_BASE *v78[2]; // [rsp+D8h] [rbp-580h] BYREF
  ULONG64 v79; // [rsp+E8h] [rbp-570h] BYREF
  int v80; // [rsp+F0h] [rbp-568h]
  int v81; // [rsp+F4h] [rbp-564h]
  __int64 v82; // [rsp+F8h] [rbp-560h]
  struct DXGDEVICE *v83; // [rsp+100h] [rbp-558h]
  _DWORD v84[10]; // [rsp+108h] [rbp-550h] BYREF
  _BYTE v85[160]; // [rsp+130h] [rbp-528h] BYREF
  _BYTE v86[1120]; // [rsp+1D0h] [rbp-488h] BYREF

  v2 = a1;
  v70 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v64 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v8, v7);
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  memset(v86, 0, sizeof(v86));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v2 >= MmUserProbeAddress )
      v2 = MmUserProbeAddress;
    v11 = v86;
    v12 = 8LL;
    do
    {
      *v11 = *(_OWORD *)v2;
      v11[1] = *(_OWORD *)(v2 + 16);
      v11[2] = *(_OWORD *)(v2 + 32);
      v11[3] = *(_OWORD *)(v2 + 48);
      v11[4] = *(_OWORD *)(v2 + 64);
      v11[5] = *(_OWORD *)(v2 + 80);
      v11[6] = *(_OWORD *)(v2 + 96);
      v11 += 8;
      *(v11 - 1) = *(_OWORD *)(v2 + 112);
      v2 += 128LL;
      --v12;
    }
    while ( v12 );
    *v11 = *(_OWORD *)v2;
    v11[1] = *(_OWORD *)(v2 + 16);
    v11[2] = *(_OWORD *)(v2 + 32);
    v11[3] = *(_OWORD *)(v2 + 48);
    v11[4] = *(_OWORD *)(v2 + 64);
    v11[5] = *(_OWORD *)(v2 + 80);
    v2 = (ULONG64)v86;
  }
  v77 = v2;
  v66 = 0LL;
  v65 = 2147;
  v68 = &v70;
  v69 = 1;
  v67 = v2 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v10, 2147);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2147LL);
  v64 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v2 + 16);
  if ( *(_DWORD *)(v2 + 16) != 9 || *(_DWORD *)(v2 + 1096) )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_41;
  }
  v17 = *(unsigned int *)v2;
  v71 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v63,
    *(unsigned int *)(v2 + 4),
    (struct _KTHREAD **)Current,
    &v71);
  v20 = v71;
  if ( !v71 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(v2 + 4);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    if ( !v63 || _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v22 = *(_QWORD *)(*((_QWORD *)v71 + 2) + 16LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v19, v18);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v72, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v72, v24);
  v25 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
  v26 = (struct DXGPROCESS *)((char *)Current + 208);
  if ( *(int *)(v22 + 2596) < 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v26);
    if ( (unsigned int)v25 >= *((_DWORD *)Current + 64) )
      goto LABEL_34;
    v27 = *((_QWORD *)Current + 30);
    v33 = *(_DWORD *)(v27 + 16 * v25 + 8);
    v29 = ((unsigned int)v17 >> 25) & 0x60;
    if ( (((unsigned int)v17 >> 25) & 0x60) != (*(_BYTE *)(v27 + 16 * v25 + 8) & 0x60)
      || (v33 & 0x2000) != 0
      || (v33 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v30 = 2 * v25;
    v31 = v33 & 0x1F;
    v32 = (_BYTE)v31 == 8;
  }
  else
  {
    DXGPUSHLOCK::AcquireShared(v26);
    if ( (unsigned int)v25 >= *((_DWORD *)Current + 64) )
      goto LABEL_34;
    v27 = *((_QWORD *)Current + 30);
    v28 = *(_DWORD *)(v27 + 16LL * (unsigned int)v25 + 8);
    v29 = ((unsigned int)v17 >> 25) & 0x60;
    if ( (((unsigned int)v17 >> 25) & 0x60) != (*(_BYTE *)(v27 + 16LL * (unsigned int)v25 + 8) & 0x60)
      || (v28 & 0x2000) != 0
      || (v28 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v30 = 2 * v25;
    v31 = v28 & 0x1F;
    v32 = (_BYTE)v31 == 11;
  }
  if ( !v32 )
  {
    v34 = WdLogNewEntry5_WdError(v29, v31);
    *(_QWORD *)(v34 + 24) = 267LL;
    WdLogEvent5_WdError(v34);
LABEL_34:
    v35 = 0LL;
    goto LABEL_35;
  }
  v35 = *(_QWORD *)(v27 + 8 * v30);
LABEL_35:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v35 )
  {
    v38 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v38 + 24) = v17;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( v73 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72);
    if ( !v63 || _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_41;
LABEL_40:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
LABEL_41:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v16);
    if ( v69 )
    {
      if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v67,
          v40,
          *(_DWORD *)v67,
          *(_DWORD *)(v67 + 56),
          *(_QWORD *)(v67 + 80),
          *(_QWORD *)(v67 + 88),
          *(_DWORD *)(v67 + 1096),
          *v68);
    }
    else if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v67,
        v40,
        *(_DWORD *)v67,
        *(_QWORD *)(v67 + 8),
        *(_DWORD *)(v67 + 16),
        *(_DWORD *)(v67 + 84),
        *(_DWORD *)(v67 + 88),
        *v68,
        *(_DWORD *)(v67 + 20),
        *(_DWORD *)(v67 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v65);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v20 + 8);
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72);
  v75 = v22;
  v76 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
  if ( *(_DWORD *)(v22 + 200) != 1 )
  {
    v44 = WdLogNewEntry5_WdError(v42, v41);
    *(_QWORD *)(v44 + 24) = v22;
    v45 = -1073741823;
    *(_QWORD *)(v44 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v44);
LABEL_54:
    if ( v76 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v71);
    if ( v73 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72);
    if ( v63 && _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v46);
    if ( v69 )
    {
      if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v67,
          v48,
          *(_DWORD *)v67,
          *(_DWORD *)(v67 + 56),
          *(_QWORD *)(v67 + 80),
          *(_QWORD *)(v67 + 88),
          *(_DWORD *)(v67 + 1096),
          *v68);
    }
    else if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v67,
        v48,
        *(_DWORD *)v67,
        *(_QWORD *)(v67 + 8),
        *(_DWORD *)(v67 + 16),
        *(_DWORD *)(v67 + 84),
        *(_DWORD *)(v67 + 88),
        *v68,
        *(_DWORD *)(v67 + 20),
        *(_DWORD *)(v67 + 24));
    }
    if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v65);
    return (unsigned int)v45;
  }
  v49 = v71;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, (__int64)v71, 2, v43, 0);
  v70 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v85, 0LL);
  if ( v70 < 0 )
  {
    v52 = WdLogNewEntry5_WdError(v51, v50);
    *(_QWORD *)(v52 + 24) = v70;
    WdLogEvent5_WdError(v52);
    v45 = v70;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    goto LABEL_54;
  }
  v53 = v64;
  v45 = SubmitPresentHistoryTokenPreparation(
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v74,
          (struct COREDEVICEACCESS *)v85,
          (struct DXGADAPTER *)v22,
          v64,
          0LL,
          0);
  v70 = v45;
  if ( v45 < 0 )
  {
LABEL_77:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    if ( v76 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v71);
    if ( v73 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72);
    if ( v63 && _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
    goto LABEL_63;
  }
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
    (TOKEN_BINDING_GUARD *)v84,
    v53,
    (struct DXGADAPTERSTOPRESETLOCKSHARED *)v74,
    (struct COREDEVICEACCESS *)v85);
  v78[0] = 0LL;
  v78[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v22 + 2704);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v78);
  v57 = v78[0];
  if ( v78[0] )
  {
    *(_DWORD *)v78[0] = *(_DWORD *)v78[0] & 0xFFFCFEDF | 0x10120;
    v62 = v77;
    *((_QWORD *)v57 + 58) = *(_QWORD *)(v77 + 8);
    v81 = 0;
    v79 = v62;
    v80 = v17;
    v82 = v22;
    v83 = v49;
    v45 = SubmitPresentHistoryToken(
            v53,
            (struct COREDEVICEACCESS *)v85,
            (__int64)v74,
            0LL,
            1,
            0LL,
            0LL,
            v57,
            0LL,
            (struct _PRESENT_REDIRECTED_PARAMS *)&v79,
            0LL);
    v70 = v45;
    v84[0] = v45;
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v78);
    TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v84);
    goto LABEL_77;
  }
  v58 = WdLogNewEntry5_WdLowResource(v54, 0LL, v55, v56);
  *(_QWORD *)(v58 + 24) = 1047LL;
  WdLogEvent5_WdLowResource(v58);
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v78);
  TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)v84);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
  if ( v76 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v71);
  if ( v73 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v72);
  if ( v63 && _InterlockedExchangeAdd64((volatile signed __int64 *)v63 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v59);
  if ( v69 )
  {
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v67,
        v61,
        *(_DWORD *)v67,
        *(_DWORD *)(v67 + 56),
        *(_QWORD *)(v67 + 80),
        *(_QWORD *)(v67 + 88),
        *(_DWORD *)(v67 + 1096),
        *v68);
  }
  else if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v67,
      v61,
      *(_DWORD *)v67,
      *(_QWORD *)(v67 + 8),
      *(_DWORD *)(v67 + 16),
      *(_DWORD *)(v67 + 84),
      *(_DWORD *)(v67 + 88),
      *v68,
      *(_DWORD *)(v67 + 20),
      *(_DWORD *)(v67 + 24));
  }
  if ( (qword_1C00AF9B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v65);
  return 3221225495LL;
}
