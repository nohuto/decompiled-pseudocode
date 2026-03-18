/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C0023FC0
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0023F5C (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C005F8F0 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C02BEBA0 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C00242A8 (DpiSetDevicePowerTransitionState.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0024300 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReportDevicePoweredOn @ 0x1C0024444 (DxgkReportDevicePoweredOn.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C0024474 (DpiSendAsyncResumeAdapterRequest.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C00244F0 (DpiCancelSuspendAdapterTimer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C005F6B4 (DpiRequestDevicePowerIrp.c)
 *     DpiCancelAsyncRequest @ 0x1C005FAE8 (DpiCancelAsyncRequest.c)
 *     DpiDisableD3Requests @ 0x1C01B4784 (DpiDisableD3Requests.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  int v13; // edx
  int v14; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  WdLogSingleEntry3(9LL, a2, v3, a3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      v6,
      (unsigned int)&Dxgk_DpiRequestDevicePowerState,
      v7,
      *(_QWORD *)(v3 + 3896),
      a2,
      a3);
  if ( a2 == 1 )
  {
    if ( !a3 )
      DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4080), &LockHandle);
    WdLogSingleEntry3(9LL, *(int *)(v3 + 4144), *(int *)(v3 + 4148), 0LL);
    if ( *(_DWORD *)(v3 + 3984) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 4144) )
    {
      WdLogSingleEntry1(1LL, 4711LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v8,
            0,
            2,
            -1,
            (__int64)L"FdoContext->DeviceThreadState != StateSuspended || FdoContext->DevicePnpState == SurpriseRemoved ||"
                      " FdoContext->DevicePowerTransitionState != DevicePoweredOn",
            4711LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( a3 )
    {
      *(_DWORD *)(v3 + 4148) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    switch ( *(_DWORD *)(v3 + 4144) )
    {
      case 1:
        DpiCancelAsyncRequest(v3);
        v9 = 0LL;
        break;
      case 2:
        if ( a3 != 2 )
        {
          DpiSetDevicePowerTransitionState(v3, 0LL);
          goto LABEL_18;
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
LABEL_21:
        if ( *(_DWORD *)(v3 + 4144) != 6 )
        {
          WdLogSingleEntry3(9LL, v3, *(int *)(v3 + 4144), 2LL);
          DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3896));
        }
        goto LABEL_18;
      case 3:
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        DpiSendAsyncResumeAdapterRequest(v3);
        v9 = 7LL;
        break;
      default:
        if ( *(_DWORD *)(v3 + 4144) != 4 )
        {
          if ( *(_DWORD *)(v3 + 4144) != 5 )
          {
LABEL_17:
            if ( a3 != 2 )
              goto LABEL_18;
            goto LABEL_21;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
            McTemplateK0pqq_EtwWriteTransfer(
              *(_DWORD *)(v3 + 4144) - 4,
              (unsigned int)&EventPowerRequestDuringD3,
              v8,
              *(_QWORD *)(v3 + 3896),
              1,
              a3);
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        DpiRequestDevicePowerIrp(v3, 1LL);
        v9 = 6LL;
        break;
    }
    DpiSetDevicePowerTransitionState(v3, v9);
    goto LABEL_17;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4080), &LockHandle);
  WdLogSingleEntry3(9LL, *(int *)(v3 + 4144), *(int *)(v3 + 4148), 0LL);
  if ( a3 == 2 )
    *(_DWORD *)(v3 + 4148) = 1;
  if ( !*(_DWORD *)(v3 + 4088) && (a3 != 1 || *(_DWORD *)(v3 + 4148)) )
  {
    v10 = *(_DWORD *)(v3 + 4144);
    if ( v10 == 3 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v10 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v11 = (_QWORD *)(v3 + 3992);
      if ( !*(_QWORD *)(v3 + 3992) )
      {
        *(_DWORD *)(v3 + 4016) = 1;
        v12 = *(_QWORD **)(v3 + 3976);
        if ( *v12 != v3 + 3968 )
          __fastfail(3u);
        *(_QWORD *)(v3 + 4000) = v12;
        *v11 = v3 + 3968;
        *v12 = v11;
        *(_QWORD *)(v3 + 3976) = v11;
        KeSetEvent((PRKEVENT)(v3 + 3936), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 4144) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
LABEL_18:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
