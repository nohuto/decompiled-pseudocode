/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02D6B7C
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C02D8F70 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C037B15C (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  D3DKMT_HANDLE hResource; // r8d
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v7; // esi
  ULONG_PTR j; // r15
  int v10; // eax
  _DWORD *pResidencyStatus; // rdx
  __int64 AllocationCount; // rax
  __int64 i; // r14
  __int64 v14; // r15
  unsigned int *v15; // rdx
  unsigned int v16; // r12d
  struct DXGPROCESS *v17; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v18; // eax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v19; // r8
  _BYTE v20[16]; // [rsp+50h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v21; // [rsp+98h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( hResource && a2->AllocationCount )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  v7 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4344LL),
             this[5],
             (struct DXGDEVICE *)this,
             a3,
             a2);
  if ( !hResource )
  {
    AllocationCount = a2->AllocationCount;
    if ( (_DWORD)AllocationCount )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= a2->AllocationCount )
          return 0LL;
        if ( a3 )
        {
          v14 = i;
          v15 = (unsigned int *)&a2->phAllocationList[i];
          if ( (unsigned __int64)v15 >= MmUserProbeAddress )
            v15 = (unsigned int *)MmUserProbeAddress;
          v16 = *v15;
        }
        else
        {
          v14 = i;
          v16 = a2->phAllocationList[i];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v21, v16);
        if ( !v21 )
          break;
        v17 = this[2];
        if ( *(_QWORD *)(*(_QWORD *)(v21[1].Count + 16) + 16LL) != *((_QWORD *)v17 + 2) )
        {
          WdLogSingleEntry3(2LL, this, v21, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)this,
            (__int64)v21,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_36;
        }
        v18 = (*(unsigned int (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*((_QWORD *)v17 + 81) + 8LL) + 184LL))(
                *((_QWORD *)v17 + 82),
                v21[3].Count);
        if ( a3 )
        {
          v19 = &a2->pResidencyStatus[v14];
          if ( (unsigned __int64)v19 >= MmUserProbeAddress )
            v19 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v19 = v18;
        }
        else
        {
          a2->pResidencyStatus[v14] = v18;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
      }
      WdLogSingleEntry3(3LL, this, v16, -1073741811LL);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
      return 3221225485LL;
    }
    WdLogSingleEntry3(3LL, this, AllocationCount, -1073741811LL);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v21, hResource);
  if ( !v21 )
  {
    WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v21);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v21[1].Count + 16) + 16LL) != *((_QWORD *)this[2] + 2) )
  {
    WdLogSingleEntry3(2LL, this, v21, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v21,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)&v21[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  for ( j = v21[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 81) + 8LL) + 184LL))(
            *((_QWORD *)this[2] + 82),
            *(_QWORD *)(j + 24));
    if ( v10 == 3 )
    {
      v7 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
      break;
    }
    if ( v10 == 2 )
      v7 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
  }
  if ( a3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v7;
  }
  else
  {
    *a2->pResidencyStatus = v7;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v21);
  return 0LL;
}
