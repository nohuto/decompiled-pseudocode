/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0103F90
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0103CE0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003ED0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003F90 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0004030 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0009CDC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C0104998 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C0112914 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C012B2E0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C012B570 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015BF70 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rsi
  DXGDEVICE *v6; // r12
  void **v7; // r14
  __int64 v8; // rax
  _QWORD *i; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v31; // rax
  int CurrentProcessSessionId; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r14
  void *v37; // rax
  __int64 ThreadWin32Thread; // rax
  int v39; // r14d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned __int8 v46; // cl
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  void **v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  char v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  bool v61; // zf
  __int64 v62; // rdx
  unsigned int v63; // ebx
  __int64 v64; // rax
  __int64 k; // rcx
  __int64 j; // rax
  void **v67; // r13
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // r15
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  void *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  void *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // r9d
  bool v84; // sf
  int v85; // eax
  __int64 v86; // rax
  int v87; // [rsp+38h] [rbp-D0h]
  DXGDEVICE *v88; // [rsp+40h] [rbp-C8h]
  __int64 v89; // [rsp+40h] [rbp-C8h]
  void **v90; // [rsp+48h] [rbp-C0h]
  void **v91[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+60h] [rbp-A8h]
  _QWORD v93[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v94[5]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v95[16]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v96[16]; // [rsp+B0h] [rbp-58h] BYREF
  char v97[8]; // [rsp+C0h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v99[8]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  v88 = this;
  memset(v99, 0, sizeof(v99));
  if ( !v4 || (v7 = *(void ***)(v4 + 64), (v90 = v7) == 0LL) )
  {
    v7 = (void **)v99;
    v90 = (void **)v99;
  }
  *(_OWORD *)v91 = 0LL;
  if ( v4 )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)v5;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v5 + 8LL);
    this = (DXGDEVICE *)*((_QWORD *)a2 + 5);
    *(_QWORD *)(v8 + 32) = this;
  }
  for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)i[8] )
  {
    v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = i;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(i[1] + 40LL);
    a2 = (struct DXGTERMINATIONTRACKER *)i[3];
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD, struct DXGTERMINATIONTRACKER *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 168LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 648LL),
        a2,
        0LL,
        *((unsigned int *)v5 + 12));
      i[3] = 0LL;
    }
    this = (DXGDEVICE *)i[4];
    if ( this )
    {
      v7[LODWORD(v91[0])] = this;
      ++LODWORD(v91[0]);
      i[4] = 0LL;
    }
  }
  if ( LODWORD(v91[0]) )
  {
    v11 = *((_QWORD *)v6 + 2);
    v92 = *((_QWORD *)v6 + 73);
    v91[1] = v7;
    LODWORD(v93[0]) = -1;
    v93[1] = 0LL;
    if ( (qword_1C00B19B0 & 2) != 0 )
    {
      LOBYTE(v94[0]) = 1;
      LODWORD(v93[0]) = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5029);
    }
    else
    {
      LOBYTE(v94[0]) = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v93, 5029LL);
    CurrentProcess = PsGetCurrentProcess(v13, v12);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v18 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
      || (Current = DXGTHREAD::GetCurrent(v17, v16)) == 0LL
      || (v20 = *((_QWORD *)Current + 1)) == 0 )
    {
      v20 = v18;
    }
    v87 = 0;
    v21 = v20 + 112;
    if ( !v20 )
      v21 = 0LL;
    if ( v21 && *(struct _KTHREAD **)(v21 + 8) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v22 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( v20 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v25 = *(_DWORD *)(v21 + 24);
          if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, &EventBlockThread, v24, v25);
        }
        ExAcquirePushLockExclusiveEx(v21, 0LL);
      }
      *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
      v87 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v11 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    ThreadProperty = 0LL;
    if ( CurrentIrql >= 2u )
      goto LABEL_51;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v31 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v31 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v31);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v27, v26);
    v35 = PsGetCurrentProcess(v34, v33);
    v36 = PsGetProcessDxgProcess(v35);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && v36
      && (v37 = *(void **)(v36 + 88)) != 0LL
      && v37 != &gDxgkWin32kEngInterface
      && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread)) != 0 )
    {
      ThreadProperty = *(struct DXGTHREAD **)(ThreadWin32Thread + 80);
    }
    else
    {
      ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !ThreadProperty )
      {
        ThreadProperty = DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
        {
          ThreadProperty = 0LL;
          goto LABEL_51;
        }
      }
      ObfDereferenceObject(ThreadProperty);
    }
    if ( ThreadProperty )
    {
      v39 = *((_DWORD *)ThreadProperty + 8);
LABEL_52:
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v97,
        *(struct DXGADAPTER **)(v11 + 16));
      v43 = (*(int (__fastcall **)(__int64, void ***))(*(_QWORD *)(v11 + 16) + 632LL))(v92, v91);
      if ( v97[0] )
        KeUnstackDetachProcess(&ApcState);
      v44 = KeGetCurrentIrql();
      if ( CurrentIrql != (_BYTE)v44 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v40);
        v45[3] = 275LL;
        v45[4] = 16LL;
        v45[5] = v11;
        v45[6] = CurrentIrql;
        v46 = KeGetCurrentIrql();
        v45[7] = v46;
        WdLogEvent5_WdCriticalError(v45);
      }
      if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v39 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v40);
        v47[3] = 275LL;
        v47[4] = 38LL;
        v47[5] = *((int *)ThreadProperty + 8);
        v47[6] = v39;
        v47[7] = 0LL;
        WdLogEvent5_WdCriticalError(v47);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 16) + 4364LL));
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v40, v41, v42);
      v49 = v92;
      v48[3] = v43;
      v48[4] = v49;
      v48[5] = LODWORD(v91[0]);
      v50 = v91[1];
      v51 = (__int64)*v91[1];
      v48[6] = *v91[1];
      if ( (_DWORD)v43 )
      {
        v52 = WdLogNewEntry5_WdError(v50, v51);
        *(_QWORD *)(v52 + 24) = v43;
        WdLogEvent5_WdError(v52);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v11 + 16));
      if ( v87 == 2 )
      {
        *(_QWORD *)(v21 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v21, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v93, v53);
      if ( LOBYTE(v94[0]) && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v93[0]);
      v6 = v88;
      goto LABEL_67;
    }
LABEL_51:
    v39 = 0;
    goto LABEL_52;
  }
LABEL_67:
  v56 = *(_QWORD *)v5;
  v57 = 0LL;
  v89 = 0LL;
  v58 = 1;
  if ( !*(_QWORD *)v5 )
  {
LABEL_86:
    v67 = v90;
    goto LABEL_87;
  }
  if ( (*(_DWORD *)(v56 + 4) & 1) == 0 )
  {
    v57 = *(_QWORD *)(v56 + 56);
    v89 = v57;
    goto LABEL_86;
  }
  v59 = *(_QWORD *)(v56 + 56);
  if ( v59 )
  {
    v60 = *(_QWORD *)(v59 + 152);
    if ( v60 )
    {
      if ( *(DXGDEVICE **)(v60 + 72) == v6 )
      {
        v61 = (*(_DWORD *)(v60 + 64))-- == 1;
        if ( v61 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v95,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 152LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 152LL) + 72LL) = 0LL;
          if ( v95[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95, v62);
        }
      }
    }
    v63 = 0;
    v61 = (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() == 0;
    v64 = *(_QWORD *)v5;
    if ( v61 )
    {
      for ( j = *(_QWORD *)(v64 + 24); j; ++v63 )
        j = *(_QWORD *)(j + 64);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v96, (struct DXGFASTMUTEX *const)(v64 + 80), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
      for ( k = *(_QWORD *)(*(_QWORD *)v5 + 24LL); k; ++v63 )
        k = *(_QWORD *)(k + 64);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v96);
    }
    v56 = *(_QWORD *)(*(_QWORD *)v5 + 56LL);
    v67 = v90;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 68), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v56, v90, v63);
    v57 = 0LL;
    v58 = 0;
    *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
  }
  else
  {
    v67 = v90;
    v58 = 0;
  }
LABEL_87:
  v68 = *((_QWORD *)v5 + 1);
  memset(&v94[1], 0, 32);
  if ( !v68 )
    goto LABEL_109;
  do
  {
    v69 = *(_DWORD *)(v68 + 72);
    v70 = *(_QWORD *)(v68 + 64);
    if ( (v69 & 0x800) != 0 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v56, v57);
      *(_QWORD *)(v71 + 24) = 1952LL;
      WdLogEvent5_WdAssertion(v71);
      v69 = *(_DWORD *)(v68 + 72);
    }
    if ( (v69 & 0x7FE) != 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v56, v57);
      *(_QWORD *)(v72 + 24) = 1953LL;
      WdLogEvent5_WdAssertion(v72);
    }
    v73 = *(_QWORD *)(v68 + 48);
    if ( v73 )
    {
      if ( v58 )
      {
        if ( *(_QWORD *)(v73 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 640LL) + 8LL) + 136LL))(
            *((_QWORD *)v6 + 95),
            0LL);
          *(_QWORD *)(*(_QWORD *)(v68 + 48) + 8LL) = 0LL;
          v73 = *(_QWORD *)(v68 + 48);
        }
        v74 = *(void **)(v73 + 16);
        if ( v74 )
        {
          v67[LODWORD(v94[1])] = v74;
          ++LODWORD(v94[1]);
          *(_QWORD *)(*(_QWORD *)(v68 + 48) + 16LL) = 0LL;
        }
        goto LABEL_103;
      }
    }
    else if ( v58 )
    {
      goto LABEL_103;
    }
    v75 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v56, v57);
      *(_QWORD *)(v76 + 24) = 1979LL;
      WdLogEvent5_WdAssertion(v76);
      v75 = *(_QWORD *)v5;
    }
    if ( (*(_DWORD *)(v75 + 4) & 1) == 0 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v56, v57);
      *(_QWORD *)(v77 + 24) = 1980LL;
      WdLogEvent5_WdAssertion(v77);
    }
LABEL_103:
    if ( !*(_QWORD *)v5 || (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
    {
      v78 = *(void **)(v68 + 48);
      if ( v78 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v68 + 48));
        operator delete(v78);
      }
    }
    DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v68);
    ExFreePoolWithTag((PVOID)v68, 0);
    v68 = v70;
  }
  while ( v70 );
  v57 = v89;
LABEL_109:
  if ( v58 )
  {
    v61 = *(_QWORD *)v5 == 0LL;
    v56 = 1LL;
    v94[3] = v57;
    LODWORD(v94[4]) = !v61;
    if ( LODWORD(v94[1]) )
    {
      v94[2] = v67;
      goto LABEL_114;
    }
    v94[2] = 0LL;
    if ( v57 )
LABEL_114:
      ADAPTER_RENDER::DdiDestroyAllocation(
        *((ADAPTER_RENDER **)v6 + 2),
        (const struct _DXGKARG_DESTROYALLOCATION *)&v94[1],
        0);
  }
  if ( v6 != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)v6 + 23) == KeGetCurrentThread() )
  {
    v79 = WdLogNewEntry5_WdAssertion(v56, v57);
    *(_QWORD *)(v79 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v79);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v6 + 176, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v83 = *((_DWORD *)v6 + 50);
      if ( v83 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v81, &EventBlockThread, v82, v83);
    }
    ExAcquirePushLockExclusiveEx((char *)v6 + 176, 0LL);
  }
  *((_QWORD *)v6 + 23) = KeGetCurrentThread();
  v84 = --*((_DWORD *)v6 + 468) < 0;
  v85 = *((_DWORD *)v6 + 468);
  if ( v84 )
  {
    v86 = WdLogNewEntry5_WdAssertion(v81, v80);
    *(_QWORD *)(v86 + 24) = 1266LL;
    WdLogEvent5_WdAssertion(v86);
    v85 = *((_DWORD *)v6 + 468);
  }
  if ( !v85 )
    KeSetEvent(*((PRKEVENT *)v6 + 235), 0, 0);
  *((_QWORD *)v6 + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 176, 0LL);
  KeLeaveCriticalRegion();
}
