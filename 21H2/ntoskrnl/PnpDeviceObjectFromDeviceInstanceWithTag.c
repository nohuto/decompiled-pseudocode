/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10
 * Callers:
 *     NtReplacePartitionUnit @ 0x140654720 (NtReplacePartitionUnit.c)
 *     PiQueueDeviceRequest @ 0x14065F5D4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14065FA0C (PnpQueueQueryAndRemoveEvent.c)
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PiSwGetChildPdo @ 0x1406E32E4 (PiSwGetChildPdo.c)
 *     PiQueryDeviceRelations @ 0x1406E397C (PiQueryDeviceRelations.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140748FA4 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     IopProcessSetInterfaceState @ 0x140769170 (IopProcessSetInterfaceState.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14076B030 (PnpIsDeviceInstanceEnabled.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceDepth @ 0x140773B10 (PiGetDeviceDepth.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1407754E4 (PiGetRelatedDevice.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PiControlGetSetDeviceStatus @ 0x1407793D0 (PiControlGetSetDeviceStatus.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140949470 (PiDcResetChildDeviceContainerCallback.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x140959490 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140B277F4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
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
      if ( *(_WORD *)v2 == 3 && (v5 = *(_QWORD *)(v2[39] + 40LL)) != 0 && *(_QWORD **)(v5 + 32) == v2 )
        ObfReferenceObjectWithTag(v2, a2);
      else
        v2 = 0LL;
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
