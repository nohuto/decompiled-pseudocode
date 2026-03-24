/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0227BB4
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C0229740 (DxgkGetAllocationPriority.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241540 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025D70 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C02483E0 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_GETALLOCATIONPRIORITY *a2, char a3)
{
  __int64 hResource; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  UINT v12; // r14d
  ULONG_PTR j; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _DWORD *pPriorities; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  UINT i; // esi
  __int64 v21; // r14
  unsigned int *v22; // rdx
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  ULONG_PTR Count; // rdx
  UINT *v34; // rdx
  struct _EX_RUNDOWN_REF *v35; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v36[64]; // [rsp+28h] [rbp-40h] BYREF
  UINT v37; // [rsp+88h] [rbp+20h] BYREF

  v37 = 0;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0LL;
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
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v35, v23);
        if ( !v35 )
          break;
        v29 = *(_QWORD *)(v35[1].Count + 16);
        v30 = (_QWORD *)*((_QWORD *)this + 2);
        v31 = v30[2];
        if ( *(_QWORD *)(v29 + 16) != v31 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v29);
          v32[3] = this;
          v32[4] = v35;
          v32[5] = -1073741811LL;
          goto LABEL_40;
        }
        Count = v35[3].Count;
        if ( !Count )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, 0LL);
          v32[3] = v35;
LABEL_40:
          WdLogEvent5_WdError(v32);
LABEL_37:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35, v28);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v30[80] + 8LL) + 1152LL))(v30[81], Count, &v37);
        if ( a3 )
        {
          v34 = &a2->pPriorities[v21];
          if ( (unsigned __int64)v34 >= MmUserProbeAddress )
            v34 = (UINT *)MmUserProbeAddress;
          *v34 = v37;
        }
        else
        {
          a2->pPriorities[v21] = v37;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35, (__int64)v34);
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      v27[3] = this;
      v27[4] = v23;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_37;
    }
    return 0LL;
  }
  if ( a2->AllocationCount || a2->phAllocationList )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2, hResource);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v35, hResource);
  if ( !v35 || (v9 = *(unsigned int *)(v35[1].Count + 436), (_DWORD)v9 != a2->hDevice) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v35, v10);
    v19[3] = this;
    v19[4] = a2->hResource;
    v19[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
LABEL_26:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v35, v16);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGFASTMUTEX *const)&v35[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  v12 = 0;
  for ( j = v35[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v14 = *(_QWORD *)(j + 24);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdError(v11, 0LL);
      *(_QWORD *)(v15 + 24) = j;
      WdLogEvent5_WdError(v15);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
      goto LABEL_26;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                    + 1152LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
      v14,
      &v37);
    if ( v12 <= v37 )
      v12 = v37;
  }
  if ( a3 )
  {
    pPriorities = a2->pPriorities;
    if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
      pPriorities = (_DWORD *)MmUserProbeAddress;
    *pPriorities = v12;
  }
  else
  {
    *a2->pPriorities = v12;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v35, v18);
  return 0LL;
}
