/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0223C18
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C02257A0 (DxgkGetAllocationPriority.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D370 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024A78 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C02442A0 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_GETALLOCATIONPRIORITY *a2, char a3)
{
  __int64 hResource; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *pPriorities; // rdx
  __int64 v12; // rcx
  UINT v13; // r14d
  ULONG_PTR j; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  UINT i; // esi
  __int64 v22; // r14
  unsigned int *v23; // rdx
  unsigned int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // rax
  ULONG_PTR Count; // rdx
  UINT *v35; // rdx
  struct _EX_RUNDOWN_REF *v36; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v37[64]; // [rsp+28h] [rbp-40h] BYREF
  UINT v38; // [rsp+88h] [rbp+20h] BYREF

  v38 = 0;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4208LL),
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
          v22 = i;
          v23 = (unsigned int *)&a2->phAllocationList[v22];
          if ( (unsigned __int64)v23 >= MmUserProbeAddress )
            v23 = (unsigned int *)MmUserProbeAddress;
          v24 = *v23;
        }
        else
        {
          v22 = i;
          v24 = a2->phAllocationList[v22];
        }
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v36, v24);
        if ( !v36 )
          break;
        v30 = *(_QWORD *)(v36[1].Count + 16);
        v31 = (_QWORD *)*((_QWORD *)this + 2);
        v32 = v31[2];
        if ( *(_QWORD *)(v30 + 16) != v32 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v32, v30);
          v33[3] = this;
          v33[4] = v36;
          v33[5] = -1073741811LL;
          goto LABEL_40;
        }
        Count = v36[3].Count;
        if ( !Count )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v32, 0LL);
          v33[3] = v36;
LABEL_40:
          WdLogEvent5_WdError(v33);
LABEL_37:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v29);
          return 3221225485LL;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v31[80] + 8LL) + 1152LL))(v31[81], Count, &v38);
        if ( a3 )
        {
          v35 = &a2->pPriorities[v22];
          if ( (unsigned __int64)v35 >= MmUserProbeAddress )
            v35 = (UINT *)MmUserProbeAddress;
          *v35 = v38;
        }
        else
        {
          a2->pPriorities[v22] = v38;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, (__int64)v35);
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v28[3] = this;
      v28[4] = v24;
      v28[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
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
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v36, hResource);
  if ( !v36 || (v9 = *(unsigned int *)(v36[1].Count + 436), (_DWORD)v9 != a2->hDevice) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v36, v10);
    v20[3] = this;
    v20[4] = a2->hResource;
    v20[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
LABEL_26:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v36, v18);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, (struct DXGFASTMUTEX *const)&v36[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  v13 = 0;
  for ( j = v36[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v15 = *(_QWORD *)(j + 24);
    if ( !v15 )
    {
      v16 = WdLogNewEntry5_WdError(v12, 0LL);
      *(_QWORD *)(v16 + 24) = j;
      WdLogEvent5_WdError(v16);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37, v17);
      goto LABEL_26;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                    + 1152LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
      v15,
      &v38);
    if ( v13 <= v38 )
      v13 = v38;
  }
  if ( a3 )
  {
    pPriorities = a2->pPriorities;
    if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
      pPriorities = (_DWORD *)MmUserProbeAddress;
    *pPriorities = v13;
  }
  else
  {
    *a2->pPriorities = v13;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v37,
    (__int64)pPriorities);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v36, v19);
  return 0LL;
}
