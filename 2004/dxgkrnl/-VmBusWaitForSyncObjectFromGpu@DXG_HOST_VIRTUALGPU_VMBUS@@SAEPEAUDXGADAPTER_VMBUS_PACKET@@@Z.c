/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016A90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016BB8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F814 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00EB700 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C0274448 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
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
  struct _KTHREAD **v13; // rsi
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
  unsigned int v26; // r15d
  __int64 v27; // rax
  D3DKMT_HANDLE v28; // r13d
  char v29; // cl
  const unsigned __int64 *v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _DWORD v36[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v37; // [rsp+38h] [rbp-61h]
  __int64 v38; // [rsp+40h] [rbp-59h]
  _BYTE v39[16]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v40[8]; // [rsp+58h] [rbp-41h] BYREF
  DXGPUSHLOCK *v41; // [rsp+60h] [rbp-39h]
  int v42; // [rsp+68h] [rbp-31h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v43; // [rsp+70h] [rbp-29h] BYREF
  int v44; // [rsp+100h] [rbp+67h] BYREF
  struct DXGCONTEXT *v45; // [rsp+108h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v46; // [rsp+110h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v41);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v42 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v44 = 0;
    v9 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v9 )
      goto LABEL_26;
    v45 = 0LL;
    v46 = 0LL;
    Current = DXGPROCESS::GetCurrent(v8, v7);
    v13 = (struct _KTHREAD **)Current;
    if ( Current )
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36, *(_DWORD *)(v9 + 24), Current, &v45, 0);
      if ( !v45 )
      {
        DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, *(_DWORD *)(v9 + 24), v13, &v46, 0);
        if ( !v46 )
        {
          v20 = WdLogNewEntry5_WdError(v19, v18);
          *(_QWORD *)(v20 + 24) = *(unsigned int *)(v9 + 24);
          WdLogEvent5_WdError(v20);
          v44 = -1073741811;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v21);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36);
LABEL_25:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v44, 4u);
          v5 = 1;
          goto LABEL_26;
        }
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v39, v18);
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v36);
      v25 = *(_DWORD *)(v9 + 28);
      if ( v25 - 1 <= 0xFFFE )
      {
        v26 = 12 * v25 + 40;
        if ( *((_DWORD *)a1 + 22) >= v26 )
        {
          v28 = *(_DWORD *)(v9 + 24);
          if ( v45 )
          {
            memset(&v43, 0, sizeof(v43));
            v29 = *(_BYTE *)(v9 + 32);
            v43.hContext = v28;
            v43.ObjectCount = v25;
            v43.ObjectHandleArray = (const D3DKMT_HANDLE *)(v9 + 8 * v25 + 40);
            if ( v29 )
              v43.FenceValue = *(_QWORD *)(v9 + 40);
            else
              v43.FenceValue = 0LL;
            v30 = 0LL;
            if ( !v29 )
              v30 = (const unsigned __int64 *)(v9 + 40);
            v31 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v43, 0, 0LL, v30, 0);
          }
          else
          {
            v36[0] = *(_DWORD *)(v9 + 24);
            v36[1] = v25;
            v37 = v9 + 8 * v25 + 40;
            v38 = v9 + 40;
            v31 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v36, 0LL);
          }
          v44 = v31;
          if ( v31 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v33, v32);
            *(_QWORD *)(v34 + 24) = v44;
            WdLogEvent5_WdError(v34);
          }
        }
        else
        {
          v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
          *(_QWORD *)(v27 + 24) = v26;
          WdLogEvent5_WdWarning(v27);
        }
        goto LABEL_25;
      }
      v17 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(v9 + 28);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15);
      v17 = v14;
    }
    WdLogEvent5_WdError(v17);
    v44 = -1073741811;
    goto LABEL_25;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 3677LL;
  WdLogEvent5_WdError(v6);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  return v5;
}
