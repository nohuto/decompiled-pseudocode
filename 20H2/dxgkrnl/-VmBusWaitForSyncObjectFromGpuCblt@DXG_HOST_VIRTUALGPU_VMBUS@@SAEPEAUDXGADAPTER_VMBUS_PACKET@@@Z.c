/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016AF0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016C18 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039C38 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D5F34 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00EA670 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011A9A8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C0273468 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpuCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  UINT v19; // r14d
  unsigned int v20; // r12d
  __int64 v21; // rcx
  D3DKMT_HANDLE v22; // r13d
  unsigned int v23; // r14d
  unsigned int v24; // edx
  int v25; // r8d
  int EntryType; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const unsigned __int64 *v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD v37[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v38; // [rsp+38h] [rbp-71h]
  __int64 v39; // [rsp+40h] [rbp-69h]
  _BYTE v40[24]; // [rsp+48h] [rbp-61h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v41; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v42[80]; // [rsp+B0h] [rbp+7h] BYREF
  int v43; // [rsp+110h] [rbp+67h] BYREF
  struct DXGCONTEXT *v44; // [rsp+118h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v45; // [rsp+120h] [rbp+77h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v42,
    (struct _KTHREAD **)(*(_QWORD *)(v1 + 0x50) + 232LL));
  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(v1 + 80) + 165LL) )
  {
    v43 = 0;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((v1 + 40) & -(__int64)(v1 != 0));
    if ( !v6 )
      goto LABEL_38;
    v44 = 0LL;
    v45 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    v10 = Current;
    if ( !Current )
    {
      v11 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v11 + 24) = PsGetCurrentProcess();
      WdLogEvent5_WdError(v11);
LABEL_6:
      v43 = -1073741811;
LABEL_36:
      HandleAsyncCommandError((_QWORD *)v1, (unsigned int)v43, 0, 3);
      goto LABEL_37;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v37, *(_DWORD *)(v6 + 24), Current, &v44, 0);
    if ( !v44 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        (DXGHWQUEUEBYHANDLE *)v40,
        *(_DWORD *)(v6 + 24),
        (struct _KTHREAD **)v10,
        &v45,
        0);
      if ( !v45 )
      {
        v14 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v14 + 24) = *(unsigned int *)(v6 + 24);
        WdLogEvent5_WdError(v14);
        v43 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v40, v15);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v37);
        goto LABEL_35;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v40, v12);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v37);
    v19 = *(_DWORD *)(v6 + 28);
    if ( v19 - 1 > 0xFFFE )
    {
      v35 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v35 + 24) = *(unsigned int *)(v6 + 28);
      WdLogEvent5_WdError(v35);
      v43 = -1073741811;
    }
    else
    {
      v20 = 12 * v19 + 40;
      if ( *(_DWORD *)(v1 + 128) < v20 )
      {
        v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v21 + 24) = v20;
LABEL_14:
        WdLogEvent5_WdWarning(v21);
        goto LABEL_6;
      }
      v22 = *(_DWORD *)(v6 + 24);
      if ( v44 )
      {
        memset(&v41, 0, sizeof(v41));
        v41.hContext = v22;
        v41.ObjectCount = v19;
        v41.ObjectHandleArray = (const D3DKMT_HANDLE *)(v6 + 8 * v19 + 40);
        if ( *(_BYTE *)(v6 + 32) )
          v41.FenceValue = *(_QWORD *)(v6 + 40);
        else
          v41.FenceValue = 0LL;
        v23 = *(_DWORD *)(v6 + 8 * v19 + 40);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v10 + 208));
        v24 = (v23 >> 6) & 0xFFFFFF;
        if ( v24 < *((_DWORD *)v10 + 64)
          && (v25 = *(_DWORD *)(*((_QWORD *)v10 + 30) + 16LL * v24 + 8),
              ((v23 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v10 + 30) + 16LL * v24 + 8) & 0x60))
          && (v25 & 0x2000) == 0
          && (v25 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((char *)v10 + 240);
        }
        else
        {
          EntryType = 0;
        }
        ExReleasePushLockSharedEx((char *)v10 + 208, 0LL);
        KeLeaveCriticalRegion();
        if ( EntryType != 8 && *(_BYTE *)(v6 + 32) )
        {
          v21 = WdLogNewEntry5_WdWarning(v28, v27, v29);
          *(_QWORD *)(v21 + 24) = 1441LL;
          goto LABEL_14;
        }
        v30 = 0LL;
        if ( !*(_BYTE *)(v6 + 32) )
          v30 = (const unsigned __int64 *)(v6 + 40);
        v31 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v41, 0, 0, v30, 0);
      }
      else
      {
        v37[0] = *(_DWORD *)(v6 + 24);
        v39 = v6 + 40;
        v37[1] = v19;
        v38 = v6 + 8 * v19 + 40;
        v31 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v37, 0LL);
      }
      v43 = v31;
      if ( v31 >= 0 )
        goto LABEL_37;
      v34 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v34 + 24) = v43;
      WdLogEvent5_WdError(v34);
    }
LABEL_35:
    if ( v43 < 0 )
      goto LABEL_36;
LABEL_37:
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)(v1 + 112), &v43, 4u);
    v4 = 1;
    goto LABEL_38;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v5 + 24) = 1386LL;
  WdLogEvent5_WdError(v5);
LABEL_38:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
  return v4;
}
