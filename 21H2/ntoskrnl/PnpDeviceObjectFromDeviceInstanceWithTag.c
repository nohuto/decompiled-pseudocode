/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405CA220 (NtReplacePartitionUnit.c)
 *     PiControlGetPropertyData @ 0x14060C640 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x14060C9F4 (PiGetRelatedDevice.c)
 *     PiGetDeviceDepth @ 0x14061CBF0 (PiGetDeviceDepth.c)
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetSetDeviceStatus @ 0x14062E740 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072F3E4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14072F5B4 (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140734BB0 (PiSwCloseDevice.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14073E300 (IopDeviceObjectFromSymbolicName.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     IopProcessSetInterfaceState @ 0x14074929C (IopProcessSetInterfaceState.c)
 *     PiSwIrpCleanup @ 0x14074D048 (PiSwIrpCleanup.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140752DDC (PnpIsDeviceInstanceEnabled.c)
 *     PiSwGetChildPdo @ 0x140770AFC (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A37D0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408B39B0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408B41DC (PiQueryDeviceRelations.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A6D2D0 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
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
