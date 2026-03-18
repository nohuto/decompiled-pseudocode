/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C4400 (NtReplacePartitionUnit.c)
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiGetDeviceDepth @ 0x1406E7960 (PiGetDeviceDepth.c)
 *     PiGetRelatedDevice @ 0x14070FFF4 (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140710F30 (PiControlGetPropertyData.c)
 *     PiQueueDeviceRequest @ 0x14071B3E4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14071B5B4 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1407238E8 (IopDeviceObjectFromSymbolicName.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073B5CC (PnpIsDeviceInstanceEnabled.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x140754680 (PiSwIrpCleanup.c)
 *     PiSwGetChildPdo @ 0x14075BACC (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14089F250 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408AF430 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408AFC5C (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A686A0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
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
