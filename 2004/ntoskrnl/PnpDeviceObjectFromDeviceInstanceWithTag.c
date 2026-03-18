/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A5D5C
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C4B30 (NtReplacePartitionUnit.c)
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiGetRelatedDevice @ 0x1406A56C4 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140706470 (PiControlGetPropertyData.c)
 *     PiGetDeviceDepth @ 0x14070B890 (PiGetDeviceDepth.c)
 *     PiQueueDeviceRequest @ 0x14071D364 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14071D534 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x140720878 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1407228B0 (PiSwCloseDevice.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14072C768 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073D14C (PnpIsDeviceInstanceEnabled.c)
 *     PiSwGetChildPdo @ 0x14075DFAC (PiSwGetChildPdo.c)
 *     PiSwIrpCleanup @ 0x1407610EC (PiSwIrpCleanup.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A0570 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B0750 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B0F7C (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A68B20 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140202510 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
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
