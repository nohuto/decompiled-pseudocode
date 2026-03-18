/*
 * XREFs of TtmiLogError @ 0x140905314
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FE450 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FE750 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408FE810 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1408FE99C (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408FEB60 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1408FEDFC (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1408FEEC0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1408FEFDC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408FF08C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408FF3C0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1408FF9A0 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408FFA70 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x140900068 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x14090042C (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140900E4C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x140900EAC (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x140901134 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409011C8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x14090123C (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409012D8 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140901424 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x140901640 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409016CC (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140901764 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x140901814 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1409019C8 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x140901A88 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140901D2C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x140901DC8 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x140901E40 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1409021BC (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x140902398 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x140902AB0 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x140902CA0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x140902D70 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140902E38 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x140902EE4 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140903184 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1409032E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14090338C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1409034C4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409035B4 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140903660 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140903728 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1409037C4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x140903880 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14090392C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1409039E0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x140903A9C (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateEventQueue @ 0x140907C88 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140907DDC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140907F4C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x14023CD10 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(const CHAR *a1, int a2, int a3, int a4)
{
  int ProcessSessionId; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_140D2D254 || dword_140D2D254 == a2)
    && (!dword_140D2D258 || dword_140D2D258 == a3)
    && (!dword_140D2D25C || dword_140D2D25C == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140D2D8E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2D8E8, 2LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v10 = ProcessSessionId;
      v16 = 4;
      v15 = &v10;
      tlgCreate1Sz_char((__int64)v18, a1);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v11;
      v20 = v9;
      v22 = &v12;
      v25 = &v13;
      v23 = v9;
      v26 = v9;
      v11 = a2;
      v12 = a3;
      v13 = a4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D2D8E8,
        (unsigned __int8 *)byte_140029F11,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
