/*
 * XREFs of ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C0248570
 * Callers:
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0227E58 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0024980 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0024AFC (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F7150 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        struct _D3DKMT_GETALLOCATIONPRIORITY *a4)
{
  int v5; // ebx
  unsigned int v6; // r13d
  __int64 v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  UINT AllocationCount; // eax
  unsigned int v14; // r12d
  __int64 v15; // rbx
  unsigned int v16; // r13d
  struct _EX_RUNDOWN_REF *v17; // rax
  int *v18; // r15
  int v19; // eax
  D3DKMT_HANDLE hResource; // r8d
  __int64 v21; // rdx
  const D3DKMT_HANDLE *phAllocationList; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  UINT *pPriorities; // rcx
  ULONG64 v26; // rdx
  __int64 v27; // rax
  struct _MDL *v28; // [rsp+28h] [rbp-80h]
  unsigned int v29; // [rsp+34h] [rbp-74h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+38h] [rbp-70h] BYREF
  struct _EX_RUNDOWN_REF *v31[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v32[88]; // [rsp+50h] [rbp-58h] BYREF

  v5 = -1073741811;
  v6 = 40;
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 408) <= 0x10u )
    return 0LL;
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v14 = 4;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_30;
      v7 = AllocationCount;
      v6 = v7 * 4 + 40;
      v14 = 4 * AllocationCount;
    }
    v15 = v6;
    v29 = (v14 + 11) & 0xFFFFFFF8;
    v16 = v29 + v6;
    v17 = (struct _EX_RUNDOWN_REF *)operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
    v8 = v17;
    v31[1] = v17;
    if ( !v17 )
    {
      v5 = -1073741801;
LABEL_31:
      v27 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v27 + 24) = v5;
      WdLogEvent5_WdWarning(v27);
      goto LABEL_32;
    }
    v18 = (int *)((char *)v17 + v15);
    v19 = *((_DWORD *)a2 + 106);
    v8->Count = 0LL;
    LODWORD(v8[1].Count) = v19;
    HIDWORD(v8[1].Ptr) = 0;
    LODWORD(v8[2].Count) = 60;
    LODWORD(v8[3].Count) = *((_DWORD *)a3 + 110);
    LODWORD(v8[4].Count) = a4->AllocationCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, (struct _KTHREAD **)a2);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v30, hResource);
      if ( !v30 )
      {
        v5 = -1073741811;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30, v21);
LABEL_13:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
        goto LABEL_30;
      }
      HIDWORD(v8[3].Ptr) = HIDWORD(v30[2].Ptr);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30, v21);
    }
    else
    {
      phAllocationList = a4->phAllocationList;
      if ( &phAllocationList[v7] < phAllocationList || (unsigned __int64)&phAllocationList[v7] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v8[5], phAllocationList, (unsigned int)(v7 * 4));
      v23 = 0LL;
      if ( a4->AllocationCount )
      {
        while ( 1 )
        {
          DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v31, *((_DWORD *)&v8[5].Count + v23));
          if ( !v31[0] )
            break;
          *((_DWORD *)&v8[5].Count + v23) = v31[0][12].Count;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v31, v24);
          v23 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v23 >= a4->AllocationCount )
            goto LABEL_21;
        }
        v5 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v31, v24);
        goto LABEL_13;
      }
    }
LABEL_21:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
    v5 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v8, v16, v18, &v29, v28);
    if ( v5 >= 0 )
    {
      if ( v14 + 4 > v29 )
      {
        v5 = -1073741811;
        goto LABEL_31;
      }
      v5 = *v18;
      if ( *v18 < 0 )
        goto LABEL_31;
      pPriorities = a4->pPriorities;
      v26 = (ULONG64)&pPriorities[v14 / 4];
      if ( v26 > MmUserProbeAddress || v26 <= (unsigned __int64)pPriorities )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pPriorities, v18 + 1, v14);
    }
  }
LABEL_30:
  if ( v5 < 0 )
    goto LABEL_31;
LABEL_32:
  operator delete[](v8);
  return (unsigned int)v5;
}
