/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C00517F4
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E4B0 (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0038894 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C0051D90 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0210180 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A358 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DxgkReportDevicePoweredOn @ 0x1C003C1C8 (DxgkReportDevicePoweredOn.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00512A0 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C0051334 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0051598 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C0051C20 (DpiSetDevicePowerTransitionState.c)
 *     DpiCancelAsyncRequest @ 0x1C00520D0 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C0052194 (DpiSendAsyncResumeAdapterRequest.c)
 *     DpiDisableD3Requests @ 0x1C016EF24 (DpiDisableD3Requests.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // r8
  __int64 v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v7, &Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 3896), v5, v4);
  if ( (_DWORD)v5 == 1 )
  {
    if ( !(_DWORD)v4 )
      DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4072), &LockHandle);
    v9 = (_QWORD *)WdLogNewEntry5_WdPower();
    v9[3] = *(int *)(v3 + 4136);
    v10 = *(int *)(v3 + 4140);
    v9[5] = 0LL;
    v9[4] = v10;
    WdLogEvent5_WdPower(v9);
    if ( *(_DWORD *)(v3 + 3976) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 4136) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v14 + 24) = 4608LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 4140) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    if ( *(_DWORD *)(v3 + 4136) == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( *(_DWORD *)(v3 + 4136) != 2 )
      {
        if ( *(_DWORD *)(v3 + 4136) == 3 )
        {
          v17 = WdLogNewEntry5_WdPower();
          *(_QWORD *)(v17 + 24) = v3;
          *(_OWORD *)(v17 + 32) = 0LL;
          WdLogEvent5_WdPower(v17);
          DpiSendAsyncResumeAdapterRequest(v3);
          v16 = 7LL;
        }
        else
        {
          if ( *(_DWORD *)(v3 + 4136) != 4 )
          {
            if ( *(_DWORD *)(v3 + 4136) != 5 )
              goto LABEL_27;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
            {
              LODWORD(v28) = v4;
              LODWORD(v27) = 1;
              McTemplateK0pqq_EtwWriteTransfer(
                (unsigned int)(*(_DWORD *)(v3 + 4136) - 4),
                &EventPowerRequestDuringD3,
                v13,
                *(_QWORD *)(v3 + 3896),
                v27,
                v28);
            }
          }
          v15 = WdLogNewEntry5_WdPower();
          *(_QWORD *)(v15 + 24) = v3;
          *(_OWORD *)(v15 + 32) = 0LL;
          WdLogEvent5_WdPower(v15);
          DpiRequestDevicePowerIrp(v3, 1);
          v16 = 6LL;
        }
LABEL_26:
        DpiSetDevicePowerTransitionState(v3, v16);
LABEL_27:
        if ( (_DWORD)v4 != 2 )
          goto LABEL_45;
        goto LABEL_28;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v18 = WdLogNewEntry5_WdPower();
        *(_QWORD *)(v18 + 24) = v3;
        *(_OWORD *)(v18 + 32) = 0LL;
        WdLogEvent5_WdPower(v18);
LABEL_28:
        if ( *(_DWORD *)(v3 + 4136) != 6 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdPower();
          v19[3] = v3;
          v19[4] = *(int *)(v3 + 4136);
          v19[5] = 2LL;
          WdLogEvent5_WdPower(v19);
          DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3896));
        }
        goto LABEL_45;
      }
    }
    v16 = 0LL;
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4072), &LockHandle);
  v20 = (_QWORD *)WdLogNewEntry5_WdPower();
  v20[3] = *(int *)(v3 + 4136);
  v21 = *(int *)(v3 + 4140);
  v20[5] = 0LL;
  v20[4] = v21;
  WdLogEvent5_WdPower(v20);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 4140) = 1;
  if ( !*(_DWORD *)(v3 + 4080) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 4140)) )
  {
    v22 = *(_DWORD *)(v3 + 4136);
    if ( v22 == 3 )
    {
      v23 = WdLogNewEntry5_WdPower();
      *(_QWORD *)(v23 + 24) = v3;
      *(_OWORD *)(v23 + 32) = 0LL;
      WdLogEvent5_WdPower(v23);
      DpiRequestDevicePowerIrp(v3, 4);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v22 )
    {
      v24 = WdLogNewEntry5_WdPower();
      *(_QWORD *)(v24 + 24) = v3;
      *(_OWORD *)(v24 + 32) = 0LL;
      WdLogEvent5_WdPower(v24);
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v25 = (_QWORD *)(v3 + 3984);
      if ( !*(_QWORD *)(v3 + 3984) )
      {
        *(_DWORD *)(v3 + 4008) = 1;
        v26 = *(_QWORD **)(v3 + 3968);
        if ( *v26 != v3 + 3960 )
          __fastfail(3u);
        *(_QWORD *)(v3 + 3992) = v26;
        *v25 = v3 + 3960;
        *v26 = v25;
        *(_QWORD *)(v3 + 3968) = v25;
        KeSetEvent((PRKEVENT)(v3 + 3928), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 4136) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
LABEL_45:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
