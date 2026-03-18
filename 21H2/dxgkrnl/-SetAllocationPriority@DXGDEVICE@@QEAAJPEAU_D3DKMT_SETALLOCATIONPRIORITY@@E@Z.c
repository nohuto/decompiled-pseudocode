/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02D6FF0
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C02D9330 (DxgkSetAllocationPriority.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380010 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C037C3A8 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  struct _EX_RUNDOWN_REF *v8; // rdx
  UINT *pPriorities; // rdx
  UINT v10; // esi
  ULONG_PTR i; // rbx
  __int64 v12; // rdx
  UINT j; // esi
  unsigned int *v14; // rdx
  unsigned int v15; // r14d
  const UINT *v16; // rdx
  UINT v17; // r12d
  _BYTE v18[16]; // [rsp+50h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+A8h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4344LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  if ( hResource )
  {
    if ( a2->AllocationCount )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      return 3221225485LL;
    }
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v19, hResource);
    v8 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
LABEL_9:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v19);
      return 3221225485LL;
    }
    if ( (DXGDEVICE *)v19[1].Count != this )
    {
      WdLogSingleEntry3(2LL, this, v19, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
        (__int64)this,
        (__int64)v19,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_9;
    }
    if ( a3 )
    {
      pPriorities = (UINT *)a2->pPriorities;
      if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
        pPriorities = (UINT *)MmUserProbeAddress;
      v10 = *pPriorities;
      v8 = v19;
    }
    else
    {
      v10 = *a2->pPriorities;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)&v8[10], 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    for ( i = v19[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v12 = *(_QWORD *)(i + 24);
      if ( !v12 )
      {
        WdLogSingleEntry1(2LL, i);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Allocation 0x%p does not have a VidMm handle",
          i,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v19);
        return -1073741811LL;
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                      + 208LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
        v12,
        v10);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v19);
    return 0LL;
  }
  if ( !a2->AllocationCount )
    return 0LL;
  for ( j = 0; ; ++j )
  {
    if ( j >= a2->AllocationCount )
      return 0LL;
    if ( a3 )
    {
      v14 = (unsigned int *)&a2->phAllocationList[j];
      if ( (unsigned __int64)v14 >= MmUserProbeAddress )
        v14 = (unsigned int *)MmUserProbeAddress;
      v15 = *v14;
      v16 = &a2->pPriorities[j];
      if ( (unsigned __int64)v16 >= MmUserProbeAddress )
        v16 = (const UINT *)MmUserProbeAddress;
      v17 = *v16;
    }
    else
    {
      v15 = a2->phAllocationList[j];
      v17 = a2->pPriorities[j];
    }
    DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v19, v15);
    if ( !v19 )
    {
      WdLogSingleEntry3(3LL, this, v15, -1073741811LL);
LABEL_37:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
      return 3221225485LL;
    }
    if ( (DXGDEVICE *)v19[1].Count != this )
    {
      WdLogSingleEntry3(2LL, this, v19, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)this,
        (__int64)v19,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_37;
    }
    if ( !v19[3].Count )
      break;
    (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                      + 208LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      v19[3].Count,
      v17);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
  }
  WdLogSingleEntry1(2LL, v19);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Allocation 0x%p does not have a VidMm handle",
    (__int64)v19,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
  return -1073741811LL;
}
