/*
 * XREFs of PnpStartDeviceNode @ 0x14073E0C4
 * Callers:
 *     PipProcessStartPhase1 @ 0x14073E02C (PipProcessStartPhase1.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1408B53CC (PipProcessRestartPhase1.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14036F394 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpStartDevice @ 0x14036F404 (PnpStartDevice.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14036FDD8 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14037003C (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpTraceStartDevice @ 0x14037BDF0 (PnpTraceStartDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x14037E97C (PipUpdatePostStartCharacteristics.c)
 *     IopGetSessionIdFromPDO @ 0x14073E41C (IopGetSessionIdFromPDO.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140746CB0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeviceCompletionRequestCreate @ 0x14074716C (PnpDeviceCompletionRequestCreate.c)
 *     PiSwProcessParentStartIrp @ 0x14076DF48 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  int v5; // ebp
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int started; // edi
  __int64 v11; // r8
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+74h] [rbp-14h]

  v15 = 0;
  memset(&Event, 0, sizeof(Event));
  v5 = a2 != 0 ? 5 : 0;
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || InitSafeBootMode
    || (v6 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, (unsigned int)(v5 + 774))) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    v12 = 0LL;
    v14 = -1073741823;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)&v12);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      started = v14;
    }
    if ( started >= 0 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(a1 + 32));
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v11 = v12;
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, (unsigned int)started, v11);
    PipSetDevNodeState(a1, v5 + 774);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    PipSetDevNodeState(a1, 773);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v7, v6);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v6);
    if ( started == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Pend, (unsigned __int16 *)(a1 + 40));
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v8, v6);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest(v6);
    }
  }
  return (unsigned int)started;
}
