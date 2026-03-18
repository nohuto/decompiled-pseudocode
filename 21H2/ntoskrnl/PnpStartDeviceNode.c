/*
 * XREFs of PnpStartDeviceNode @ 0x140749C4C
 * Callers:
 *     PipProcessStartPhase1 @ 0x1407491FC (PipProcessStartPhase1.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14095B2D4 (PipProcessRestartPhase1.c)
 * Callees:
 *     PipUpdatePostStartCharacteristics @ 0x14025A078 (PipUpdatePostStartCharacteristics.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PnpTraceStartDevice @ 0x1402D2080 (PnpTraceStartDevice.c)
 *     PnpStartDevice @ 0x1402D2478 (PnpStartDevice.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1402D26E0 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpDiagnosticTraceObject @ 0x1402D2774 (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1402D2A14 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1402DE33C (PpMarkDeviceStackExtensionFlag.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PiSwProcessParentStartIrp @ 0x1406E4E14 (PiSwProcessParentStartIrp.c)
 *     IopGetSessionIdFromPDO @ 0x140749588 (IopGetSessionIdFromPDO.c)
 *     PnpDeviceCompletionRequestCreate @ 0x14074D338 (PnpDeviceCompletionRequestCreate.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC (PnpDeviceCompletionProcessCompletedRequest.c)
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
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(struct _DEVICE_OBJECT **)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || (_DWORD)InitSafeBootMode
    || (v6 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, (unsigned int)(v5 + 776), 0LL)) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    v12 = 0LL;
    v14 = -1073741823;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (int)PnpDiagnosticCompletionRoutine, (__int64)&v12);
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
    PipSetDevNodeState(a1, v5 + 776);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    PipSetDevNodeState(a1, 775);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v7, v6);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (int)PnpDeviceCompletionRoutine, (__int64)v6);
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
