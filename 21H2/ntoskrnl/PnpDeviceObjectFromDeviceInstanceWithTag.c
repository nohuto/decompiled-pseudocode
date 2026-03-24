/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406386D0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C9FF0 (NtReplacePartitionUnit.c)
 *     PiPnpRtlCmActionCallback @ 0x140635920 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetSetDeviceStatus @ 0x140639930 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x1406ADDA0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406AE154 (PiGetRelatedDevice.c)
 *     PiGetDeviceDepth @ 0x1406BD9E0 (PiGetDeviceDepth.c)
 *     PiQueueDeviceRequest @ 0x14072F218 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F3E8 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x140732BD8 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1407349F0 (PiSwCloseDevice.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E140 (IopDeviceObjectFromSymbolicName.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     IopProcessSetInterfaceState @ 0x1407490DC (IopProcessSetInterfaceState.c)
 *     PiSwIrpCleanup @ 0x14074CE88 (PiSwIrpCleanup.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752C1C (PnpIsDeviceInstanceEnabled.c)
 *     PiSwGetChildPdo @ 0x14077093C (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A3670 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B3850 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B407C (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A6C2D0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     RtlLookupElementGenericTableAvl @ 0x140264810 (RtlLookupElementGenericTableAvl.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstanceWithTag(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 )
      {
        v5 = *(_QWORD *)(v2[39] + 40LL);
        if ( !v5 || *(_QWORD **)(v5 + 32) != v2 )
          v2 = 0LL;
        if ( v2 )
          ObfReferenceObjectWithTag(v2, a2);
      }
      else
      {
        v2 = 0LL;
      }
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
