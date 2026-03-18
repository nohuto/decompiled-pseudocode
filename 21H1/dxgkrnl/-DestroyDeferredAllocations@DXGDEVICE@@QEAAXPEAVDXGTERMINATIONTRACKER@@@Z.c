/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0119CE0
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0119A30 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00153E4 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C011A458 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C011A490 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C011A4B0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C011A8D0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(DXGDEVICE *this, struct DXGTERMINATIONTRACKER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  void **v9; // rdi
  _QWORD *v10; // rbx
  int i; // r12d
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdi
  int v23; // r13d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  int *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  _QWORD *v38; // rax
  void **v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  char v45; // di
  __int64 v46; // r13
  __int64 v47; // rbx
  int v48; // eax
  __int64 v49; // r15
  __int64 v50; // rax
  void *v51; // rcx
  void *v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  bool v56; // sf
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r8d
  __int64 j; // rax
  __int64 v63; // rax
  int v65; // r9d
  int v66; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  void *v70; // rcx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // [rsp+38h] [rbp-D0h]
  __int64 v83; // [rsp+38h] [rbp-D0h]
  __int64 v84; // [rsp+40h] [rbp-C8h]
  int v85; // [rsp+40h] [rbp-C8h]
  void **v86; // [rsp+48h] [rbp-C0h]
  void **v87[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 CurrentIrql; // [rsp+60h] [rbp-A8h]
  _QWORD v89[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v90[5]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v91[16]; // [rsp+A0h] [rbp-68h] BYREF
  char v92[8]; // [rsp+B0h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v94[128]; // [rsp+E8h] [rbp-20h] BYREF

  memset(v94, 0, sizeof(v94));
  v8 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 || (v9 = *(void ***)(v8 + 64), (v86 = v9) == 0LL) )
  {
    v9 = (void **)v94;
    v86 = (void **)v94;
  }
  *(_OWORD *)v87 = 0LL;
  if ( v8 )
  {
    v58 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v58 + 24) = *(_QWORD *)a2;
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    v5 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v58 + 32) = v5;
  }
  v10 = (_QWORD *)*((_QWORD *)a2 + 1);
  for ( i = 0; v10; v10 = (_QWORD *)v10[8] )
  {
    v12 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v12 + 24) = v10;
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(v10[1] + 40LL);
    v4 = v10[3];
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                          + 8LL)
                                                              + 168LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
        v4,
        0LL,
        *((unsigned int *)a2 + 12));
      v10[3] = 0LL;
    }
    v5 = v10[4];
    if ( v5 )
    {
      v9[LODWORD(v87[0])] = (void *)v5;
      ++LODWORD(v87[0]);
      v10[4] = 0LL;
    }
  }
  if ( LODWORD(v87[0]) )
  {
    v13 = *((_QWORD *)this + 2);
    v82 = *((_QWORD *)this + 73);
    v87[1] = v9;
    LODWORD(v89[0]) = -1;
    v89[1] = 0LL;
    if ( (qword_1C00AE9B0 & 2) != 0 )
    {
      LOBYTE(v90[0]) = 1;
      LODWORD(v89[0]) = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 5029);
    }
    else
    {
      LOBYTE(v90[0]) = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v89, 5029LL);
    CurrentProcess = PsGetCurrentProcess(v15, v14);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v20 = ProcessDxgProcess;
    if ( (!ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0)
      && (Current = DXGTHREAD::GetCurrent(v19, v18)) != 0LL
      && (v21 = *((_QWORD *)Current + 1)) != 0
      || (v21 = v20) != 0 )
    {
      v22 = v21 + 112;
    }
    else
    {
      v22 = 0LL;
    }
    v23 = 0;
    if ( v22 && *(struct _KTHREAD **)(v22 + 8) == KeGetCurrentThread() )
    {
      v68 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v68 + 24) = 1569LL;
      WdLogEvent5_WdAssertion(v68);
    }
    if ( v21 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v65 = *(_DWORD *)(v22 + 24);
          if ( v65 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v24, &EventBlockThread, v25, v65);
        }
        ExAcquirePushLockExclusiveEx(v22, 0LL);
      }
      v23 = 2;
      *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v13 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4324LL));
    CurrentIrql = KeGetCurrentIrql();
    ThreadProperty = 0LL;
    if ( (unsigned __int8)CurrentIrql >= 2u )
      goto LABEL_33;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v69 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v69 + 24) = 496LL;
      WdLogEvent5_WdAssertion(v69);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v27);
    v33 = PsGetCurrentProcess(v32, v31);
    v84 = PsGetProcessDxgProcess(v33);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && v84
      && (v70 = *(void **)(v84 + 88)) != 0LL
      && v70 != &gDxgkWin32kEngInterface
      && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread)) != 0 )
    {
      ThreadProperty = *(int **)(ThreadWin32Thread + 80);
    }
    else
    {
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !ThreadProperty )
      {
        ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
        {
          i = 0;
          ThreadProperty = 0LL;
LABEL_33:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v92,
            *(struct DXGADAPTER **)(v13 + 16));
          v85 = (*(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)(v13 + 16) + 632LL))(v82, v87);
          if ( v92[0] )
            KeUnstackDetachProcess(&ApcState);
          v37 = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != (_BYTE)v37 )
          {
            v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v34);
            v73 = (unsigned __int8)CurrentIrql;
            v72[3] = 275LL;
            v72[4] = 16LL;
            v72[5] = v13;
            v72[6] = v73;
            LOBYTE(v73) = KeGetCurrentIrql();
            v72[7] = (unsigned __int8)v73;
            WdLogEvent5_WdCriticalError(v72);
          }
          if ( ThreadProperty && ThreadProperty[8] != i )
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v34);
            v74[3] = 275LL;
            v74[4] = 38LL;
            v74[5] = ThreadProperty[8];
            v74[6] = i;
            v74[7] = 0LL;
            WdLogEvent5_WdCriticalError(v74);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4324LL));
          v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v34, v35, v36);
          v38[3] = v85;
          v38[4] = v82;
          v38[5] = LODWORD(v87[0]);
          v39 = v87[1];
          v40 = (__int64)*v87[1];
          v38[6] = *v87[1];
          if ( v85 )
          {
            v75 = WdLogNewEntry5_WdError(v39, v40);
            *(_QWORD *)(v75 + 24) = v85;
            WdLogEvent5_WdError(v75);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v13 + 16));
          if ( v23 == 2 )
          {
            *(_QWORD *)(v22 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v22, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v89, v41);
          if ( LOBYTE(v90[0]) && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v89[0]);
          goto LABEL_45;
        }
      }
      ObfDereferenceObject(ThreadProperty);
    }
    if ( ThreadProperty )
      i = ThreadProperty[8];
    else
      i = 0;
    goto LABEL_33;
  }
LABEL_45:
  v44 = *(_QWORD *)a2;
  v45 = 1;
  v83 = 0LL;
  v46 = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( (*(_DWORD *)(v44 + 4) & 1) != 0 )
    {
      v59 = *(_QWORD *)(v44 + 56);
      if ( v59 )
      {
        v60 = *(_QWORD *)(v59 + 152);
        if ( v60 )
        {
          if ( *(DXGDEVICE **)(v60 + 72) == this && (*(_DWORD *)(v60 + 64))-- == 1 )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX(
              (DXGAUTOMUTEX *)v91,
              (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 152LL) + 8LL),
              0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v91);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 152LL) + 72LL) = 0LL;
            if ( v91[8] )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v91, v4);
          }
        }
        v61 = 0;
        for ( j = *(_QWORD *)(*(_QWORD *)a2 + 24LL); j; ++v61 )
          j = *(_QWORD *)(j + 64);
        v44 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 68), 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v44, v86, v61);
        *(_QWORD *)(*(_QWORD *)a2 + 56LL) = 0LL;
      }
      v45 = 0;
    }
    else
    {
      v46 = *(_QWORD *)(v44 + 56);
      v83 = v46;
    }
  }
  v47 = *((_QWORD *)a2 + 1);
  memset(&v90[1], 0, 32);
  if ( v47 )
  {
    while ( 1 )
    {
      v48 = *(_DWORD *)(v47 + 72);
      v49 = *(_QWORD *)(v47 + 64);
      if ( (v48 & 0x800) != 0 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v44, v4);
        *(_QWORD *)(v76 + 24) = 1919LL;
        WdLogEvent5_WdAssertion(v76);
        v48 = *(_DWORD *)(v47 + 72);
      }
      if ( (v48 & 0x7FE) != 0 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v44, v4);
        *(_QWORD *)(v77 + 24) = 1920LL;
        WdLogEvent5_WdAssertion(v77);
      }
      v50 = *(_QWORD *)(v47 + 48);
      if ( v50 )
      {
        if ( !v45 )
          goto LABEL_88;
        if ( *(_QWORD *)(v50 + 8) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 136LL))(
            *((_QWORD *)this + 95),
            0LL);
          *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8LL) = 0LL;
          v50 = *(_QWORD *)(v47 + 48);
        }
        v51 = *(void **)(v50 + 16);
        if ( v51 )
        {
          v86[LODWORD(v90[1])] = v51;
          ++LODWORD(v90[1]);
          *(_QWORD *)(*(_QWORD *)(v47 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v45 )
      {
LABEL_88:
        v63 = *(_QWORD *)a2;
        if ( !*(_QWORD *)a2 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v44, v4);
          *(_QWORD *)(v78 + 24) = 1946LL;
          WdLogEvent5_WdAssertion(v78);
          v63 = *(_QWORD *)a2;
        }
        if ( (*(_DWORD *)(v63 + 4) & 1) == 0 )
        {
          v79 = WdLogNewEntry5_WdAssertion(v44, v4);
          *(_QWORD *)(v79 + 24) = 1947LL;
          WdLogEvent5_WdAssertion(v79);
        }
      }
      if ( !*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 4LL) & 1) == 0 )
      {
        v52 = *(void **)(v47 + 48);
        if ( v52 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v47 + 48));
          operator delete(v52);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v47);
      ExFreePoolWithTag((PVOID)v47, 0);
      v47 = v49;
      if ( !v49 )
      {
        v46 = v83;
        break;
      }
    }
  }
  if ( v45 )
  {
    LODWORD(v90[4]) = *(_QWORD *)a2 != 0LL;
    v90[3] = v46;
    if ( LODWORD(v90[1]) )
    {
      v90[2] = v86;
    }
    else
    {
      v90[2] = 0LL;
      if ( !v46 )
        goto LABEL_66;
    }
    ADAPTER_RENDER::DdiDestroyAllocation(
      *((ADAPTER_RENDER **)this + 2),
      (const struct _DXGKARG_DESTROYALLOCATION *)&v90[1],
      0);
  }
LABEL_66:
  if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
  {
    v80 = WdLogNewEntry5_WdAssertion(v44, v4);
    *(_QWORD *)(v80 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v80);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 176, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v66 = *((_DWORD *)this + 50);
      if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v54, &EventBlockThread, v55, v66);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  }
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v56 = --*((_DWORD *)this + 468) < 0;
  v57 = *((_DWORD *)this + 468);
  if ( v56 )
  {
    v81 = WdLogNewEntry5_WdAssertion(v54, v53);
    *(_QWORD *)(v81 + 24) = 1251LL;
    WdLogEvent5_WdAssertion(v81);
    v57 = *((_DWORD *)this + 468);
  }
  if ( !v57 )
    KeSetEvent(*((PRKEVENT *)this + 235), 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 176, 0LL);
  KeLeaveCriticalRegion();
}
