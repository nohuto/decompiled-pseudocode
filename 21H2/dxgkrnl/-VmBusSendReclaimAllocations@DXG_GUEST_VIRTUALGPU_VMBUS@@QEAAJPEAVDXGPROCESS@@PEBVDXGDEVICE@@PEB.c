/*
 * XREFs of ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C024AFEC
 * Callers:
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C0100490 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0006728 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0025E54 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct DXGPAGINGQUEUE *a4,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a5,
        const unsigned int *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  UINT NumAllocations; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int *v19; // r14
  UINT v20; // eax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  DXGAUTOPUSHLOCK *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  DXGAUTOPUSHLOCK *v28; // rcx
  UINT v29; // eax
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  BOOL *pDiscarded; // rcx
  size_t v41; // r8
  __int64 v42; // rax
  struct _MDL *v44; // [rsp+28h] [rbp-A0h]
  unsigned int v45; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+34h] [rbp-94h]
  unsigned int v47; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v48; // [rsp+40h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v49[2]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v50[24]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v51[88]; // [rsp+70h] [rbp-58h] BYREF
  UINT v53; // [rsp+E8h] [rbp+20h]
  UINT v54; // [rsp+E8h] [rbp+20h]

  LODWORD(v9) = -1073741811;
  if ( a4 )
  {
    NumAllocations = a5->NumAllocations;
    if ( NumAllocations > 0x8000 )
    {
      v10 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v10 + 24) = 8905LL;
      goto LABEL_3;
    }
    v12 = 4 * NumAllocations + 44;
    v47 = v12;
    v45 = (4 * NumAllocations + 51) & 0xFFFFFFF8;
    v46 = v12 + v45;
    v15 = (struct _EX_RUNDOWN_REF *)operator new((unsigned int)v12 + v45, 0x4B677844u, 1, (POOL_TYPE)512);
    v49[1] = v15;
    if ( !v15 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v14, v13, v16, v17);
      *(_QWORD *)(v18 + 24) = 8916LL;
      WdLogEvent5_WdLowResource(v18);
      return (unsigned int)v9;
    }
    v15->Count = 0LL;
    v15[1].Count = 0LL;
    LODWORD(v15[2].Count) = 58;
    v19 = (int *)((char *)v15 + v12);
    LODWORD(v15[3].Count) = *((_DWORD *)a3 + 110);
    LODWORD(v15[1].Count) = *((_DWORD *)a2 + 106);
    LODWORD(v15[4].Count) = a5->NumAllocations;
    HIDWORD(v15[3].Ptr) = *((_DWORD *)a4 + 7);
    BYTE5(v15[4].Ptr) = a5->pDiscarded != 0LL;
    if ( a5->pResources )
    {
      BYTE4(v15[4].Ptr) = 1;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, (struct _KTHREAD **)a2);
      v20 = 0;
      v53 = 0;
      if ( a5->NumAllocations )
      {
        while ( 1 )
        {
          v21 = v20;
          DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v48, a6[v20]);
          if ( !v48 )
            break;
          *((_DWORD *)&v15[5].Count + v21) = HIDWORD(v48[2].Ptr);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v48, v22);
          v20 = v53 + 1;
          v53 = v20;
          if ( v20 >= a5->NumAllocations )
            goto LABEL_12;
        }
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v26[3] = a3;
        v26[4] = a6[v21];
        v26[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v26);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v48, v27);
        v28 = (DXGAUTOPUSHLOCK *)v50;
LABEL_14:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v28);
LABEL_32:
        operator delete[](v15);
        return (unsigned int)v9;
      }
LABEL_12:
      v25 = (DXGAUTOPUSHLOCK *)v50;
    }
    else
    {
      BYTE4(v15[4].Ptr) = 0;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v51, (struct _KTHREAD **)a2);
      v29 = 0;
      v54 = 0;
      if ( a5->NumAllocations )
      {
        while ( 1 )
        {
          v30 = v29;
          DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v49, a6[v29]);
          if ( !v49[0] )
            break;
          *((_DWORD *)&v15[5].Count + v30) = v49[0][12].Count;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v49, v31);
          v29 = v54 + 1;
          v54 = v29;
          if ( v29 >= a5->NumAllocations )
            goto LABEL_18;
        }
        v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
        v38[3] = a3;
        v38[4] = a6[v30];
        v38[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v38);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v49, v39);
        v28 = (DXGAUTOPUSHLOCK *)v51;
        goto LABEL_14;
      }
LABEL_18:
      v25 = (DXGAUTOPUSHLOCK *)v51;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v25);
    v34 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v15, v46, v19, &v45, v44);
    v9 = v34;
    if ( v34 < 0 || v45 > v47 )
    {
      v42 = WdLogNewEntry5_WdError(v36, v35);
      *(_QWORD *)(v42 + 24) = v9;
      WdLogEvent5_WdError(v42);
      if ( (int)v9 >= 0 )
        LODWORD(v9) = -1073741823;
    }
    else
    {
      v9 = v19[2];
      if ( (int)v9 >= 0 )
      {
        pDiscarded = a5->pDiscarded;
        if ( pDiscarded )
        {
          v41 = a5->NumAllocations;
          if ( (unsigned __int64)&pDiscarded[v41] > MmUserProbeAddress || &pDiscarded[v41] <= pDiscarded )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(pDiscarded, v19 + 3, v41 * 4);
        }
        a5->PagingFenceValue = *(_QWORD *)v19;
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v36, v35);
        *(_QWORD *)(v37 + 24) = v9;
        WdLogEvent5_WdError(v37);
      }
    }
    goto LABEL_32;
  }
  v10 = WdLogNewEntry5_WdError(this, a2);
  *(_QWORD *)(v10 + 24) = 8900LL;
LABEL_3:
  WdLogEvent5_WdError(v10);
  return (unsigned int)v9;
}
