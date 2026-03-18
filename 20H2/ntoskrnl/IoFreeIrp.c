/*
 * XREFs of IoFreeIrp @ 0x140218F40
 * Callers:
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140318510 (IopBuildAsynchronousFsdRequest.c)
 *     IopCancelIrpsInFileObjectList @ 0x14031892C (IopCancelIrpsInFileObjectList.c)
 *     IopCompletePageWrite @ 0x14032F060 (IopCompletePageWrite.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14036D100 (PnpDiagnosticCompletionRoutine.c)
 *     PnpDeviceCompletionRoutine @ 0x14036D250 (PnpDeviceCompletionRoutine.c)
 *     PopFreeIrp @ 0x14037A87C (PopFreeIrp.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 *     PopFxDestroyDeviceDpm @ 0x1403CCC38 (PopFxDestroyDeviceDpm.c)
 *     FsRtlGetFileExtents @ 0x1404ED460 (FsRtlGetFileExtents.c)
 *     IopDeviceEjectComplete @ 0x14050E5F0 (IopDeviceEjectComplete.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14059DF40 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     CmpFileFlushAndPurge @ 0x1405DCDAC (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1405DCF4C (CmpGetVolumeClusterSize.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406B4340 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     IopFreeCompletionListPackets @ 0x1406B7124 (IopFreeCompletionListPackets.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E01B0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406E02D0 (FsRtlMdlReadEx.c)
 *     IopUserRundown @ 0x1406E0650 (IopUserRundown.c)
 *     WmipSendWmiIrp @ 0x14075074C (WmipSendWmiIrp.c)
 *     WmipSetTraceNotify @ 0x14077CF78 (WmipSetTraceNotify.c)
 *     WmipGetFilePDO @ 0x140789624 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140791480 (PopAcquireCoolingInterface.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407BD234 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopConnectToPolicyDevice @ 0x1407BFFF4 (PopConnectToPolicyDevice.c)
 *     FsRtlQueryInformationFile @ 0x14088ECE0 (FsRtlQueryInformationFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408903A0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140890440 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     IoCancelFileOpen @ 0x140896050 (IoCancelFileOpen.c)
 *     IopCancelPendingEject @ 0x1408B53A8 (IopCancelPendingEject.c)
 *     PopPolicyDeviceRemove @ 0x1408F3D5C (PopPolicyDeviceRemove.c)
 *     SmKmFileInfoCleanup @ 0x14092DAA8 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x14092DE24 (SmKmIsVolumeIoPossible.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D4520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x140218F70 (IopFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1409C81E0 (IovFreeIrpPrivate.c)
 */

void __stdcall IoFreeIrp(PIRP Irp)
{
  if ( IopDispatchFreeIrp )
    IovFreeIrpPrivate((ULONG_PTR)Irp);
  else
    IopFreeIrp((ULONG_PTR)Irp);
}
