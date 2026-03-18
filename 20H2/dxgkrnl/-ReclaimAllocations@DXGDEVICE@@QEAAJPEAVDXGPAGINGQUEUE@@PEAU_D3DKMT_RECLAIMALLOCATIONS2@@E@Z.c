/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C00FE650
 * Callers:
 *     DxgkReclaimAllocations @ 0x1C0101780 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C010DAC0 (DxgkReclaimAllocations2.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014350 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0155EC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C024A0DC (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        __int64 pResources,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // rcx
  UINT i; // edx
  BOOL *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 NumAllocations; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // r12d
  const unsigned int *HandleList; // r15
  _BYTE *PoolWithTag; // rax
  const unsigned int *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  UINT v22; // esi
  UINT j; // r9d
  __int64 v24; // r8
  __int64 k; // rdx
  __int64 v26; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rdx
  unsigned int v29; // ebx
  UINT m; // r15d
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rdx
  struct _EX_RUNDOWN_REF *v36; // rax
  __int64 v37; // rdx
  ULONG_PTR Count; // rdi
  int v39; // esi
  __int64 v40; // r8
  int *v41; // rdx
  __int64 v42; // r10
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r15
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  BOOL *pDiscarded; // rax
  _DWORD *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  struct _KTHREAD *v62; // rsi
  __int64 v63; // rax
  int v64; // edi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rbx
  void *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // ebx
  __int64 v75; // rax
  __int64 *v76; // rax
  int *DxgThread; // rbx
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  ULONG_PTR v81; // r8
  BOOL *v82; // rdx
  __int64 v83; // r10
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rdi
  _QWORD *v88; // rax
  __int64 v89; // rdx
  BOOL *v90; // rcx
  PVOID v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v95; // rax
  int CurrentProcessSessionId; // edi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v101; // rax
  __int64 v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 *ThreadWin32Thread; // rax
  int *ThreadProperty; // rbx
  _QWORD *v112; // rax
  char v113; // [rsp+30h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v114; // [rsp+38h] [rbp-100h] BYREF
  UINT v115; // [rsp+40h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v116; // [rsp+48h] [rbp-F0h] BYREF
  BOOL v117; // [rsp+50h] [rbp-E8h] BYREF
  int v118; // [rsp+54h] [rbp-E4h] BYREF
  struct DXGPAGINGQUEUE *v119; // [rsp+58h] [rbp-E0h]
  DXGDEVICE *v120; // [rsp+60h] [rbp-D8h]
  const unsigned int *v121; // [rsp+68h] [rbp-D0h]
  UINT v122; // [rsp+70h] [rbp-C8h]
  struct DXGPAGINGQUEUE *v123; // [rsp+78h] [rbp-C0h]
  _BYTE v124[16]; // [rsp+80h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v125; // [rsp+90h] [rbp-A8h] BYREF
  PVOID P; // [rsp+A0h] [rbp-98h]
  _BYTE v127[64]; // [rsp+A8h] [rbp-90h] BYREF
  int v128; // [rsp+E8h] [rbp-50h]

  v113 = a4;
  v123 = (struct DXGPAGINGQUEUE *)pResources;
  v120 = this;
  v6 = 0LL;
  v114 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2613) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0; ; ++i )
      {
        v122 = i;
        if ( i >= a3->NumAllocations )
          break;
        v9 = &a3->pDiscarded[i];
        if ( (_BYTE)a4 )
        {
          if ( (unsigned __int64)v9 >= MmUserProbeAddress )
            v9 = (BOOL *)MmUserProbeAddress;
        }
        *v9 = 0;
      }
    }
    v10 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = 0LL;
    WdLogEvent5_WdEvent(v10);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v11);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations
    || (v16 = 0,
        pResources = (__int64)a3->pResources,
        HandleList = a3->HandleList,
        v7 = HandleList != 0LL,
        (pResources != 0) == (_DWORD)v7) )
  {
    v14 = WdLogNewEntry5_WdWarning(v7, pResources, a3);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v15);
    return 3221225485LL;
  }
  if ( pResources )
    HandleList = a3->pResources;
  v121 = HandleList;
  P = 0LL;
  v128 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    PoolWithTag = v127;
  }
  else
  {
    pResources = 0xFFFFFFFFFFFFFFFFuLL % NumAllocations;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 4 )
      goto LABEL_21;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * NumAllocations, 0x4B677844u);
  }
  P = PoolWithTag;
  v128 = NumAllocations;
  v7 = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 4 * NumAllocations);
LABEL_21:
  if ( v113 )
  {
    v19 = (const unsigned int *)P;
    v121 = (const unsigned int *)P;
    if ( !P )
    {
      v20 = WdLogNewEntry5_WdLowResource(v7, pResources, a3, a4);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = a3->NumAllocations;
      WdLogEvent5_WdLowResource(v20);
      if ( P != v127 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v128 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v21);
      return 3221225495LL;
    }
    v22 = 0;
    for ( j = 0; j < a3->NumAllocations; ++j )
    {
      v24 = j;
      pResources = (__int64)&HandleList[v24];
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)&HandleList[v24] >= MmUserProbeAddress )
        pResources = MmUserProbeAddress;
      v19[v24] = *(_DWORD *)pResources;
    }
  }
  else
  {
    v19 = HandleList;
    v22 = 0;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7, pResources) + 408) <= 0x10u )
    {
      if ( a3->pDiscarded )
      {
        for ( k = 0LL; (unsigned int)k < a3->NumAllocations; k = (unsigned int)(k + 1) )
          a3->pDiscarded[(unsigned int)k] = 0;
      }
      if ( P != v127 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v128 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, k);
      return 0LL;
    }
    else
    {
      v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent();
      v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4240),
              Current,
              this,
              v123,
              a3,
              v19);
      if ( P != v127 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v128 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v28);
      return v29;
    }
  }
  if ( a3->pResources )
  {
    for ( m = 0; ; ++m )
    {
      v115 = m;
      if ( m >= a3->NumAllocations )
        goto LABEL_143;
      v119 = (struct DXGPAGINGQUEUE *)(4LL * m);
      v31 = *(unsigned int *)((char *)v19 + (_QWORD)v119);
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v116, v31);
      if ( !v116 )
        break;
      if ( (DXGDEVICE *)v116[1].Count != this )
      {
        v36 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v32, v116);
        v36[3].Count = (ULONG_PTR)this;
        v36[4].Count = v116[1].Count;
        WdLogEvent5_WdError(v36);
        goto LABEL_74;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v124, (struct DXGFASTMUTEX *const)&v116[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v124);
      Count = v116[3].Count;
      v39 = 0;
      if ( Count )
      {
        while ( 1 )
        {
          v40 = *(_QWORD *)(Count + 24);
          if ( !v40 )
          {
            v50 = WdLogNewEntry5_WdError(0LL, v37);
            *(_QWORD *)(v50 + 24) = Count;
            WdLogEvent5_WdError(v50);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v124);
            goto LABEL_74;
          }
          v118 = 0;
          v41 = &v118;
          if ( !a3->pDiscarded )
            v41 = 0LL;
          v42 = v123 ? *((_QWORD *)v123 + 4) : 0LL;
          v43 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 680LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                  v42,
                  v40,
                  &a3->PagingFenceValue,
                  v41);
          v46 = v43;
          if ( v43 < 0 )
            break;
          if ( v43 == 259 )
            v16 = 259;
          if ( v118 == 2 )
          {
            v39 = 2;
LABEL_78:
            m = v115;
            goto LABEL_79;
          }
          if ( v118 == 1 )
            v39 = 1;
          Count = *(_QWORD *)(Count + 64);
          if ( !Count )
            goto LABEL_78;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v37, v45);
        v47[3] = this;
        v47[4] = Count;
        v47[5] = v46;
        WdLogEvent5_WdWarning(v47);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v124);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v116, v48);
        if ( P != v127 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v128 = 0;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v49);
        return (unsigned int)v46;
      }
LABEL_79:
      pDiscarded = a3->pDiscarded;
      if ( pDiscarded )
      {
        if ( v113 )
        {
          v53 = (_DWORD *)((char *)v119 + (_QWORD)pDiscarded);
          if ( (struct DXGPAGINGQUEUE *)((char *)v119 + (_QWORD)pDiscarded) >= (struct DXGPAGINGQUEUE *)MmUserProbeAddress )
            v53 = (_DWORD *)MmUserProbeAddress;
          *v53 = v39;
        }
        else
        {
          *(_DWORD *)((char *)v119 + (_QWORD)pDiscarded) = v39;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v124);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v116, v54);
      v19 = v121;
    }
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, 0LL, v33);
    v34[3] = this;
    v34[4] = v31;
    v34[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
LABEL_74:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v116, v35);
    if ( P != v127 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v115 = v22;
    if ( v22 >= a3->NumAllocations )
    {
LABEL_143:
      v91 = P;
      if ( P != v127 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v128 = 0;
      if ( v6 )
        ExReleaseRundownProtection(v6 + 11);
      if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v91, pResources) + 311) )
        return v16;
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v95 = WdLogNewEntry5_WdAssertion(v93, v92);
        *(_QWORD *)(v95 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v95);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v93, v92);
      CurrentProcess = PsGetCurrentProcess(v98, v97);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      if ( !CurrentProcessSessionId )
        goto LABEL_162;
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_162;
      if ( !ProcessDxgProcess )
        goto LABEL_162;
      v101 = *(void **)(ProcessDxgProcess + 88);
      if ( !v101 || v101 == &gDxgkWin32kEngInterface )
        goto LABEL_162;
      v102 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v105 = PsGetCurrentProcess(v104, v103),
            ProcessSessionId = PsGetProcessSessionIdEx(v105),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v102 = *ThreadWin32Thread;
      }
      if ( v102 )
      {
        ThreadProperty = *(int **)(v102 + 80);
      }
      else
      {
LABEL_162:
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !ThreadProperty )
          return v16;
        ObfDereferenceObject(ThreadProperty);
      }
      if ( ThreadProperty && ThreadProperty[8] )
      {
        v112 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v109, v108);
        v112[3] = 275LL;
        v112[4] = 38LL;
        v112[5] = ThreadProperty[8];
        v112[6] = 0LL;
        v112[7] = 0LL;
        WdLogEvent5_WdCriticalError(v112);
      }
      return v16;
    }
    v119 = (struct DXGPAGINGQUEUE *)(4LL * v22);
    v55 = *(unsigned int *)((char *)v19 + (_QWORD)v119);
    AllocationSafe = DXGPROCESS::GetAllocationSafe(
                       *((_QWORD *)this + 5),
                       (DXGALLOCATIONREFERENCE *)&v125,
                       *(const unsigned int *)((char *)v19 + (_QWORD)v119));
    if ( v6 )
      ExReleaseRundownProtection(v6 + 11);
    v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v114 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v58 = (__int64)v125;
    if ( v125 )
      ExReleaseRundownProtection(v125 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v58, v56) + 311) )
    {
      v62 = KeGetCurrentThread();
      if ( !v62 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v60, v59);
        *(_QWORD *)(v63 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v63);
      }
      v64 = PsGetCurrentProcessSessionId(v60, v59);
      v67 = PsGetCurrentProcess(v66, v65);
      v68 = PsGetProcessDxgProcess(v67);
      if ( !v64 )
        goto LABEL_105;
      if ( (unsigned int)PsGetThreadSessionId(v62) != v64 )
        goto LABEL_105;
      if ( !v68 )
        goto LABEL_105;
      v69 = *(void **)(v68 + 88);
      if ( !v69 || v69 == &gDxgkWin32kEngInterface )
        goto LABEL_105;
      v70 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v73 = PsGetCurrentProcess(v72, v71),
            v74 = PsGetProcessSessionIdEx(v73),
            v75 = PsGetCurrentThreadProcess(),
            v74 == (unsigned int)PsGetProcessSessionIdEx(v75)) )
      {
        v76 = (__int64 *)PsGetThreadWin32Thread(v62);
        if ( v76 )
          v70 = *v76;
      }
      if ( v70 )
      {
        DxgThread = *(int **)(v70 + 80);
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
          v6 = v114;
          v22 = v115;
          goto LABEL_113;
        }
        ObfDereferenceObject(DxgThread);
      }
      if ( DxgThread && DxgThread[8] )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v59);
        v78[3] = 275LL;
        v78[4] = 38LL;
        v78[5] = DxgThread[8];
        v78[6] = 0LL;
        v78[7] = 0LL;
        WdLogEvent5_WdCriticalError(v78);
        v6 = v114;
        v22 = v115;
        goto LABEL_113;
      }
      goto LABEL_112;
    }
LABEL_113:
    if ( !v6 )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61);
      v79[3] = this;
      v79[4] = v55;
      v79[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v79);
      goto LABEL_120;
    }
    if ( (DXGDEVICE *)v6[1].Count != this )
    {
      v80 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v80 + 24) = this;
      *(struct _EX_RUNDOWN_REF *)(v80 + 32) = v6[1];
      goto LABEL_119;
    }
    v81 = v6[3].Count;
    if ( !v81 )
      break;
    v117 = 0;
    v82 = &v117;
    if ( !a3->pDiscarded )
      v82 = 0LL;
    if ( v123 )
      v83 = *((_QWORD *)v123 + 4);
    else
      v83 = 0LL;
    v84 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, BOOL *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                              + 8LL)
                                                                                  + 680LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            v83,
            v81,
            &a3->PagingFenceValue,
            v82);
    v87 = v84;
    if ( v84 < 0 )
    {
      v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, pResources, v86);
      v88[3] = this;
      v88[4] = v6;
      v88[5] = v87;
      WdLogEvent5_WdWarning(v88);
      if ( P != v127 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v128 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v89);
      return (unsigned int)v87;
    }
    if ( v84 == 259 )
      v16 = 259;
    v90 = a3->pDiscarded;
    if ( v90 )
    {
      if ( v113 )
      {
        pResources = (__int64)v119 + (_QWORD)v90;
        if ( (struct DXGPAGINGQUEUE *)((char *)v119 + (_QWORD)v90) >= (struct DXGPAGINGQUEUE *)MmUserProbeAddress )
          pResources = MmUserProbeAddress;
        *(_DWORD *)pResources = v117;
      }
      else
      {
        pResources = (__int64)v119;
        *(BOOL *)((char *)v90 + (_QWORD)v119) = v117;
      }
    }
    ++v22;
    v19 = v121;
  }
  v80 = WdLogNewEntry5_WdError(v60, v59);
  *(_QWORD *)(v80 + 24) = v6;
LABEL_119:
  WdLogEvent5_WdError(v80);
LABEL_120:
  if ( P != v127 && P )
    ExFreePoolWithTag(P, 0);
LABEL_77:
  P = 0LL;
  v128 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v114, v51);
  return 3221225485LL;
}
