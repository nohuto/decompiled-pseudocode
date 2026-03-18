/*
 * XREFs of IoFreeIrp @ 0x140290A30
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x14034725C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x14035E700 (IopCompletePageWrite.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036B120 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036B270 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x140378B4C (PopFreeIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403C9FF8 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x1404E9BD0 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14050ACC0 (IopDeviceEjectComplete.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059A4A0 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopFreeCompletionListPackets @ 0x14060EFE8 (IopFreeCompletionListPackets.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x140639DF4 (CmpGetVolumeClusterSize.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14070DD60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14070DE80 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x14070E260 (IopUserRundown.c)
 *     WmipSendWmiIrp @ 0x140741B6C (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x14076E548 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x14077B024 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140783A90 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407AF2F4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A850 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A8F0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     IoCancelFileOpen @ 0x140890560 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1408AF878 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408EE14C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x140927C80 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x140927FFC (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE500 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140290A60 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C21C0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
