/*
 * XREFs of IoFreeIrp @ 0x140353540
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402043D0 (IoRemoveIoCompletion.c)
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402BAF1C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x1402D1010 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1402E7890 (IopBuildAsynchronousFsdRequest.c)
 *     IopDropIrp @ 0x1402E9444 (IopDropIrp.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D730 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036F820 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x14037AA7C (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403CD618 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x1404EED40 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140510120 (IopDeviceEjectComplete.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059F970 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C0430 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406C0550 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406C09F0 (IopUserRundown.c)
 *     IopFreeCompletionListPackets @ 0x1406D4FA0 (IopFreeCompletionListPackets.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14071DDD8 (CmpGetVolumeClusterSize.c)
 *     WmipSendWmiIrp @ 0x14075751C (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x140780D58 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14078D404 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140790BF0 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1634 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407C4368 (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D940 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088D9E0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IoCancelFileOpen @ 0x140893620 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1408B2978 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408F155C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14092B278 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B5F4 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140353570 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C51D0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
