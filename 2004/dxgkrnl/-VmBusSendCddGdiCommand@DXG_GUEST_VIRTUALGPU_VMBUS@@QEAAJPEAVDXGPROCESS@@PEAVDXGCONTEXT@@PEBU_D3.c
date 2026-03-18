/*
 * XREFs of ?VmBusSendCddGdiCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_RENDER@@@Z @ 0x1C02463A0
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E9B60 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D3DC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddGdiCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_RENDER *a4)
{
  UINT CommandLength; // r9d
  __int64 v8; // rax
  UINT AllocationCount; // eax
  size_t v11; // rbx
  unsigned int v12; // r15d
  char *v13; // rax
  struct DXGKVMB_COMMAND_BASE *v14; // rdi
  struct _MDL *v15; // r9
  __int64 i; // r12
  D3DKMT_HANDLE hAllocation; // ebp
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v34; // [rsp+78h] [rbp+20h] BYREF

  CommandLength = a4->CommandLength;
  if ( CommandLength > 0x20000 )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = 9370LL;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount > 0x4000 )
  {
    v8 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v8 + 24) = 9375LL;
    goto LABEL_3;
  }
  v11 = 8 * AllocationCount;
  v12 = v11 + CommandLength + 56;
  v13 = (char *)operator new[](v12, 0x4B677844u, (POOL_TYPE)512);
  v14 = (struct DXGKVMB_COMMAND_BASE *)v13;
  if ( !v13 )
    return 3221225495LL;
  *((_DWORD *)v13 + 2) = 0;
  *(_QWORD *)v13 = 0LL;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 4) = 40;
  *((_DWORD *)v13 + 2) = *((_DWORD *)a2 + 106);
  *((_DWORD *)v13 + 8) = a4->AllocationCount;
  *((_DWORD *)v13 + 7) = a4->CommandLength;
  *((_QWORD *)v13 + 5) = a4->pNewCommandBuffer;
  *((_DWORD *)v13 + 12) = a4->Flags;
  *((_DWORD *)v13 + 6) = *((_DWORD *)a3 + 7);
  memmove(v13 + 56, a4->pNewAllocationList, v11);
  memmove((char *)v14 + v11 + 56, a4->pNewCommandBuffer, a4->CommandLength);
  for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
  {
    hAllocation = a4->pNewAllocationList[i].hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a2 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *((_DWORD *)a2 + 58);
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v20);
      }
      ExAcquirePushLockSharedEx((char *)a2 + 208, 0LL);
    }
    v21 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)a2 + 64) )
    {
      v22 = *((_QWORD *)a2 + 30);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
        && (v23 & 0x2000) == 0
        && (v23 & 0x1F) != 0 )
      {
        v24 = v23 & 0x1F;
        if ( (_BYTE)v24 == 5 )
        {
          v26 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v21);
          goto LABEL_22;
        }
        v25 = WdLogNewEntry5_WdError(v24, 2LL * (unsigned int)v21);
        *(_QWORD *)(v25 + 24) = 267LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v34, v26);
    ExReleasePushLockSharedEx((char *)a2 + 208, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)v14 + 2 * i + 14) = v34[12].Count;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v34, v27);
  }
  v28 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, v14, v12, v15);
  v31 = v28;
  if ( v28 < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v32 + 24) = v31;
    WdLogEvent5_WdError(v32);
  }
  operator delete[](v14);
  return (unsigned int)v31;
}
