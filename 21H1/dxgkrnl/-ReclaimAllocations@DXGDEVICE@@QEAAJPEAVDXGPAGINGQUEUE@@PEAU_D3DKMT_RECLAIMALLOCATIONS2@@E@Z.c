/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C00FFD60
 * Callers:
 *     DxgkReclaimAllocations @ 0x1C0102EE0 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C010EE80 (DxgkReclaimAllocations2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C0246E94 (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        __int64 i,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // rcx
  BOOL *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 NumAllocations; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  const unsigned int *HandleList; // r15
  _BYTE *PoolWithTag; // rax
  const unsigned int *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  UINT v21; // esi
  UINT j; // r9d
  __int64 v23; // r8
  __int64 k; // rdx
  __int64 v25; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v27; // rdx
  unsigned int v28; // ebx
  UINT m; // r15d
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  _DWORD *v35; // rdx
  __int64 v36; // rdi
  int v37; // esi
  __int64 v38; // r8
  int *v39; // rdx
  __int64 v40; // r10
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r15
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  BOOL *pDiscarded; // rax
  __int64 v52; // r15
  __int64 v53; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  struct _KTHREAD *v59; // rsi
  __int64 v60; // rax
  int v61; // edi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  void *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // ebx
  __int64 v72; // rax
  __int64 *v73; // rax
  int *DxgThread; // rbx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  ULONG_PTR Count; // r8
  BOOL *v79; // rdx
  __int64 v80; // r10
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rdi
  _QWORD *v85; // rax
  __int64 v86; // rdx
  BOOL *v87; // rcx
  PVOID v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v92; // rax
  int CurrentProcessSessionId; // edi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 *ThreadWin32Thread; // rax
  int *ThreadProperty; // rbx
  _QWORD *v109; // rax
  char v110; // [rsp+30h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v111; // [rsp+38h] [rbp-100h] BYREF
  UINT v112; // [rsp+40h] [rbp-F8h]
  _QWORD *v113; // [rsp+48h] [rbp-F0h] BYREF
  BOOL v114; // [rsp+50h] [rbp-E8h] BYREF
  int v115; // [rsp+54h] [rbp-E4h] BYREF
  struct DXGPAGINGQUEUE *v116; // [rsp+58h] [rbp-E0h]
  DXGDEVICE *v117; // [rsp+60h] [rbp-D8h]
  const unsigned int *v118; // [rsp+68h] [rbp-D0h]
  int v119; // [rsp+70h] [rbp-C8h]
  struct DXGPAGINGQUEUE *v120; // [rsp+78h] [rbp-C0h]
  _BYTE v121[16]; // [rsp+80h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v122; // [rsp+90h] [rbp-A8h] BYREF
  PVOID P; // [rsp+A0h] [rbp-98h]
  _BYTE v124[64]; // [rsp+A8h] [rbp-90h] BYREF
  int v125; // [rsp+E8h] [rbp-50h]

  v110 = a4;
  v120 = (struct DXGPAGINGQUEUE *)i;
  v117 = this;
  v6 = 0LL;
  v111 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2589) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v119 = i;
        if ( (unsigned int)i >= a3->NumAllocations )
          break;
        v7 = (unsigned int)i;
        v8 = &a3->pDiscarded[(unsigned int)i];
        if ( (_BYTE)a4 )
        {
          v7 = MmUserProbeAddress;
          if ( (unsigned __int64)v8 >= MmUserProbeAddress )
            v8 = (BOOL *)MmUserProbeAddress;
        }
        *v8 = 0;
      }
    }
    v9 = WdLogNewEntry5_WdEvent(v7, i);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = 0LL;
    WdLogEvent5_WdEvent(v9);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v10);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations
    || (v15 = 0, i = (__int64)a3->pResources,
                 HandleList = a3->HandleList,
                 v7 = HandleList != 0LL,
                 (i != 0) == (_DWORD)v7) )
  {
    v13 = WdLogNewEntry5_WdWarning(v7, i, a3);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v14);
    return 3221225485LL;
  }
  if ( i )
    HandleList = a3->pResources;
  v118 = HandleList;
  P = 0LL;
  v125 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    PoolWithTag = v124;
  }
  else
  {
    i = 0xFFFFFFFFFFFFFFFFuLL % NumAllocations;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 4 )
      goto LABEL_21;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * NumAllocations, 0x4B677844u);
  }
  P = PoolWithTag;
  v125 = NumAllocations;
  v7 = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 4 * NumAllocations);
LABEL_21:
  if ( v110 )
  {
    v18 = (const unsigned int *)P;
    v118 = (const unsigned int *)P;
    if ( !P )
    {
      v19 = WdLogNewEntry5_WdLowResource(v7, i, a3, a4);
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = a3->NumAllocations;
      WdLogEvent5_WdLowResource(v19);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v20);
      return 3221225495LL;
    }
    v21 = 0;
    for ( j = 0; j < a3->NumAllocations; ++j )
    {
      v23 = j;
      i = (__int64)&HandleList[v23];
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)&HandleList[v23] >= MmUserProbeAddress )
        i = MmUserProbeAddress;
      v18[v23] = *(_DWORD *)i;
    }
  }
  else
  {
    v18 = HandleList;
    v21 = 0;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7, i) + 380) <= 0x10u )
    {
      if ( a3->pDiscarded )
      {
        for ( k = 0LL; (unsigned int)k < a3->NumAllocations; k = (unsigned int)(k + 1) )
          a3->pDiscarded[(unsigned int)k] = 0;
      }
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, k);
      return 0LL;
    }
    else
    {
      v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent();
      v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v25 + 4208),
              Current,
              this,
              v120,
              a3,
              v18);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v27);
      return v28;
    }
  }
  if ( a3->pResources )
  {
    for ( m = 0; ; ++m )
    {
      v112 = m;
      if ( m >= a3->NumAllocations )
        goto LABEL_143;
      v116 = (struct DXGPAGINGQUEUE *)(4LL * m);
      v30 = *(unsigned int *)((char *)v18 + (_QWORD)v116);
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v113, v30);
      if ( !v113 )
        break;
      if ( (DXGDEVICE *)v113[1] != this )
      {
        v34 = WdLogNewEntry5_WdError(v31, v113);
        *(_QWORD *)(v34 + 24) = this;
        *(_QWORD *)(v34 + 32) = v113[1];
        WdLogEvent5_WdError(v34);
        goto LABEL_74;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v121, (struct DXGFASTMUTEX *const)(v113 + 10), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v121);
      v36 = v113[3];
      v37 = 0;
      if ( v36 )
      {
        while ( 1 )
        {
          v38 = *(_QWORD *)(v36 + 24);
          if ( !v38 )
          {
            v48 = WdLogNewEntry5_WdError(0LL, v35);
            *(_QWORD *)(v48 + 24) = v36;
            WdLogEvent5_WdError(v48);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v121, v49);
            goto LABEL_74;
          }
          v115 = 0;
          v39 = &v115;
          if ( !a3->pDiscarded )
            v39 = 0LL;
          v40 = v120 ? *((_QWORD *)v120 + 4) : 0LL;
          v41 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 680LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                  v40,
                  v38,
                  &a3->PagingFenceValue,
                  v39);
          v44 = v41;
          if ( v41 < 0 )
            break;
          if ( v41 == 259 )
            v15 = 259;
          if ( v115 == 2 )
          {
            v37 = 2;
LABEL_78:
            m = v112;
            goto LABEL_79;
          }
          if ( v115 == 1 )
            v37 = 1;
          v36 = *(_QWORD *)(v36 + 64);
          if ( !v36 )
            goto LABEL_78;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v35, v43);
        v45[3] = this;
        v45[4] = v36;
        v45[5] = v44;
        WdLogEvent5_WdWarning(v45);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v121, v46);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v113);
        if ( P != v124 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v125 = 0;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v47);
        return (unsigned int)v44;
      }
LABEL_79:
      pDiscarded = a3->pDiscarded;
      if ( pDiscarded )
      {
        if ( v110 )
        {
          v35 = (_DWORD *)((char *)v116 + (_QWORD)pDiscarded);
          if ( (struct DXGPAGINGQUEUE *)((char *)v116 + (_QWORD)pDiscarded) >= (struct DXGPAGINGQUEUE *)MmUserProbeAddress )
            v35 = (_DWORD *)MmUserProbeAddress;
          *v35 = v37;
        }
        else
        {
          *(_DWORD *)((char *)v116 + (_QWORD)pDiscarded) = v37;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v121, (__int64)v35);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v113);
      v18 = v118;
    }
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, 0LL, v32);
    v33[3] = this;
    v33[4] = v30;
    v33[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
LABEL_74:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v113);
    if ( P != v124 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v112 = v21;
    if ( v21 >= a3->NumAllocations )
    {
LABEL_143:
      v88 = P;
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      if ( v6 )
        ExReleaseRundownProtection(v6 + 11);
      if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v88, i) + 283) )
        return v15;
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v92 = WdLogNewEntry5_WdAssertion(v90, v89);
        *(_QWORD *)(v92 + 24) = 496LL;
        WdLogEvent5_WdAssertion(v92);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v90);
      CurrentProcess = PsGetCurrentProcess(v95, v94);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      if ( !CurrentProcessSessionId )
        goto LABEL_162;
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_162;
      if ( !ProcessDxgProcess )
        goto LABEL_162;
      v98 = *(void **)(ProcessDxgProcess + 88);
      if ( !v98 || v98 == &gDxgkWin32kEngInterface )
        goto LABEL_162;
      v99 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v102 = PsGetCurrentProcess(v101, v100),
            ProcessSessionId = PsGetProcessSessionIdEx(v102),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v99 = *ThreadWin32Thread;
      }
      if ( v99 )
      {
        ThreadProperty = *(int **)(v99 + 80);
      }
      else
      {
LABEL_162:
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
          return v15;
        ObfDereferenceObject(ThreadProperty);
      }
      if ( ThreadProperty && ThreadProperty[8] )
      {
        v109 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v106, v105);
        v109[3] = 275LL;
        v109[4] = 38LL;
        v109[5] = ThreadProperty[8];
        v109[6] = 0LL;
        v109[7] = 0LL;
        WdLogEvent5_WdCriticalError(v109);
      }
      return v15;
    }
    v116 = (struct DXGPAGINGQUEUE *)(4LL * v21);
    v52 = *(unsigned int *)((char *)v18 + (_QWORD)v116);
    AllocationSafe = DXGPROCESS::GetAllocationSafe(
                       *((_QWORD *)this + 5),
                       (DXGALLOCATIONREFERENCE *)&v122,
                       *(const unsigned int *)((char *)v18 + (_QWORD)v116));
    if ( v6 )
      ExReleaseRundownProtection(v6 + 11);
    v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v111 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v55 = (__int64)v122;
    if ( v122 )
      ExReleaseRundownProtection(v122 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v55, v53) + 283) )
    {
      v59 = KeGetCurrentThread();
      if ( !v59 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v57, v56);
        *(_QWORD *)(v60 + 24) = 496LL;
        WdLogEvent5_WdAssertion(v60);
      }
      v61 = PsGetCurrentProcessSessionId(v57);
      v64 = PsGetCurrentProcess(v63, v62);
      v65 = PsGetProcessDxgProcess(v64);
      if ( !v61 )
        goto LABEL_105;
      if ( (unsigned int)PsGetThreadSessionId(v59) != v61 )
        goto LABEL_105;
      if ( !v65 )
        goto LABEL_105;
      v66 = *(void **)(v65 + 88);
      if ( !v66 || v66 == &gDxgkWin32kEngInterface )
        goto LABEL_105;
      v67 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v70 = PsGetCurrentProcess(v69, v68),
            v71 = PsGetProcessSessionIdEx(v70),
            v72 = PsGetCurrentThreadProcess(),
            v71 == (unsigned int)PsGetProcessSessionIdEx(v72)) )
      {
        v73 = (__int64 *)PsGetThreadWin32Thread(v59);
        if ( v73 )
          v67 = *v73;
      }
      if ( v67 )
      {
        DxgThread = *(int **)(v67 + 80);
      }
      else
      {
LABEL_105:
        DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !DxgThread )
          DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !DxgThread )
        {
LABEL_112:
          v6 = v111;
          v21 = v112;
          goto LABEL_113;
        }
        ObfDereferenceObject(DxgThread);
      }
      if ( DxgThread && DxgThread[8] )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v56);
        v75[3] = 275LL;
        v75[4] = 38LL;
        v75[5] = DxgThread[8];
        v75[6] = 0LL;
        v75[7] = 0LL;
        WdLogEvent5_WdCriticalError(v75);
        v6 = v111;
        v21 = v112;
        goto LABEL_113;
      }
      goto LABEL_112;
    }
LABEL_113:
    if ( !v6 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
      v76[3] = this;
      v76[4] = v52;
      v76[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v76);
      goto LABEL_120;
    }
    if ( (DXGDEVICE *)v6[1].Count != this )
    {
      v77 = WdLogNewEntry5_WdError(v57, v56);
      *(_QWORD *)(v77 + 24) = this;
      *(struct _EX_RUNDOWN_REF *)(v77 + 32) = v6[1];
      goto LABEL_119;
    }
    Count = v6[3].Count;
    if ( !Count )
      break;
    v114 = 0;
    v79 = &v114;
    if ( !a3->pDiscarded )
      v79 = 0LL;
    if ( v120 )
      v80 = *((_QWORD *)v120 + 4);
    else
      v80 = 0LL;
    v81 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, BOOL *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                              + 8LL)
                                                                                  + 680LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            v80,
            Count,
            &a3->PagingFenceValue,
            v79);
    v84 = v81;
    if ( v81 < 0 )
    {
      v85 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, i, v83);
      v85[3] = this;
      v85[4] = v6;
      v85[5] = v84;
      WdLogEvent5_WdWarning(v85);
      if ( P != v124 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v125 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v86);
      return (unsigned int)v84;
    }
    if ( v81 == 259 )
      v15 = 259;
    v87 = a3->pDiscarded;
    if ( v87 )
    {
      if ( v110 )
      {
        i = (__int64)v116 + (_QWORD)v87;
        if ( (struct DXGPAGINGQUEUE *)((char *)v116 + (_QWORD)v87) >= (struct DXGPAGINGQUEUE *)MmUserProbeAddress )
          i = MmUserProbeAddress;
        *(_DWORD *)i = v114;
      }
      else
      {
        i = (__int64)v116;
        *(BOOL *)((char *)v87 + (_QWORD)v116) = v114;
      }
    }
    ++v21;
    v18 = v118;
  }
  v77 = WdLogNewEntry5_WdError(v57, v56);
  *(_QWORD *)(v77 + 24) = v6;
LABEL_119:
  WdLogEvent5_WdError(v77);
LABEL_120:
  if ( P != v124 && P )
    ExFreePoolWithTag(P, 0);
LABEL_77:
  P = 0LL;
  v125 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111, v50);
  return 3221225485LL;
}
