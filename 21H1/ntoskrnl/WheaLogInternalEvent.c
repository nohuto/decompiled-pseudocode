/*
 * XREFs of WheaLogInternalEvent @ 0x1403B6A80
 * Callers:
 *     HalpCmcLogPollingTimeoutEvent @ 0x1404B446C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x1404B74E8 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x1404FCCE0 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1404FCDC0 (IoSaveBugCheckRecoveryStatus.c)
 *     IopWriteBugCheckSelEntries @ 0x1404FF0FC (IopWriteBugCheckSelEntries.c)
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405B67B0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1405B7020 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapGenerateETWEvents @ 0x1405B7740 (WheapGenerateETWEvents.c)
 *     WheaAddErrorSource @ 0x140797430 (WheaAddErrorSource.c)
 *     WheapLogInitEvent @ 0x140797678 (WheapLogInitEvent.c)
 *     WheapEtwEnableCallback @ 0x1407BD7E0 (WheapEtwEnableCallback.c)
 *     HalpCmcWorkerRoutine @ 0x14085FAD0 (HalpCmcWorkerRoutine.c)
 *     WheaRemoveErrorSource @ 0x140958560 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140958730 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140958CBC (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x140958F74 (WheapClearPoison.c)
 *     WheapLogPolicyTelemetry @ 0x14095959C (WheapLogPolicyTelemetry.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14095999C (WheapPfaLogPageMonitorRemoval.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A3A70 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A3D08 (HalpInitGenericErrorSourceEntryV2.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     WheaSelLogEvent @ 0x1405B84B8 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v2; // rcx
  LONG result; // eax
  __int64 v4; // rax
  unsigned int v5; // esi
  struct _KDPC *v6; // rdi
  PKDPC BufferChainingDpc; // rax
  __int64 v8; // rax
  _QWORD InputBuffer[4]; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  char *v11; // [rsp+78h] [rbp-9h]
  __int64 v12; // [rsp+80h] [rbp-1h]
  char *v13; // [rsp+88h] [rbp+7h]
  __int64 v14; // [rsp+90h] [rbp+Fh]
  LONG *v15; // [rsp+98h] [rbp+17h]
  __int64 v16; // [rsp+A0h] [rbp+1Fh]
  char *v17; // [rsp+A8h] [rbp+27h]
  __int64 v18; // [rsp+B0h] [rbp+2Fh]
  _DWORD *v19; // [rsp+B8h] [rbp+37h]
  int v20; // [rsp+C0h] [rbp+3Fh]
  int v21; // [rsp+C4h] [rbp+43h]

  if ( WheapEventingInitialized )
  {
    v2 = Src + 6;
    result = *v2;
    if ( (*v2 & 2) != 0 )
    {
      v15 = v2;
      UserData.Ptr = (ULONGLONG)(Src + 3);
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = (char *)(Src + 4);
      v12 = 4LL;
      v13 = (char *)(Src + 5);
      v17 = (char *)(Src + 2);
      v20 = Src[2];
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v19 = Src;
      v21 = 0;
      EtwWriteEx(
        (REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceObject,
        &EVENT_WHEA_LOG_ENTRY,
        0LL,
        0,
        0LL,
        0LL,
        6u,
        &UserData);
      result = Src[6];
    }
    if ( (result & 4) != 0 )
    {
      v8 = (unsigned int)Src[2];
      InputBuffer[2] = 0LL;
      InputBuffer[3] = 15LL;
      InputBuffer[0] = Src;
      InputBuffer[1] = v8;
      NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
      result = Src[6];
    }
    if ( (result & 8) != 0 )
      return WheaSelLogEvent(Src);
  }
  else
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v4 = (unsigned int)Src[7];
      v5 = v4 + WheapDeferredEventTotalBytes + 48;
      if ( v5 < 0x1000 )
      {
        v6 = (struct _KDPC *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(&v6->ProcessorHistory, Src, v4 + 32);
        BufferChainingDpc = WheapDispatchPtr.Queue.Wcb.BufferChainingDpc;
        WheapDeferredEventTotalBytes = v5;
        if ( *(struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.BufferChainingDpc != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.CurrentIrp )
          __fastfail(3u);
        *(_QWORD *)&v6->TargetInfoAsUlong = &WheapDispatchPtr.Queue.Wcb.CurrentIrp;
        v6->DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)BufferChainingDpc;
        *(_QWORD *)&BufferChainingDpc->TargetInfoAsUlong = v6;
        WheapDispatchPtr.Queue.Wcb.BufferChainingDpc = v6;
      }
      return KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return result;
}
