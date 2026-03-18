/*
 * XREFs of WheaLogInternalEvent @ 0x1403B78B0
 * Callers:
 *     HalpCmcLogPollingTimeoutEvent @ 0x1404B4B4C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x1404B7BC8 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x1404FD330 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1404FD410 (IoSaveBugCheckRecoveryStatus.c)
 *     IopWriteBugCheckSelEntries @ 0x1404FF74C (IopWriteBugCheckSelEntries.c)
 *     WheaReportHwError @ 0x1405B5B70 (WheaReportHwError.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405B6ED0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1405B7740 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapGenerateETWEvents @ 0x1405B7E60 (WheapGenerateETWEvents.c)
 *     WheaAddErrorSource @ 0x1407971E0 (WheaAddErrorSource.c)
 *     WheapLogInitEvent @ 0x140797428 (WheapLogInitEvent.c)
 *     WheapEtwEnableCallback @ 0x1407C0950 (WheapEtwEnableCallback.c)
 *     HalpCmcWorkerRoutine @ 0x140860E20 (HalpCmcWorkerRoutine.c)
 *     WheaRemoveErrorSource @ 0x140959900 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140959AD0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095A05C (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x14095A314 (WheapClearPoison.c)
 *     WheapLogPolicyTelemetry @ 0x14095A93C (WheapLogPolicyTelemetry.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14095AD3C (WheapPfaLogPageMonitorRemoval.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A48B0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A4B48 (HalpInitGenericErrorSourceEntryV2.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     WheaSelLogEvent @ 0x1405B8BD8 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
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
