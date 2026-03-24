/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250A30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017290 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00173B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040624 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00EBF10 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011E138 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02746F8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  UINT v25; // esi
  unsigned int v26; // r12d
  __int64 v27; // rcx
  D3DKMT_HANDLE v28; // r13d
  unsigned int v29; // esi
  __int64 v30; // rdx
  int v31; // r8d
  int EntryType; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const unsigned __int64 *v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  _DWORD v42[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v43; // [rsp+38h] [rbp-61h]
  __int64 v44; // [rsp+40h] [rbp-59h]
  _BYTE v45[16]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v46[8]; // [rsp+58h] [rbp-41h] BYREF
  DXGPUSHLOCK *v47; // [rsp+60h] [rbp-39h]
  int v48; // [rsp+68h] [rbp-31h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v49; // [rsp+70h] [rbp-29h] BYREF
  int v50; // [rsp+100h] [rbp+67h] BYREF
  struct DXGCONTEXT *v51; // [rsp+108h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v52; // [rsp+110h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v47);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v48 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v50 = 0;
    v9 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v9 )
      goto LABEL_37;
    v51 = 0LL;
    v52 = 0LL;
    Current = DXGPROCESS::GetCurrent(v8, v7);
    v13 = Current;
    if ( !Current )
    {
      v14 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15);
      v17 = v14;
LABEL_34:
      WdLogEvent5_WdError(v17);
      goto LABEL_35;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42, *(_DWORD *)(v9 + 24), Current, &v51, 0);
    if ( !v51 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        (DXGHWQUEUEBYHANDLE *)v45,
        *(_DWORD *)(v9 + 24),
        (struct _KTHREAD **)v13,
        &v52,
        0);
      if ( !v52 )
      {
        v20 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v20 + 24) = *(unsigned int *)(v9 + 24);
        WdLogEvent5_WdError(v20);
        v50 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v45, v21);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42);
LABEL_36:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v50, 4u);
        v5 = 1;
        goto LABEL_37;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v45, v18);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42);
    v25 = *(_DWORD *)(v9 + 28);
    if ( v25 - 1 > 0xFFFE )
    {
      v17 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(v9 + 28);
      goto LABEL_34;
    }
    v26 = 12 * v25 + 40;
    if ( *((_DWORD *)a1 + 22) < v26 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v27 + 24) = v26;
LABEL_13:
      WdLogEvent5_WdWarning(v27);
LABEL_35:
      v50 = -1073741811;
      goto LABEL_36;
    }
    v28 = *(_DWORD *)(v9 + 24);
    if ( v51 )
    {
      memset(&v49, 0, sizeof(v49));
      v49.hContext = v28;
      v49.ObjectCount = v25;
      v49.ObjectHandleArray = (const D3DKMT_HANDLE *)(v9 + 8 * v25 + 40);
      if ( *(_BYTE *)(v9 + 32) )
        v49.FenceValue = *(_QWORD *)(v9 + 40);
      else
        v49.FenceValue = 0LL;
      v29 = *(_DWORD *)(v9 + 8 * v25 + 40);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v13 + 208));
      v30 = (v29 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v30 < *((_DWORD *)v13 + 64)
        && (v31 = *(_DWORD *)(*((_QWORD *)v13 + 30) + 16LL * (unsigned int)v30 + 8),
            ((v29 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v13 + 30) + 16LL * (unsigned int)v30 + 8) & 0x60))
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)v13 + 240, v30);
      }
      else
      {
        EntryType = 0;
      }
      ExReleasePushLockSharedEx((char *)v13 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( EntryType != 8 && *(_BYTE *)(v9 + 32) )
      {
        v27 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v27 + 24) = 3816LL;
        goto LABEL_13;
      }
      v36 = 0LL;
      if ( !*(_BYTE *)(v9 + 32) )
        v36 = (const unsigned __int64 *)(v9 + 40);
      v37 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v49, 0, 0LL, v36, 0);
    }
    else
    {
      v42[0] = *(_DWORD *)(v9 + 24);
      v44 = v9 + 40;
      v42[1] = v25;
      v43 = v9 + 8 * v25 + 40;
      v37 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v42, 0LL);
    }
    v50 = v37;
    if ( v37 < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v39, v38);
      *(_QWORD *)(v40 + 24) = v50;
      WdLogEvent5_WdError(v40);
    }
    goto LABEL_36;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3760LL;
  WdLogEvent5_WdError(v6);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  return v5;
}
