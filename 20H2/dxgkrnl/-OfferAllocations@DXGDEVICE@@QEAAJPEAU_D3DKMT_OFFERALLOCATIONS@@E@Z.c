/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C014BFD0
 * Callers:
 *     DxgkOfferAllocations @ 0x1C014BB30 (DxgkOfferAllocations.c)
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
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1C0248C48 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  struct _D3DKMT_OFFERALLOCATIONS *v5; // r14
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 HandleList; // r15
  _BYTE *PoolWithTag; // rcx
  const unsigned int *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  UINT i; // r9d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v26; // rdx
  unsigned int v27; // ebx
  UINT NumAllocations; // eax
  UINT v29; // r12d
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  ULONG_PTR Count; // rdi
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v49; // rax
  int CurrentProcessSessionId; // edi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 *ThreadWin32Thread; // rax
  int *ThreadProperty; // rbx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r13
  __int64 v70; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  struct _KTHREAD *v76; // r15
  __int64 v77; // rax
  int v78; // edi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rbx
  void *v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rax
  __int64 *v90; // rax
  int *DxgThread; // rbx
  _QWORD *v92; // rax
  ULONG_PTR v93; // rdx
  int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rdi
  _QWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  struct _EX_RUNDOWN_REF *v104; // [rsp+30h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v105; // [rsp+38h] [rbp-B0h] BYREF
  const unsigned int *v106; // [rsp+40h] [rbp-A8h]
  _BYTE v107[16]; // [rsp+48h] [rbp-A0h] BYREF
  struct _EX_RUNDOWN_REF *v108; // [rsp+58h] [rbp-90h] BYREF
  PVOID P; // [rsp+60h] [rbp-88h]
  _BYTE v110[64]; // [rsp+68h] [rbp-80h] BYREF
  int v111; // [rsp+A8h] [rbp-40h]

  v4 = a3;
  v5 = (struct _D3DKMT_OFFERALLOCATIONS *)a2;
  v105 = (struct _EX_RUNDOWN_REF *)this;
  v7 = 0LL;
  v104 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v8 + 2613) )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, a2);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = 0LL;
    WdLogEvent5_WdEvent(v9);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v10);
    return 0LL;
  }
  v11 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v11
    || (a2 = *(_QWORD *)(a2 + 8), HandleList = (__int64)v5->HandleList, v8 = HandleList != 0, (a2 != 0) == (_DWORD)v8) )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, a2, a3);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v13);
    return 3221225485LL;
  }
  if ( a2 )
    HandleList = a2;
  v106 = (const unsigned int *)HandleList;
  PoolWithTag = 0LL;
  P = 0LL;
  v111 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v110;
    P = v110;
LABEL_12:
    v111 = v11;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4 * v11);
      PoolWithTag = P;
    }
    goto LABEL_14;
  }
  a2 = 0xFFFFFFFFFFFFFFFFuLL % v11;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 >= 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v11, 0x4B677844u);
    P = PoolWithTag;
    goto LABEL_12;
  }
LABEL_14:
  if ( v4 )
  {
    v17 = (const unsigned int *)PoolWithTag;
    v106 = (const unsigned int *)PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = WdLogNewEntry5_WdLowResource(0LL, a2, a3, a4);
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = v5->NumAllocations;
      WdLogEvent5_WdLowResource(v18);
      if ( P != v110 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      P = 0LL;
      v111 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v19);
      return 3221225495LL;
    }
    for ( i = 0; i < v5->NumAllocations; ++i )
    {
      v21 = 4LL * i;
      a2 = v21 + HandleList;
      if ( v21 + HandleList >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v17[(unsigned __int64)v21 / 4] = *(_DWORD *)a2;
      PoolWithTag = P;
    }
  }
  else
  {
    v17 = (const unsigned int *)HandleList;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)PoolWithTag, a2) + 408) > 0x10u )
    {
      v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent(v23, v22);
      v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 4240),
              Current,
              this,
              v5,
              v17);
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v111 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v26);
      return v27;
    }
    if ( P != v110 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v111 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v22);
    return 0LL;
  }
  NumAllocations = v5->NumAllocations;
  v29 = 0;
  if ( v5->pResources )
  {
    if ( NumAllocations )
    {
      while ( 1 )
      {
        v30 = v17[v29];
        DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v105, v30);
        if ( !v105 )
          break;
        if ( (DXGDEVICE *)v105[1].Count != this )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdError(v31, v105);
          v66[3] = this;
          v66[4] = v105;
          v66[5] = -1073741811LL;
          WdLogEvent5_WdError(v66);
LABEL_73:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v105, v45);
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_76;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v107, (struct DXGFASTMUTEX *const)&v105[10], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v107);
        Count = v105[3].Count;
        if ( Count )
        {
          while ( 1 )
          {
            v35 = *(_QWORD *)(Count + 24);
            if ( !v35 )
            {
              v44 = WdLogNewEntry5_WdError(v33, 0LL);
              *(_QWORD *)(v44 + 24) = Count;
              WdLogEvent5_WdError(v44);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v107);
              goto LABEL_73;
            }
            v36 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                         + 8LL)
                                                                             + 672LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                    v35,
                    (unsigned int)v5->Priority,
                    v5->Flags.Value);
            v39 = v36;
            if ( v36 < 0 )
              break;
            Count = *(_QWORD *)(Count + 64);
            if ( !Count )
              goto LABEL_44;
          }
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v37, v38);
          v41[3] = this;
          v41[4] = Count;
          v41[5] = v39;
          WdLogEvent5_WdWarning(v41);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v107);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v105, v42);
          if ( P != v110 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v111 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v43);
          return (unsigned int)v39;
        }
LABEL_44:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v107);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v105, v40);
        if ( ++v29 >= v5->NumAllocations )
        {
          PoolWithTag = P;
          goto LABEL_52;
        }
        v17 = v106;
      }
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, 0LL, v32);
      v67[3] = this;
      v67[4] = v30;
      v67[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v67);
      goto LABEL_73;
    }
    goto LABEL_52;
  }
  if ( !NumAllocations )
  {
LABEL_52:
    if ( PoolWithTag != v110 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    P = 0LL;
    v111 = 0;
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)PoolWithTag, a2) + 311) )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v49 = WdLogNewEntry5_WdAssertion(v47, v46);
      *(_QWORD *)(v49 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v49);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v47, v46);
    CurrentProcess = PsGetCurrentProcess(v52, v51);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( !CurrentProcessSessionId )
      goto LABEL_121;
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
      goto LABEL_121;
    if ( !ProcessDxgProcess )
      goto LABEL_121;
    v55 = *(void **)(ProcessDxgProcess + 88);
    if ( !v55 || v55 == &gDxgkWin32kEngInterface )
      goto LABEL_121;
    v56 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v59 = PsGetCurrentProcess(v58, v57),
          ProcessSessionId = PsGetProcessSessionIdEx(v59),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v56 = *ThreadWin32Thread;
    }
    if ( v56 )
    {
      ThreadProperty = *(int **)(v56 + 80);
    }
    else
    {
LABEL_121:
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( !ThreadProperty )
        ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        return 0LL;
      ObfDereferenceObject(ThreadProperty);
    }
    if ( ThreadProperty && ThreadProperty[8] )
    {
      v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v62);
      v103[3] = 275LL;
      v103[4] = 38LL;
      v103[5] = ThreadProperty[8];
      v103[6] = 0LL;
      v103[7] = 0LL;
      WdLogEvent5_WdCriticalError(v103);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v69 = v17[v29];
    AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v108, v17[v29]);
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    v7 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v104 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v72 = (__int64)v108;
    if ( v108 )
      ExReleaseRundownProtection(v108 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v72, v70) + 311) )
    {
      v76 = KeGetCurrentThread();
      if ( !v76 )
      {
        v77 = WdLogNewEntry5_WdAssertion(v74, v73);
        *(_QWORD *)(v77 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v77);
      }
      v78 = PsGetCurrentProcessSessionId(v74, v73);
      v81 = PsGetCurrentProcess(v80, v79);
      v82 = PsGetProcessDxgProcess(v81);
      if ( !v78 )
        goto LABEL_96;
      if ( (unsigned int)PsGetThreadSessionId(v76) != v78 )
        goto LABEL_96;
      if ( !v82 )
        goto LABEL_96;
      v83 = *(void **)(v82 + 88);
      if ( !v83 || v83 == &gDxgkWin32kEngInterface )
        goto LABEL_96;
      v84 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v87 = PsGetCurrentProcess(v86, v85),
            v88 = PsGetProcessSessionIdEx(v87),
            v89 = PsGetCurrentThreadProcess(),
            v88 == (unsigned int)PsGetProcessSessionIdEx(v89)) )
      {
        v90 = (__int64 *)PsGetThreadWin32Thread(v76);
        if ( v90 )
          v84 = *v90;
      }
      if ( v84 )
      {
        DxgThread = *(int **)(v84 + 80);
      }
      else
      {
LABEL_96:
        DxgThread = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !DxgThread )
          DxgThread = (int *)DxgkThreadObjectCreateDxgThread();
        if ( !DxgThread )
          goto LABEL_103;
        ObfDereferenceObject(DxgThread);
      }
      if ( DxgThread && DxgThread[8] )
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v74, v73);
        v92[3] = 275LL;
        v92[4] = 38LL;
        v92[5] = DxgThread[8];
        v92[6] = 0LL;
        v92[7] = 0LL;
        WdLogEvent5_WdCriticalError(v92);
      }
LABEL_103:
      v7 = v104;
    }
    if ( !v7 )
      break;
    if ( (DXGDEVICE *)v7[1].Count != this )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
      v101[3] = this;
      v101[4] = v7;
      v101[5] = -1073741811LL;
      WdLogEvent5_WdError(v101);
      goto LABEL_117;
    }
    v93 = v7[3].Count;
    if ( !v93 )
    {
      v100 = WdLogNewEntry5_WdError(v74, 0LL);
      *(_QWORD *)(v100 + 24) = v7;
      WdLogEvent5_WdError(v100);
      goto LABEL_117;
    }
    v94 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 640LL)
                                                                                   + 8LL)
                                                                       + 672LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            v93,
            (unsigned int)v5->Priority,
            v5->Flags.Value);
    v97 = v94;
    if ( v94 < 0 )
    {
      v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v95, a2, v96);
      v98[3] = this;
      v98[4] = v7;
      v98[5] = v97;
      WdLogEvent5_WdWarning(v98);
      if ( P != v110 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v111 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v99);
      return (unsigned int)v97;
    }
    ++v29;
    v17 = v106;
    if ( v29 >= v5->NumAllocations )
    {
      PoolWithTag = P;
      goto LABEL_52;
    }
  }
  v102 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, v73, v75);
  v102[3] = this;
  v102[4] = v69;
  v102[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v102);
LABEL_117:
  if ( P != v110 && P )
    ExFreePoolWithTag(P, 0);
LABEL_76:
  P = 0LL;
  v111 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v104, v68);
  return 3221225485LL;
}
