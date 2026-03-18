/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01CBF70
 * Callers:
 *     DxgkOfferAllocations @ 0x1C01CBA90 (DxgkOfferAllocations.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1C0379FF8 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_OFFERALLOCATIONS *a2,
        char a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v7; // rbx
  unsigned __int64 NumAllocations; // r14
  const unsigned int *pResources; // rsi
  const unsigned int *v10; // r12
  _BYTE *Pool2; // rcx
  __int64 i; // rcx
  const unsigned int *v13; // rdx
  __int64 j; // rsi
  __int64 v15; // r13
  DXGALLOCATIONREFERENCE *AllocationSafe; // r14
  struct DXGTHREAD *DxgThread; // rax
  ULONG_PTR Count; // rdx
  int v19; // eax
  unsigned int v20; // r14d
  struct DXGTHREAD *v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v29; // ebx
  __int64 k; // r14
  __int64 v31; // rsi
  ULONG_PTR m; // rsi
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // r13d
  PVOID v36; // rcx
  PVOID v37; // rcx
  struct _EX_RUNDOWN_REF *v38; // [rsp+50h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v39; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-88h]
  _BYTE v42[64]; // [rsp+78h] [rbp-80h] BYREF
  int v43; // [rsp+B8h] [rbp-40h]

  v38 = (struct _EX_RUNDOWN_REF *)this;
  v7 = 0LL;
  v39 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2709LL) )
  {
    WdLogSingleEntry2(4LL, this, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    return 0LL;
  }
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (pResources = a2->pResources, (pResources != 0LL) == (a2->HandleList != 0LL)) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    return 3221225485LL;
  }
  if ( !pResources )
    pResources = a2->HandleList;
  v10 = pResources;
  Pool2 = 0LL;
  P = 0LL;
  v43 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    P = v42;
    memset(v42, 0, 4 * NumAllocations);
    Pool2 = v42;
LABEL_8:
    v43 = NumAllocations;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL, a4);
    P = Pool2;
    goto LABEL_8;
  }
LABEL_9:
  if ( a3 )
  {
    v10 = (const unsigned int *)Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry2(6LL, this, a2->NumAllocations);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
        (__int64)this,
        a2->NumAllocations,
        0LL,
        0LL,
        0LL);
      if ( P != v42 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v43 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
      return 3221225495LL;
    }
    for ( i = 0LL; (unsigned int)i < a2->NumAllocations; i = (unsigned int)(i + 1) )
    {
      v13 = &pResources[i];
      if ( (unsigned __int64)v13 >= MmUserProbeAddress )
        v13 = (const unsigned int *)MmUserProbeAddress;
      v10[i] = *v13;
    }
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    if ( !a2->pResources )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a2->NumAllocations )
          goto LABEL_34;
        v15 = v10[j];
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)v40, v10[j]);
        if ( v7 )
          ExReleaseRundownProtection(v7 + 11);
        v7 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v39 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        if ( v40[0] )
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v40[0] + 88LL));
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v38 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v38) >= 0 )
          {
            DxgThread = (struct DXGTHREAD *)v38;
            if ( v38
              || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v38 = (struct _EX_RUNDOWN_REF *)DxgThread) != 0LL) )
            {
              if ( *((_DWORD *)DxgThread + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            }
          }
        }
        if ( !v7 )
          break;
        if ( (DXGDEVICE *)v7[1].Count != this )
        {
          WdLogSingleEntry3(2LL, this, v7, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%I64x: Allocation 0x%p does not belong to the provided adapter, returning 0x%I64x",
            (__int64)this,
            (__int64)v7,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_92;
        }
        Count = v7[3].Count;
        if ( !Count )
        {
          WdLogSingleEntry1(2LL, v7);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            (__int64)v7,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_92:
          v37 = P;
          if ( P == v42 || !P )
          {
LABEL_83:
            P = 0LL;
            v43 = 0;
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
            return 3221225485LL;
          }
LABEL_97:
          ExFreePoolWithTag(v37, 0);
          goto LABEL_83;
        }
        v19 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                       + 8LL)
                                                                           + 680LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                Count,
                (unsigned int)a2->Priority,
                a2->Flags.Value);
        v20 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v7, v19);
          if ( P != v42 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v43 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
          return v20;
        }
      }
      WdLogSingleEntry3(3LL, this, v15, -1073741811LL);
      v37 = P;
      if ( P == v42 || !P )
        goto LABEL_83;
      goto LABEL_97;
    }
    for ( k = 0LL; (unsigned int)k < a2->NumAllocations; k = (unsigned int)(k + 1) )
    {
      v31 = v10[k];
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v38, v10[k]);
      if ( !v38 )
      {
        WdLogSingleEntry3(3LL, this, v31, -1073741811LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38);
        v36 = P;
        if ( P == v42 || !P )
          goto LABEL_83;
        goto LABEL_82;
      }
      if ( (DXGDEVICE *)v38[1].Count != this )
      {
        WdLogSingleEntry3(2LL, this, v38, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: Resource 0x%p does not belong to the provided adapter, returning 0x%I64x",
          (__int64)this,
          (__int64)v38,
          -1073741811LL,
          0LL,
          0LL);
LABEL_77:
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38);
        v36 = P;
        if ( P == v42 || !P )
          goto LABEL_83;
LABEL_82:
        ExFreePoolWithTag(v36, 0);
        goto LABEL_83;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGFASTMUTEX *const)&v38[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
      for ( m = v38[3].Count; m; m = *(_QWORD *)(m + 64) )
      {
        v33 = *(_QWORD *)(m + 24);
        if ( !v33 )
        {
          WdLogSingleEntry1(2LL, m);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            m,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
          goto LABEL_77;
        }
        v34 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 648LL)
                                                                                     + 8LL)
                                                                         + 680LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                v33,
                (unsigned int)a2->Priority,
                a2->Flags.Value);
        v35 = v34;
        if ( v34 < 0 )
        {
          WdLogSingleEntry3(3LL, this, m, v34);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38);
          if ( P != v42 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v43 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
          return v35;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38);
    }
LABEL_34:
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
    {
      v38 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v38) >= 0 )
      {
        v21 = (struct DXGTHREAD *)v38;
        if ( v38 || (v21 = DxgkThreadObjectCreateDxgThread(), (v38 = (struct _EX_RUNDOWN_REF *)v21) != 0LL) )
        {
          if ( *((_DWORD *)v21 + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v21 + 12), 0LL, 0LL);
        }
      }
    }
    return 0LL;
  }
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) <= 0x10u )
  {
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    return 0LL;
  }
  v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  Current = DXGPROCESS::GetCurrent(v24, v23, v25, v26);
  v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4344),
          Current,
          this,
          a2,
          v10);
  if ( P != v42 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v43 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
  return v29;
}
