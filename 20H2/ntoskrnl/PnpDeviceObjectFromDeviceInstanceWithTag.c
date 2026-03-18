/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071FA1C
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C87C0 (NtReplacePartitionUnit.c)
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetPropertyData @ 0x14071E290 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x14071F384 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiGetDeviceDepth @ 0x1407201F0 (PiGetDeviceDepth.c)
 *     PiQueueDeviceRequest @ 0x14072B200 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072B3D0 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1407309C0 (PiSwCloseDevice.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073B1E4 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14074C05C (PnpIsDeviceInstanceEnabled.c)
 *     PiSwGetChildPdo @ 0x14076C61C (PiSwGetChildPdo.c)
 *     PiSwIrpCleanup @ 0x14076F6FC (PiSwIrpCleanup.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A60A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B6280 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B6AAC (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A6F350 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x14023F6F0 (RtlLookupElementGenericTableAvl.c)
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
