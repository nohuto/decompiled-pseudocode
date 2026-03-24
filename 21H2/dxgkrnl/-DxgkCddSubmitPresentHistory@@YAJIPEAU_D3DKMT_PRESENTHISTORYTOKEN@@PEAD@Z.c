/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C0104A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00026F0 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005898 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x1C001A348 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5B54 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FDD00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01050C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020CC74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char *a3)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rdi
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  struct _KEVENT *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  volatile signed __int64 *v33; // rcx
  volatile signed __int64 *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r14d
  struct DXGADAPTER *v38; // rcx
  struct DXGADAPTER *v39; // rcx
  DXGGLOBAL **v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v45; // rdx
  int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int8 v49; // bl
  __int64 v50; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rax
  _QWORD *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // r9d
  _QWORD *v64; // rax
  int v65; // eax
  char *v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // r9
  char *v71; // rdx
  __int64 v73; // [rsp+70h] [rbp-98h] BYREF
  struct DXGADAPTER *v74; // [rsp+78h] [rbp-90h]
  char v75; // [rsp+80h] [rbp-88h]
  int v76; // [rsp+88h] [rbp-80h] BYREF
  __int64 v77; // [rsp+90h] [rbp-78h]
  char v78; // [rsp+98h] [rbp-70h]
  union _LARGE_INTEGER v79; // [rsp+A0h] [rbp-68h] BYREF
  char v80[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-58h]
  char v82; // [rsp+B8h] [rbp-50h]
  _QWORD v83[3]; // [rsp+C0h] [rbp-48h] BYREF
  char v84[8]; // [rsp+D8h] [rbp-30h] BYREF
  char v85[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v87; // [rsp+F0h] [rbp-18h]
  char v88; // [rsp+F8h] [rbp-10h]
  char *v89; // [rsp+100h] [rbp-8h]
  char v90[24]; // [rsp+108h] [rbp+0h] BYREF
  char v91[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v92; // [rsp+128h] [rbp+20h]
  struct DXGADAPTER *v93; // [rsp+130h] [rbp+28h]
  char v94; // [rsp+138h] [rbp+30h]
  __int64 v95; // [rsp+140h] [rbp+38h]
  __int64 v96; // [rsp+160h] [rbp+58h]
  char v97; // [rsp+168h] [rbp+60h]
  char v98[8]; // [rsp+178h] [rbp+70h] BYREF
  char v99[64]; // [rsp+180h] [rbp+78h] BYREF
  char v100[88]; // [rsp+1C0h] [rbp+B8h] BYREF

  v4 = (unsigned int)a1;
  v76 = -1;
  v77 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v78 = 1;
    v76 = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3036);
  }
  else
  {
    v78 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v76, 3036LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v12 = *((_QWORD *)Current + 1)) == 0 )
  {
    v12 = v11;
    if ( !v11 )
    {
      v37 = -1073741811;
      v52 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v52 + 24) = -1073741811LL;
      *(_QWORD *)(v52 + 32) = PsGetCurrentProcess(v54, v53);
      WdLogEvent5_WdError(v52);
      goto LABEL_57;
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 208));
  v13 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v13 < *(_DWORD *)(v12 + 256) )
  {
    v45 = *(_QWORD *)(v12 + 240);
    v46 = *(_DWORD *)(v45 + 16LL * v13 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16LL * v13 + 8) & 0x60)
      && (v46 & 0x2000) == 0
      && (v46 & 0x1F) != 0
      && (*(_BYTE *)(v45 + 16LL * (((unsigned int)v4 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      v47 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v45);
      *(_QWORD *)(v47 + 24) = 316LL;
      WdLogEvent5_WdError(v47);
    }
  }
  ExReleasePushLockSharedEx(v12 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 != -208 && *(struct _KTHREAD **)(v12 + 216) == KeGetCurrentThread() )
  {
    v55 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v55 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v55);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v56 = *(_DWORD *)(v12 + 232);
      if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v56);
    }
    ExAcquirePushLockSharedEx(v12 + 208, 0LL);
  }
  if ( v13 < *(_DWORD *)(v12 + 256) )
  {
    v18 = *(_QWORD *)(v12 + 240);
    v19 = *(_DWORD *)(v18 + 16LL * v13 + 8);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v13 + 8) & 0x60)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      v20 = v19 & 0x1F;
      if ( (_BYTE)v20 == 7 )
      {
        v21 = *(_QWORD *)(v18 + 16LL * v13);
        if ( !v21 )
          goto LABEL_21;
        _m_prefetchw((const void *)(v21 + 32));
        v22 = *(_QWORD *)(v21 + 32);
        while ( v22 )
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 32), v22 + 1, v22);
          if ( v23 == v22 )
            goto LABEL_21;
        }
      }
      else
      {
        v57 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v20);
        *(_QWORD *)(v57 + 24) = 316LL;
        WdLogEvent5_WdError(v57);
      }
    }
  }
  v21 = 0LL;
LABEL_21:
  ExReleasePushLockSharedEx(v12 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v21 )
  {
    v26 = *(_QWORD *)(v21 + 16);
    v27 = *(struct _KEVENT **)(v26 + 16);
    if ( !KeReadStateEvent(v27 + 5) )
      KeWaitForSingleObject(&v27[5], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 104LL));
      v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v48, &EventBlockThread, v50, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v26 + 136), 1u);
      if ( v49 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v21 != -464 && *(struct _KTHREAD **)(v21 + 472) == KeGetCurrentThread() )
    {
      v62 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v62 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v62);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21 + 464, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v63 = *(_DWORD *)(v21 + 488);
        if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventBlockThread, v31, v63);
      }
      ExAcquirePushLockExclusiveEx(v21 + 464, 0LL);
    }
    *(_QWORD *)(v21 + 472) = KeGetCurrentThread();
    v74 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)v74 + 3);
    v73 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v74 + 136, 0LL);
    v75 = 1;
    v32 = *(_QWORD *)(v21 + 16);
    v33 = *(volatile signed __int64 **)(*(_QWORD *)(v32 + 16) + 16LL);
    v87 = (struct DXGADAPTER *)v33;
    v88 = 0;
    v89 = 0LL;
    if ( v33 )
    {
      _InterlockedIncrement64(v33 + 3);
      v86 = -1LL;
    }
    v34 = *(volatile signed __int64 **)(*(_QWORD *)(v32 + 16) + 16LL);
    v93 = (struct DXGADAPTER *)v34;
    v94 = 0;
    v95 = 0LL;
    if ( v34 )
    {
      _InterlockedIncrement64(v34 + 3);
      v92 = -1LL;
    }
    v96 = v32;
    v97 = 0;
    if ( v88 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v32);
      v64[5] = v85;
      v64[3] = 275LL;
      v64[4] = 4LL;
      v64[6] = 0LL;
      v64[7] = 0LL;
      WdLogEvent5_WdCriticalError(v64);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v87 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v87 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, 72);
        KeWaitForSingleObject((char *)v87 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v87, a3);
    }
    v89 = 0LL;
    if ( a3 )
    {
      v65 = RtlStringCbCopyA(v90, v32, a3);
      v66 = v90;
      if ( v65 < 0 )
        v66 = v89;
      v89 = v66;
    }
    v88 = 1;
    if ( *(_DWORD *)(v96 + 576) == 1 )
    {
      v79.QuadPart = -100000LL;
      v37 = SubmitPresentHistoryToken(
              a2,
              (struct COREDEVICEACCESS *)v84,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v73,
              0LL,
              0,
              &v79,
              0LL,
              0LL,
              (struct DXGCONTEXT *)v21,
              0LL,
              a3);
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v85);
      if ( v97 )
        COREACCESS::Release((COREACCESS *)v91);
      v67 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v67[3] = -1073741130LL;
      v67[4] = v21;
      v67[5] = v12;
      WdLogEvent5_WdEvent(v67);
      v37 = -1073741130;
    }
    v38 = v93;
    if ( v93 )
    {
      if ( v94 )
      {
        COREACCESS::Release((COREACCESS *)v91);
        v38 = v93;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v38 + 2), v38);
    }
    v39 = v87;
    if ( v87 )
    {
      if ( v88 )
      {
        v88 = 0;
        v39 = v87;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v87 + 23) )
        {
          DXGADAPTER::ReleaseCoreResource(v87, v89);
          v39 = v87;
        }
        v89 = 0LL;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v39 + 2), v39);
    }
    if ( v75 )
    {
      v75 = 0;
      ExReleasePushLockSharedEx((char *)v74 + 136, 0LL);
      KeLeaveCriticalRegion();
      v40 = (DXGGLOBAL **)v74;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v40[2], (struct DXGADAPTER *)v40);
    }
    *(_QWORD *)(v21 + 472) = 0LL;
    ExReleasePushLockExclusiveEx(v21 + 464, 0LL);
    KeLeaveCriticalRegion();
    ExReleaseResourceLite(*(PERESOURCE *)(v26 + 136));
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v68 = *(_QWORD *)(v21 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v83,
        (struct DXGDEVICE *)v68);
      v69 = *(_QWORD *)(v21 + 16);
      v82 = 0;
      v81 = *(_QWORD *)(*(_QWORD *)(v69 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, v68, 2, v70, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v98, v71);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 16) + 16LL) + 200LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v68, (struct DXGCONTEXT *)v21, (struct COREDEVICEACCESS *)v98);
      COREACCESS::~COREACCESS((COREACCESS *)v100);
      COREACCESS::~COREACCESS((COREACCESS *)v99);
      if ( v82 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
      if ( v83[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v83);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v68 + 16), (struct DXGDEVICE *)v68);
    }
  }
  else
  {
    v37 = -1073741811;
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v58[3] = -1073741811LL;
    v61 = PsGetCurrentProcess(v60, v59);
    v58[5] = v4;
    v58[4] = v61;
    WdLogEvent5_WdError(v58);
  }
LABEL_57:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76, v41);
  if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v76);
  return v37;
}
