/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0174BD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001DFD8 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016CBAC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char *a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rdi
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // r13
  struct _KEVENT *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  volatile signed __int64 *v45; // rcx
  volatile signed __int64 *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  char *v49; // rdx
  struct DXGADAPTER *v50; // rcx
  struct DXGADAPTER *v51; // rcx
  DXGGLOBAL **v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  int v62; // r9d
  int v63; // r9d
  int v64; // eax
  char *v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // r9
  char *v69; // rdx
  char *v71; // [rsp+70h] [rbp-98h] BYREF
  __int64 v72; // [rsp+80h] [rbp-88h] BYREF
  struct DXGADAPTER *v73; // [rsp+88h] [rbp-80h]
  char v74; // [rsp+90h] [rbp-78h]
  int v75; // [rsp+98h] [rbp-70h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-68h]
  char v77; // [rsp+A8h] [rbp-60h]
  union _LARGE_INTEGER v78; // [rsp+B0h] [rbp-58h] BYREF
  char v79[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-48h]
  char v81; // [rsp+C8h] [rbp-40h]
  char v82[8]; // [rsp+D8h] [rbp-30h] BYREF
  char v83[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v84; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v85; // [rsp+F0h] [rbp-18h]
  char v86; // [rsp+F8h] [rbp-10h]
  char *v87; // [rsp+100h] [rbp-8h]
  char v88[24]; // [rsp+108h] [rbp+0h] BYREF
  char v89[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v90; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v91; // [rsp+130h] [rbp+28h]
  char v92; // [rsp+138h] [rbp+30h]
  __int64 v93; // [rsp+140h] [rbp+38h]
  __int64 v94; // [rsp+160h] [rbp+58h]
  char v95; // [rsp+168h] [rbp+60h]
  char v96[8]; // [rsp+178h] [rbp+70h] BYREF
  char v97[64]; // [rsp+180h] [rbp+78h] BYREF
  char v98[88]; // [rsp+1C0h] [rbp+B8h] BYREF

  v75 = -1;
  v71 = a3;
  v3 = (unsigned int)a1;
  v76 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v77 = 1;
    v75 = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3036);
  }
  else
  {
    v77 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v75, 3036);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess
    && (v14 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7, (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0)
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v15 = *((_QWORD *)Current + 3)) == 0 )
  {
    v15 = v13;
    if ( !v13 )
    {
      v56 = PsGetCurrentProcess(v14, v10, v11, v12);
      v29 = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, v56);
      v61 = PsGetCurrentProcess(v58, v57, v59, v60);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
        -1073741811LL,
        v61,
        0LL,
        0LL,
        0LL);
      goto LABEL_21;
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
  v16 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v15 + 296) )
  {
    v38 = *(_QWORD *)(v15 + 280);
    v39 = *(_DWORD *)(v38 + 16LL * v16 + 8);
    if ( (((unsigned int)v3 >> 25) & 0x60) == (*(_BYTE *)(v38 + 16LL * v16 + 8) & 0x60)
      && (v39 & 0x2000) == 0
      && (v39 & 0x1F) != 0
      && (*(_BYTE *)(v38 + 16LL * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v15 != -248 && *(struct _KTHREAD **)(v15 + 256) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v62 = *(_DWORD *)(v15 + 272);
      if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (const EVENT_DESCRIPTOR *)"g", v18, v62);
    }
    ExAcquirePushLockSharedEx(v15 + 248, 0LL);
  }
  if ( v16 >= *(_DWORD *)(v15 + 296) )
    goto LABEL_20;
  v19 = *(_QWORD *)(v15 + 280);
  v20 = *(_DWORD *)(v19 + 16LL * v16 + 8);
  if ( (((unsigned int)v3 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16LL * v16 + 8) & 0x60)
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0 )
  {
    goto LABEL_20;
  }
  if ( (v20 & 0x1F) != 7 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_20:
    ExReleasePushLockSharedEx(v15 + 248, 0LL);
    KeLeaveCriticalRegion();
    v28 = PsGetCurrentProcess(v25, v24, v26, v27);
    v29 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v28, v3);
    v34 = PsGetCurrentProcess(v31, v30, v32, v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v34,
      v3,
      0LL,
      0LL);
    goto LABEL_21;
  }
  v21 = *(_QWORD *)(v19 + 16LL * v16);
  if ( !v21 )
    goto LABEL_20;
  _m_prefetchw((const void *)(v21 + 32));
  v22 = *(_QWORD *)(v21 + 32);
  if ( !v22 )
    goto LABEL_20;
  while ( 1 )
  {
    v23 = v22;
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 32), v22 + 1, v22);
    if ( v23 == v22 )
      break;
    if ( !v22 )
      goto LABEL_20;
  }
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  v40 = *(_QWORD *)(v21 + 16);
  v41 = *(struct _KEVENT **)(v40 + 16);
  if ( !KeReadStateEvent(v41 + 5) )
    KeWaitForSingleObject(&v41[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v40 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v40 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, (const EVENT_DESCRIPTOR *)"g", v54, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v40 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v40 + 16) + 16LL));
  }
  if ( v21 != -448 && *(struct _KTHREAD **)(v21 + 456) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21 + 448, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v63 = *(_DWORD *)(v21 + 472);
      if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v42, (const EVENT_DESCRIPTOR *)"g", v43, v63);
    }
    ExAcquirePushLockExclusiveEx(v21 + 448, 0LL);
  }
  *(_QWORD *)(v21 + 456) = KeGetCurrentThread();
  v73 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v73 + 3);
  v72 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v73 + 136, 0LL);
  v74 = 1;
  v44 = *(_QWORD *)(v21 + 16);
  v45 = *(volatile signed __int64 **)(*(_QWORD *)(v44 + 16) + 16LL);
  v85 = (struct DXGADAPTER *)v45;
  v86 = 0;
  v87 = 0LL;
  if ( v45 )
  {
    _InterlockedIncrement64(v45 + 3);
    v84 = -1LL;
  }
  v46 = *(volatile signed __int64 **)(*(_QWORD *)(v44 + 16) + 16LL);
  v91 = (struct DXGADAPTER *)v46;
  v92 = 0;
  v93 = 0LL;
  if ( v46 )
  {
    _InterlockedIncrement64(v46 + 3);
    v90 = -1LL;
  }
  v94 = v44;
  v95 = 0;
  if ( v86 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v83, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v85 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v85 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, (const EVENT_DESCRIPTOR *)"g", v48, 72);
      KeWaitForSingleObject((char *)v85 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v85, v71);
  }
  v49 = v71;
  v87 = 0LL;
  if ( v71 )
  {
    v64 = RtlStringCbCopyA(v88, 17LL, v71);
    v49 = v71;
    v65 = v88;
    if ( v64 < 0 )
      v65 = v87;
    v87 = v65;
  }
  v86 = 1;
  if ( *(_DWORD *)(v94 + 576) == 1 )
  {
    v78.QuadPart = -100000LL;
    v29 = SubmitPresentHistoryToken(
            a2,
            (struct COREDEVICEACCESS *)v82,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v72,
            0LL,
            0,
            &v78,
            0LL,
            0LL,
            (struct DXGCONTEXT *)v21,
            0LL,
            v49);
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v83);
    if ( v95 )
      COREACCESS::Release((COREACCESS *)v89);
    WdLogSingleEntry3(4LL, -1073741130LL, v21, v15);
    v29 = -1073741130;
  }
  v50 = v91;
  if ( v91 )
  {
    if ( v92 )
    {
      COREACCESS::Release((COREACCESS *)v89);
      v50 = v91;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
  }
  v51 = v85;
  if ( v85 )
  {
    if ( v86 )
    {
      v86 = 0;
      v51 = v85;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v85 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v85, v87);
        v51 = v85;
      }
      v87 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v51 + 2), v51);
  }
  if ( v74 )
  {
    v74 = 0;
    ExReleasePushLockSharedEx((char *)v73 + 136, 0LL);
    KeLeaveCriticalRegion();
    v52 = (DXGGLOBAL **)v73;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v52[2], (struct DXGADAPTER *)v52);
  }
  *(_QWORD *)(v21 + 456) = 0LL;
  ExReleasePushLockExclusiveEx(v21 + 448, 0LL);
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(v40 + 136));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v66 = *(_QWORD *)(v21 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71,
      (struct DXGDEVICE *)v66);
    v67 = *(_QWORD *)(v21 + 16);
    v81 = 0;
    v80 = *(_QWORD *)(*(_QWORD *)(v67 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v96, v66, 2, v68, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v96, v69);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v66, (struct DXGCONTEXT *)v21, (struct COREDEVICEACCESS *)v96);
    COREACCESS::~COREACCESS((COREACCESS *)v98);
    COREACCESS::~COREACCESS((COREACCESS *)v97);
    if ( v81 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v79);
    if ( v71 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v71);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v66 + 16), (struct DXGDEVICE *)v66);
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75);
  if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v75);
  return v29;
}
