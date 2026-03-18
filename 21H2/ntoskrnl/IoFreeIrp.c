/*
 * XREFs of IoFreeIrp @ 0x140348610
 * Callers:
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     IopCompletePageWrite @ 0x14025A250 (IopCompletePageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402A7370 (IopCancelIrpsInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     PnpDeviceCompletionRoutine @ 0x1402DE5C0 (PnpDeviceCompletionRoutine.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     PopFreeIrp @ 0x1403A4DCC (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403DCAD0 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x140540EA0 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x1405648E0 (IopDeviceEjectComplete.c)
 *     PnpDiagnosticCompletionRoutine @ 0x140564940 (PnpDiagnosticCompletionRoutine.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1405FD170 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     DifIoFreeIrpWrapper @ 0x14060EDB0 (DifIoFreeIrpWrapper.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x14068BEAC (CmpGetVolumeClusterSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     IopFreeCompletionListPackets @ 0x1406ACB64 (IopFreeCompletionListPackets.c)
 *     WmipGetFilePDO @ 0x1406C1BD4 (WmipGetFilePDO.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E4AF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406E4C10 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406E8220 (IopUserRundown.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     WmipSendWmiIrp @ 0x1407839B4 (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x140810B00 (WmipSetTraceNotify.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x14081AB80 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopAcquireCoolingInterface @ 0x1408296B8 (PopAcquireCoolingInterface.c)
 *     PopConnectToPolicyDevice @ 0x140858D04 (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409303C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140930460 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x140958514 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x140997F58 (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x1409D57BC (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5B38 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x140A8D17C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140348640 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140A80820 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
