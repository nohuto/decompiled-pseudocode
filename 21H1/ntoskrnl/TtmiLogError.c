/*
 * XREFs of TtmiLogError @ 0x1408FE3D0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408F7550 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408F7850 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408F7910 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1408F7A9C (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408F7C60 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1408F7EFC (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1408F7FC0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1408F80DC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1408F818C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1408F84C0 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1408F8AA0 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1408F8B70 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1408F9154 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1408F9518 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x1408F9F34 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x1408F9F94 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1408FA21C (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FA2B0 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FA324 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1408FA3C0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1408FA50C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FA728 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408FA7B4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1408FA84C (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1408FA8FC (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1408FAAB0 (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FAB70 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FAE14 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408FAEB0 (TtmiWriteEventToAllQueues.c)
 *     TtmpAcquireSessionById @ 0x1408FAF28 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408FB2A4 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1408FB480 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionWorker @ 0x1408FB960 (TtmpSessionWorker.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408FBB90 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408FBD80 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408FBE50 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408FBF18 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmDispatchApi @ 0x1408FBFC4 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408FC264 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1408FC3C4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1408FC46C (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1408FC580 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408FC670 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1408FC71C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1408FC7E4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1408FC880 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1408FC93C (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1408FC9E8 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1408FCA9C (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1408FCB58 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateEventQueue @ 0x140900D38 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140900ED0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x140901040 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 *     _tlgCreate1Sz_char @ 0x14033DAA4 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
    && (!dword_140D2C25C || dword_140D2C25C == a2)
    && (!dword_140D2C260 || dword_140D2C260 == a3)
    && (!dword_140D2C264 || dword_140D2C264 == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140D2C8E8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D2C8E8, 2LL) )
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
        (__int64)&dword_140D2C8E8,
        (unsigned __int8 *)qword_140029A78,
        0LL,
        0LL,
        7u,
        &v14);
    }
  }
}
