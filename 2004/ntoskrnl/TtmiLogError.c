/*
 * XREFs of TtmiLogError @ 0x1408FF6C0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408F8840 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408F8B40 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408F8C00 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1408F8D8C (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408F8F50 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1408F91EC (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1408F92B0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1408F93CC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408F947C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408F97B0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1408F9D90 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408F9E60 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x1408FA16C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1408FA444 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1408FA808 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1408FB224 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x1408FB284 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FB50C (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FB5A0 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FB614 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FB6B0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408FB7FC (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FBA18 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FBAA4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1408FBB3C (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408FBBEC (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1408FBDA0 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FBE60 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FC104 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408FC1A0 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408FC594 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FC770 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1408FCC50 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408FCE80 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408FD070 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408FD140 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408FD208 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1408FD2B4 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FD554 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1408FD6B4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1408FD75C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1408FD870 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408FD960 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1408FDA0C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1408FDAD4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408FDB70 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408FDC2C (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408FDCD8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408FDD8C (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1408FDE48 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateEventQueue @ 0x140902028 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1409021C0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140902330 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140276C08 (_tlgCreate1Sz_char.c)
 *     PsGetProcessSessionIdEx @ 0x140347CD0 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
        (unsigned __int8 *)qword_140029DA0,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
