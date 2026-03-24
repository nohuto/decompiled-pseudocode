/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C0228954
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C022A840 (DxgkSetAllocationPriority.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E1B0 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025D70 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C024B5B8 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2, char a3)
{
  __int64 hResource; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _EX_RUNDOWN_REF *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  UINT *pPriorities; // rdx
  UINT v16; // esi
  __int64 v17; // rcx
  ULONG_PTR i; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 j; // rsi
  unsigned int *v23; // rdx
  unsigned int v24; // r14d
  const UINT *v25; // rdx
  UINT v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  ULONG_PTR Count; // rdx
  __int64 v34; // rdx
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+78h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  if ( (_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      v8 = WdLogNewEntry5_WdWarning(this, a2, hResource);
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v8);
    }
    else
    {
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v36, hResource);
      v11 = v36;
      if ( v36 )
      {
        if ( (DXGDEVICE *)v36[1].Count == this )
        {
          if ( a3 )
          {
            pPriorities = (UINT *)a2->pPriorities;
            if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
              pPriorities = (UINT *)MmUserProbeAddress;
            v16 = *pPriorities;
            v11 = v36;
          }
          else
          {
            v16 = *a2->pPriorities;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)&v11[10], 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
          for ( i = v36[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v36, v20);
              return 0LL;
            }
            v19 = *(_QWORD *)(i + 24);
            if ( !v19 )
              break;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                        + 8LL)
                                                            + 208LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              v19,
              v16);
          }
          v21 = WdLogNewEntry5_WdError(v17, 0LL);
          *(_QWORD *)(v21 + 24) = i;
          WdLogEvent5_WdError(v21);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
        }
        else
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v36);
          v14[3] = this;
          v14[4] = v36;
          v14[5] = -1073741811LL;
          WdLogEvent5_WdError(v14);
        }
      }
      else
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0LL, v10);
        v12[3] = this;
        v12[4] = a2->hResource;
        v12[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v12);
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v36, v13);
    }
    return 3221225485LL;
  }
  else
  {
    if ( a2->AllocationCount )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a2->AllocationCount )
          return 0LL;
        if ( a3 )
        {
          v23 = (unsigned int *)&a2->phAllocationList[j];
          if ( (unsigned __int64)v23 >= MmUserProbeAddress )
            v23 = (unsigned int *)MmUserProbeAddress;
          v24 = *v23;
          v25 = &a2->pPriorities[j];
          if ( (unsigned __int64)v25 >= MmUserProbeAddress )
            v25 = (const UINT *)MmUserProbeAddress;
          v26 = *v25;
        }
        else
        {
          v24 = a2->phAllocationList[j];
          v26 = a2->pPriorities[j];
        }
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v36, v24);
        if ( !v36 )
          break;
        if ( (DXGDEVICE *)v36[1].Count != this )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
          v32[3] = this;
          v32[4] = v36;
          v32[5] = -1073741811LL;
          goto LABEL_39;
        }
        Count = v36[3].Count;
        if ( !Count )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v28, 0LL);
          v32[3] = v36;
LABEL_39:
          WdLogEvent5_WdError(v32);
LABEL_36:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v31);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                          + 208LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          Count,
          v26);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v34);
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v30[3] = this;
      v30[4] = v24;
      v30[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_36;
    }
    return 0LL;
  }
}
