/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024D29C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock2 @ 0x1C0101F70 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0102550 (DxgkUnlock2.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0150A60 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0228D10 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D240 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        struct _KTHREAD **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // edi
  char *v6; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGALLOCATION *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  struct _MDL *v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  int v32; // [rsp+28h] [rbp-28h]
  int v33; // [rsp+2Ch] [rbp-24h]
  int v34; // [rsp+30h] [rbp-20h]
  int v35; // [rsp+38h] [rbp-18h]
  int v36; // [rsp+3Ch] [rbp-14h]
  unsigned __int8 v37; // [rsp+40h] [rbp-10h]
  struct DXGALLOCATION *v38; // [rsp+98h] [rbp+48h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 208;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v6 + 6);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v13);
    }
    ExAcquirePushLockSharedEx(v6, 0LL);
  }
  v14 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)a2 + 64) )
    goto LABEL_13;
  v15 = *((_QWORD *)a2 + 30);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v17 = v16 & 0x1F;
  if ( (_BYTE)v17 != 5 )
  {
    v18 = WdLogNewEntry5_WdError(v17, 2LL * (unsigned int)v14);
    *(_QWORD *)(v18 + 24) = 316LL;
    WdLogEvent5_WdError(v18);
LABEL_13:
    v19 = 0LL;
    goto LABEL_14;
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v19);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v22 = v38;
  LODWORD(v6) = -1073741811;
  if ( !v38 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v23[3] = a4->hAllocation;
LABEL_24:
    WdLogEvent5_WdError(v23);
    goto LABEL_26;
  }
  v24 = *(_QWORD *)(*((_QWORD *)v38 + 1) + 16LL);
  v25 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(v24 + 16) != v25 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v23[3] = a3;
    v23[4] = v38;
    v23[5] = -1073741811LL;
    goto LABEL_24;
  }
  if ( !*((_DWORD *)v38 + 26)
    || _InterlockedExchangeAdd((volatile signed __int32 *)v38 + 26, 0xFFFFFFFF) != 1
    || (*((_BYTE *)v22 + 132) & 3) != 0 )
  {
    LODWORD(v6) = 0;
    goto LABEL_26;
  }
  _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
  LOBYTE(v24) = 1;
  UnlockParavirtualizedAllocationOnGuest(v38, v24);
  v26 = *((_DWORD *)a2 + 106);
  v31 = 0LL;
  v33 = 0;
  v32 = v26;
  v37 = a5;
  v34 = 24;
  v36 = *((_DWORD *)v22 + 24);
  v35 = *((_DWORD *)a3 + 110);
  v28 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)&v31, 40LL, v27);
  v6 = (char *)v28;
  if ( v28 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v29, v24);
    v23[3] = v6;
    goto LABEL_24;
  }
LABEL_26:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v38, v24);
  return (unsigned int)v6;
}
