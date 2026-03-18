/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C01CCAA0
 * Callers:
 *     DxgkReclaimAllocations @ 0x1C015AE00 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C01CC650 (DxgkReclaimAllocations2.c)
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
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C037BC74 (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        __int64 a4)
{
  struct _EX_RUNDOWN_REF *v6; // rbx
  unsigned __int64 NumAllocations; // rsi
  const unsigned int *pResources; // r14
  const unsigned int *v9; // r12
  UINT i; // ecx
  UINT j; // esi
  __int64 v12; // r13
  DXGALLOCATIONREFERENCE *AllocationSafe; // r14
  struct DXGTHREAD *DxgThread; // rax
  DXGDEVICE *Count; // r8
  ULONG_PTR v16; // r8
  BOOL *v17; // rdx
  __int64 v18; // r10
  int v19; // eax
  unsigned int v20; // r14d
  BOOL *v21; // rcx
  BOOL *v22; // rcx
  __int64 v23; // r8
  const unsigned int *v24; // rdx
  struct DXGPAGINGQUEUE *v25; // rax
  UINT v27; // r8d
  __int64 v28; // rax
  BOOL *pDiscarded; // rcx
  BOOL *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v37; // ebx
  UINT m; // edx
  __int64 k; // rax
  unsigned int v40; // esi
  PVOID v41; // rcx
  DXGDEVICE *v42; // r8
  ULONG_PTR v43; // rsi
  int v44; // r14d
  __int64 v45; // r8
  int *v46; // rdx
  __int64 v47; // r10
  int v48; // eax
  int v49; // edx
  BOOL *v50; // rax
  BOOL *v51; // rdx
  PVOID v52; // rcx
  char v53; // [rsp+50h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v54; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v55; // [rsp+60h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+68h] [rbp-F0h] BYREF
  BOOL v57; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGPAGINGQUEUE *v58; // [rsp+78h] [rbp-E0h] BYREF
  int v59; // [rsp+80h] [rbp-D8h] BYREF
  int v60; // [rsp+84h] [rbp-D4h]
  __int64 v61; // [rsp+88h] [rbp-D0h]
  DXGDEVICE *v62; // [rsp+90h] [rbp-C8h]
  UINT v63; // [rsp+98h] [rbp-C0h]
  unsigned int v64; // [rsp+9Ch] [rbp-BCh]
  struct DXGTHREAD *v65; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v66[16]; // [rsp+A8h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID P; // [rsp+C0h] [rbp-98h]
  _BYTE v69[64]; // [rsp+C8h] [rbp-90h] BYREF
  int v70; // [rsp+108h] [rbp-50h]

  v53 = a4;
  v58 = a2;
  v62 = this;
  v6 = 0LL;
  v54 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2709LL) )
  {
    if ( a3->pDiscarded )
    {
      v27 = 0;
      v63 = 0;
      while ( v27 < a3->NumAllocations )
      {
        v28 = v27;
        pDiscarded = a3->pDiscarded;
        if ( (_BYTE)a4 )
        {
          v30 = &pDiscarded[v28];
          if ( (unsigned __int64)&pDiscarded[v28] >= MmUserProbeAddress )
            v30 = (BOOL *)MmUserProbeAddress;
          *v30 = 0;
        }
        else
        {
          pDiscarded[v27] = 0;
        }
        v63 = ++v27;
      }
    }
    WdLogSingleEntry2(4LL, this, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations || (v55 = 0, pResources = a3->pResources, (pResources != 0LL) == (a3->HandleList != 0LL)) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
    return 3221225485LL;
  }
  if ( !pResources )
    pResources = a3->HandleList;
  v9 = pResources;
  P = 0LL;
  v70 = 0;
  if ( (unsigned int)NumAllocations > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 4 )
      goto LABEL_9;
    P = (PVOID)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL, a4);
  }
  else
  {
    P = v69;
    memset(v69, 0, 4 * NumAllocations);
  }
  v70 = NumAllocations;
  LOBYTE(a4) = v53;
LABEL_9:
  if ( (_BYTE)a4 )
  {
    v9 = (const unsigned int *)P;
    if ( !P )
    {
      WdLogSingleEntry2(6LL, this, a3->NumAllocations);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
        (__int64)this,
        a3->NumAllocations,
        0LL,
        0LL,
        0LL);
      P = 0LL;
      v70 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
      return 3221225495LL;
    }
    for ( i = 0; i < a3->NumAllocations; ++i )
    {
      v23 = i;
      v24 = &pResources[v23];
      if ( (unsigned __int64)&pResources[v23] >= MmUserProbeAddress )
        v24 = (const unsigned int *)MmUserProbeAddress;
      v9[v23] = *v24;
    }
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    if ( !a3->pResources )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= a3->NumAllocations )
          goto LABEL_45;
        v61 = 4LL * j;
        v12 = v9[(unsigned __int64)v61 / 4];
        AllocationSafe = DXGPROCESS::GetAllocationSafe(
                           *((_QWORD *)this + 5),
                           (DXGALLOCATIONREFERENCE *)&v67,
                           v9[(unsigned __int64)v61 / 4]);
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v54 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        if ( v67 )
          ExReleaseRundownProtection(v67 + 11);
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v65 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v65) >= 0 )
          {
            DxgThread = v65;
            if ( v65 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v65 = DxgThread) != 0LL) )
            {
              if ( *((_DWORD *)DxgThread + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            }
          }
        }
        if ( !v6 )
          break;
        Count = (DXGDEVICE *)v6[1].Count;
        if ( Count != this )
        {
          WdLogSingleEntry2(2LL, this, Count);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Mismatch between device and allocation device. Device: 0x%I64x, Allocation Device: 0x%I64x",
            (__int64)this,
            v6[1].Count,
            0LL,
            0LL,
            0LL);
          goto LABEL_127;
        }
        v16 = v6[3].Count;
        if ( !v16 )
        {
          WdLogSingleEntry1(2LL, v6);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            (__int64)v6,
            0LL,
            0LL,
            0LL,
            0LL);
          v52 = P;
          if ( P != v69 && P )
LABEL_132:
            ExFreePoolWithTag(v52, 0);
LABEL_115:
          P = 0LL;
          v70 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
          return 3221225485LL;
        }
        v57 = 0;
        v17 = &v57;
        if ( !a3->pDiscarded )
          v17 = 0LL;
        if ( v58 )
          v18 = *((_QWORD *)v58 + 4);
        else
          v18 = 0LL;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, BOOL *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                                  + 8LL)
                                                                                      + 688LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                v18,
                v16,
                &a3->PagingFenceValue,
                v17);
        v20 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v6, v19);
          if ( P != v69 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v70 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
          return v20;
        }
        if ( v19 == 259 )
          v55 = 259;
        v21 = a3->pDiscarded;
        if ( v21 )
        {
          if ( v53 )
          {
            v22 = &v21[(unsigned __int64)v61 / 4];
            if ( (unsigned __int64)v22 >= MmUserProbeAddress )
              v22 = (BOOL *)MmUserProbeAddress;
            *v22 = v57;
          }
          else
          {
            v21[(unsigned __int64)v61 / 4] = v57;
          }
        }
      }
      WdLogSingleEntry3(3LL, this, v12, -1073741811LL);
LABEL_127:
      v52 = P;
      if ( P != v69 && P )
        goto LABEL_132;
      goto LABEL_115;
    }
    for ( k = 0LL; ; k = (unsigned int)(v60 + 1) )
    {
      v60 = k;
      if ( (unsigned int)k >= a3->NumAllocations )
      {
LABEL_45:
        if ( P != v69 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v70 = 0;
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v58 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v58) >= 0 )
          {
            v25 = v58;
            if ( v58 || (v25 = DxgkThreadObjectCreateDxgThread(), (v58 = v25) != 0LL) )
            {
              if ( *((_DWORD *)v25 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v25 + 12), 0LL, 0LL);
            }
          }
        }
        return v55;
      }
      v61 = 4 * k;
      v40 = v9[k];
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v56, v40);
      if ( !v56 )
        break;
      v42 = (DXGDEVICE *)v56[1].Count;
      if ( v42 != this )
      {
        WdLogSingleEntry2(2LL, this, v42);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Mismatch between device and resource device. Device: 0x%I64x, Resource Device: 0x%I64x",
          (__int64)this,
          v56[1].Count,
          0LL,
          0LL,
          0LL);
        goto LABEL_88;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v66, (struct DXGFASTMUTEX *const)&v56[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v66);
      v43 = v56[3].Count;
      v44 = 0;
      while ( 1 )
      {
        if ( !v43 )
          goto LABEL_116;
        v45 = *(_QWORD *)(v43 + 24);
        if ( !v45 )
        {
          WdLogSingleEntry1(2LL, v43);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            v43,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v66);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
          v41 = P;
          if ( P == v69 || !P )
            goto LABEL_115;
LABEL_114:
          ExFreePoolWithTag(v41, 0);
          goto LABEL_115;
        }
        v59 = 0;
        v46 = &v59;
        if ( !a3->pDiscarded )
          v46 = 0LL;
        if ( v58 )
          v47 = *((_QWORD *)v58 + 4);
        else
          v47 = 0LL;
        v48 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL)
                                                                                               + 8LL)
                                                                                   + 688LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                v47,
                v45,
                &a3->PagingFenceValue,
                v46);
        v64 = v48;
        if ( v48 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v43, v48);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v66);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
          if ( P != v69 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v70 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
          return v64;
        }
        v49 = v55;
        if ( v48 == 259 )
          v49 = 259;
        v55 = v49;
        if ( v59 == 2 )
          break;
        if ( v59 == 1 )
          v44 = 1;
        v43 = *(_QWORD *)(v43 + 64);
      }
      v44 = 2;
LABEL_116:
      v50 = a3->pDiscarded;
      if ( v50 )
      {
        if ( v53 )
        {
          v51 = &v50[(unsigned __int64)v61 / 4];
          if ( (unsigned __int64)&v50[(unsigned __int64)v61 / 4] >= MmUserProbeAddress )
            v51 = (BOOL *)MmUserProbeAddress;
          *v51 = v44;
        }
        else
        {
          v50[(unsigned __int64)v61 / 4] = v44;
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v66);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
    }
    WdLogSingleEntry3(3LL, this, v40, -1073741811LL);
LABEL_88:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v56);
    v41 = P;
    if ( P == v69 || !P )
      goto LABEL_115;
    goto LABEL_114;
  }
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) <= 0x10u )
  {
    if ( a3->pDiscarded )
    {
      for ( m = 0; m < a3->NumAllocations; ++m )
        a3->pDiscarded[m] = 0;
    }
    if ( P != v69 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v70 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
    return 0LL;
  }
  else
  {
    v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(v32, v31, v33, v34);
    v37 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v35 + 4344),
            Current,
            this,
            v58,
            a3,
            v9);
    if ( P != v69 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v70 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v54);
    return v37;
  }
}
