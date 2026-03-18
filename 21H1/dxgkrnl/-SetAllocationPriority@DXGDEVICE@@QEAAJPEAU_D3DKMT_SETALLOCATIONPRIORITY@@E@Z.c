/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02249B8
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C02268A0 (DxgkSetAllocationPriority.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024A060 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C0247460 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR i; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 j; // rsi
  unsigned int *v25; // rdx
  unsigned int v26; // r14d
  const UINT *v27; // rdx
  UINT v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  ULONG_PTR Count; // rdx
  __int64 v36; // rdx
  _BYTE v37[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+78h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
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
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v38, hResource);
      v11 = v38;
      if ( v38 )
      {
        if ( (DXGDEVICE *)v38[1].Count == this )
        {
          if ( a3 )
          {
            pPriorities = (UINT *)a2->pPriorities;
            if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
              pPriorities = (UINT *)MmUserProbeAddress;
            v16 = *pPriorities;
            v11 = v38;
          }
          else
          {
            v16 = *a2->pPriorities;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, (struct DXGFASTMUTEX *const)&v11[10], 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
          for ( i = v38[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37, v17);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38, v21);
              return 0LL;
            }
            v20 = *(_QWORD *)(i + 24);
            if ( !v20 )
              break;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                        + 8LL)
                                                            + 208LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              v20,
              v16);
          }
          v22 = WdLogNewEntry5_WdError(v18, 0LL);
          *(_QWORD *)(v22 + 24) = i;
          WdLogEvent5_WdError(v22);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37, v23);
        }
        else
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v9, v38);
          v14[3] = this;
          v14[4] = v38;
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
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38, v13);
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
          v25 = (unsigned int *)&a2->phAllocationList[j];
          if ( (unsigned __int64)v25 >= MmUserProbeAddress )
            v25 = (unsigned int *)MmUserProbeAddress;
          v26 = *v25;
          v27 = &a2->pPriorities[j];
          if ( (unsigned __int64)v27 >= MmUserProbeAddress )
            v27 = (const UINT *)MmUserProbeAddress;
          v28 = *v27;
        }
        else
        {
          v26 = a2->phAllocationList[j];
          v28 = a2->pPriorities[j];
        }
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v38, v26);
        if ( !v38 )
          break;
        if ( (DXGDEVICE *)v38[1].Count != this )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
          v34[3] = this;
          v34[4] = v38;
          v34[5] = -1073741811LL;
          goto LABEL_39;
        }
        Count = v38[3].Count;
        if ( !Count )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v30, 0LL);
          v34[3] = v38;
LABEL_39:
          WdLogEvent5_WdError(v34);
LABEL_36:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v33);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                          + 208LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          Count,
          v28);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v36);
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
      v32[3] = this;
      v32[4] = v26;
      v32[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      goto LABEL_36;
    }
    return 0LL;
  }
}
