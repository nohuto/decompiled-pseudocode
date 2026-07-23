/*
 * XREFs of IoFreeIrp @ 0x14035E290
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x14023912C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x14024F4A0 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140298BE0 (IopBuildAsynchronousFsdRequest.c)
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D8E0 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036F9D0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x14037A5CC (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403CD788 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x1404EEF80 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x140510360 (IopDeviceEjectComplete.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059FBA0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     FsRtlSetKernelEaFile @ 0x1405E9140 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14061F340 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14061F460 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x14061F900 (IopUserRundown.c)
 *     IopFreeCompletionListPackets @ 0x1406AC280 (IopFreeCompletionListPackets.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1406FA368 (CmpGetVolumeClusterSize.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x140780F18 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14078D5C4 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x1407921A0 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1B54 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407C4888 (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x14088C3E0 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DAA0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088DB40 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1408B2AD8 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408F16BC (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14092B3D8 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B754 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C61D0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
