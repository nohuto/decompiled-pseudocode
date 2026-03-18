/*
 * XREFs of IoFreeIrp @ 0x1402541B0
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030A95C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x140320B10 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036A760 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036B1A0 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140377D3C (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403C91E8 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x1404E95A0 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14050A670 (IopDeviceEjectComplete.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140599DB0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopFreeCompletionListPackets @ 0x140644218 (IopFreeCompletionListPackets.c)
 *     CmpFileFlushAndPurge @ 0x1406877D0 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140687970 (CmpGetVolumeClusterSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406BAEB0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406EA010 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406EA130 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406EA5D0 (IopUserRundown.c)
 *     WmipSendWmiIrp @ 0x14073FFEC (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x14076BDA8 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x140778C14 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14077B090 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407AC194 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407AEEC8 (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x140887E70 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140889530 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408895D0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1408AE558 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408ECE5C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1409269D0 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x140926D4C (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE4F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1402541E0 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C21B0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
