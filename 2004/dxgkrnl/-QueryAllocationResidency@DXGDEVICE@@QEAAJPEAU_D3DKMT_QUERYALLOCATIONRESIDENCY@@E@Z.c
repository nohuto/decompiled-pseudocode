/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02287A8
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C022A710 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00142F0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A18 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F7150 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C024A900 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 */

int __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  __int64 hResource; // r8
  _QWORD *v7; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v8; // esi
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  ULONG_PTR Count; // r14
  int v17; // eax
  _DWORD *pResidencyStatus; // rdx
  __int64 v19; // rdx
  UINT i; // r14d
  __int64 v21; // r15
  unsigned int *v22; // rdx
  unsigned int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  struct DXGPROCESS *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v33; // eax
  ULONG64 v34; // rdx
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v35; // r8
  _BYTE v36[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+78h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource && a2->AllocationCount )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdWarning(v7);
    return -1073741811;
  }
  v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4240LL),
             this[5],
             (struct DXGDEVICE *)this,
             a3,
             a2);
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0;
        if ( a3 )
        {
          v21 = i;
          v22 = (unsigned int *)&a2->phAllocationList[v21];
          if ( (unsigned __int64)v22 >= MmUserProbeAddress )
            v22 = (unsigned int *)MmUserProbeAddress;
          v23 = *v22;
        }
        else
        {
          v21 = i;
          v23 = a2->phAllocationList[v21];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v37, v23);
        if ( !v37 )
          break;
        v29 = *(_QWORD *)(v37[1].Count + 16);
        v30 = this[2];
        v31 = *((_QWORD *)v30 + 2);
        if ( *(_QWORD *)(v29 + 16) != v31 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v29);
          v32[3] = this;
          v32[4] = v37;
          v32[5] = -1073741811LL;
          WdLogEvent5_WdError(v32);
          goto LABEL_36;
        }
        v33 = (*(unsigned int (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*((_QWORD *)v30 + 80) + 8LL) + 184LL))(
                *((_QWORD *)v30 + 81),
                v37[3].Count);
        if ( a3 )
        {
          v35 = &a2->pResidencyStatus[v21];
          v34 = MmUserProbeAddress;
          if ( (unsigned __int64)v35 >= MmUserProbeAddress )
            v35 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v35 = v33;
        }
        else
        {
          a2->pResidencyStatus[v21] = v33;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37, v34);
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      v27[3] = this;
      v27[4] = v23;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37, v28);
      return -1073741811;
    }
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = a2->AllocationCount;
    v7[5] = -1073741811LL;
    goto LABEL_46;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v37, hResource);
  if ( !v37 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, 0LL, v11);
    v12[3] = this;
    v12[4] = a2->hResource;
    v12[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v37, v13);
    return -1073741811;
  }
  v14 = *((_QWORD *)this[2] + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v37[1].Count + 16) + 16LL) != v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v14, v37);
    v15[3] = this;
    v15[4] = v37;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_9;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGFASTMUTEX *const)&v37[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  Count = v37[3].Count;
  if ( Count )
  {
    while ( 1 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 80) + 8LL) + 184LL))(
              *((_QWORD *)this[2] + 81),
              *(_QWORD *)(Count + 24));
      if ( v17 == 3 )
        break;
      if ( v17 == 2 )
        v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
      Count = *(_QWORD *)(Count + 64);
      if ( !Count )
        goto LABEL_19;
    }
    v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
  }
LABEL_19:
  if ( a3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v8;
  }
  else
  {
    *a2->pResidencyStatus = v8;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v37, v19);
  return 0;
}
