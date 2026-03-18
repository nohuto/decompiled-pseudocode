/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01424B0
 * Callers:
 *     DxgkOfferAllocations @ 0x1C0142010 (DxgkOfferAllocations.c)
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
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1C0245A18 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
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
  __int64 v33; // rdx
  __int64 v34; // rcx
  ULONG_PTR Count; // rdi
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r15
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v51; // rax
  int CurrentProcessSessionId; // edi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 *ThreadWin32Thread; // rax
  int *ThreadProperty; // rbx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r13
  __int64 v72; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  struct _KTHREAD *v78; // r15
  __int64 v79; // rax
  int v80; // edi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rbx
  void *v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  int v90; // ebx
  __int64 v91; // rax
  __int64 *v92; // rax
  int *DxgThread; // rbx
  _QWORD *v94; // rax
  ULONG_PTR v95; // rdx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rdi
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  struct _EX_RUNDOWN_REF *v106; // [rsp+30h] [rbp-B8h] BYREF
  struct _EX_RUNDOWN_REF *v107; // [rsp+38h] [rbp-B0h] BYREF
  const unsigned int *v108; // [rsp+40h] [rbp-A8h]
  _BYTE v109[16]; // [rsp+48h] [rbp-A0h] BYREF
  struct _EX_RUNDOWN_REF *v110; // [rsp+58h] [rbp-90h] BYREF
  PVOID P; // [rsp+60h] [rbp-88h]
  _BYTE v112[64]; // [rsp+68h] [rbp-80h] BYREF
  int v113; // [rsp+A8h] [rbp-40h]

  v4 = a3;
  v5 = (struct _D3DKMT_OFFERALLOCATIONS *)a2;
  v107 = (struct _EX_RUNDOWN_REF *)this;
  v7 = 0LL;
  v106 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v8 + 2589) )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, a2);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = 0LL;
    WdLogEvent5_WdEvent(v9);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v10);
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
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v13);
    return 3221225485LL;
  }
  if ( a2 )
    HandleList = a2;
  v108 = (const unsigned int *)HandleList;
  PoolWithTag = 0LL;
  P = 0LL;
  v113 = 0;
  if ( (unsigned int)v11 <= 0x10 )
  {
    PoolWithTag = v112;
    P = v112;
LABEL_12:
    v113 = v11;
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
    v108 = (const unsigned int *)PoolWithTag;
    if ( !PoolWithTag )
    {
      v18 = WdLogNewEntry5_WdLowResource(0LL, a2, a3, a4);
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = v5->NumAllocations;
      WdLogEvent5_WdLowResource(v18);
      if ( P != v112 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      P = 0LL;
      v113 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v19);
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
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)PoolWithTag, a2) + 380) > 0x10u )
    {
      v24 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent(v23, v22);
      v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 4208),
              Current,
              this,
              v5,
              v17);
      if ( P != v112 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v113 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v26);
      return v27;
    }
    if ( P != v112 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v113 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v22);
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
        DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v107, v30);
        if ( !v107 )
          break;
        if ( (DXGDEVICE *)v107[1].Count != this )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdError(v31, v107);
          v68[3] = this;
          v68[4] = v107;
          v68[5] = -1073741811LL;
          WdLogEvent5_WdError(v68);
LABEL_73:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v107, v47);
          if ( P != v112 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_76;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v109, (struct DXGFASTMUTEX *const)&v107[10], 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
        Count = v107[3].Count;
        if ( Count )
        {
          while ( 1 )
          {
            v36 = *(_QWORD *)(Count + 24);
            if ( !v36 )
            {
              v45 = WdLogNewEntry5_WdError(v34, 0LL);
              *(_QWORD *)(v45 + 24) = Count;
              WdLogEvent5_WdError(v45);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109, v46);
              goto LABEL_73;
            }
            v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                         + 8LL)
                                                                             + 672LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                    v36,
                    (unsigned int)v5->Priority,
                    v5->Flags.Value);
            v39 = v37;
            if ( v37 < 0 )
              break;
            Count = *(_QWORD *)(Count + 64);
            if ( !Count )
              goto LABEL_44;
          }
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v38);
          v41[3] = this;
          v41[4] = Count;
          v41[5] = v39;
          WdLogEvent5_WdWarning(v41);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109, v42);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v107, v43);
          if ( P != v112 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v113 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v44);
          return (unsigned int)v39;
        }
LABEL_44:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109, v33);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v107, v40);
        if ( ++v29 >= v5->NumAllocations )
        {
          PoolWithTag = P;
          goto LABEL_52;
        }
        v17 = v108;
      }
      v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, 0LL, v32);
      v69[3] = this;
      v69[4] = v30;
      v69[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v69);
      goto LABEL_73;
    }
    goto LABEL_52;
  }
  if ( !NumAllocations )
  {
LABEL_52:
    if ( PoolWithTag != v112 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    P = 0LL;
    v113 = 0;
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)PoolWithTag, a2) + 283) )
      return 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v51 = WdLogNewEntry5_WdAssertion(v49, v48);
      *(_QWORD *)(v51 + 24) = 496LL;
      WdLogEvent5_WdAssertion(v51);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v49);
    CurrentProcess = PsGetCurrentProcess(v54, v53);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( !CurrentProcessSessionId )
      goto LABEL_121;
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
      goto LABEL_121;
    if ( !ProcessDxgProcess )
      goto LABEL_121;
    v57 = *(void **)(ProcessDxgProcess + 88);
    if ( !v57 || v57 == &gDxgkWin32kEngInterface )
      goto LABEL_121;
    v58 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v61 = PsGetCurrentProcess(v60, v59),
          ProcessSessionId = PsGetProcessSessionIdEx(v61),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v58 = *ThreadWin32Thread;
    }
    if ( v58 )
    {
      ThreadProperty = *(int **)(v58 + 80);
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
      v105 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64);
      v105[3] = 275LL;
      v105[4] = 38LL;
      v105[5] = ThreadProperty[8];
      v105[6] = 0LL;
      v105[7] = 0LL;
      WdLogEvent5_WdCriticalError(v105);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v71 = v17[v29];
    AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v110, v17[v29]);
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    v7 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v106 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    v74 = (__int64)v110;
    if ( v110 )
      ExReleaseRundownProtection(v110 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v74, v72) + 283) )
    {
      v78 = KeGetCurrentThread();
      if ( !v78 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v76, v75);
        *(_QWORD *)(v79 + 24) = 496LL;
        WdLogEvent5_WdAssertion(v79);
      }
      v80 = PsGetCurrentProcessSessionId(v76);
      v83 = PsGetCurrentProcess(v82, v81);
      v84 = PsGetProcessDxgProcess(v83);
      if ( !v80 )
        goto LABEL_96;
      if ( (unsigned int)PsGetThreadSessionId(v78) != v80 )
        goto LABEL_96;
      if ( !v84 )
        goto LABEL_96;
      v85 = *(void **)(v84 + 88);
      if ( !v85 || v85 == &gDxgkWin32kEngInterface )
        goto LABEL_96;
      v86 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v89 = PsGetCurrentProcess(v88, v87),
            v90 = PsGetProcessSessionIdEx(v89),
            v91 = PsGetCurrentThreadProcess(),
            v90 == (unsigned int)PsGetProcessSessionIdEx(v91)) )
      {
        v92 = (__int64 *)PsGetThreadWin32Thread(v78);
        if ( v92 )
          v86 = *v92;
      }
      if ( v86 )
      {
        DxgThread = *(int **)(v86 + 80);
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
        v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75);
        v94[3] = 275LL;
        v94[4] = 38LL;
        v94[5] = DxgThread[8];
        v94[6] = 0LL;
        v94[7] = 0LL;
        WdLogEvent5_WdCriticalError(v94);
      }
LABEL_103:
      v7 = v106;
    }
    if ( !v7 )
      break;
    if ( (DXGDEVICE *)v7[1].Count != this )
    {
      v103 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
      v103[3] = this;
      v103[4] = v7;
      v103[5] = -1073741811LL;
      WdLogEvent5_WdError(v103);
      goto LABEL_117;
    }
    v95 = v7[3].Count;
    if ( !v95 )
    {
      v102 = WdLogNewEntry5_WdError(v76, 0LL);
      *(_QWORD *)(v102 + 24) = v7;
      WdLogEvent5_WdError(v102);
      goto LABEL_117;
    }
    v96 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 640LL)
                                                                                   + 8LL)
                                                                       + 672LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            v95,
            (unsigned int)v5->Priority,
            v5->Flags.Value);
    v99 = v96;
    if ( v96 < 0 )
    {
      v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v97, a2, v98);
      v100[3] = this;
      v100[4] = v7;
      v100[5] = v99;
      WdLogEvent5_WdWarning(v100);
      if ( P != v112 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v113 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v101);
      return (unsigned int)v99;
    }
    ++v29;
    v17 = v108;
    if ( v29 >= v5->NumAllocations )
    {
      PoolWithTag = P;
      goto LABEL_52;
    }
  }
  v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, v75, v77);
  v104[3] = this;
  v104[4] = v71;
  v104[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v104);
LABEL_117:
  if ( P != v112 && P )
    ExFreePoolWithTag(P, 0);
LABEL_76:
  P = 0LL;
  v113 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v106, v70);
  return 3221225485LL;
}
