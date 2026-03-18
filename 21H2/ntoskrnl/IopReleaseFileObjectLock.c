/*
 * XREFs of IopReleaseFileObjectLock @ 0x1402AD350
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404183E0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWriteFile @ 0x140658DCC (IopWriteFile.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 */

void __fastcall IopReleaseFileObjectLock(volatile __int32 *Object)
{
  _InterlockedExchange(Object + 29, 0);
  if ( *((_DWORD *)Object + 28) )
    KeSetEventBoostPriorityEx((PVOID)(Object + 32), 0, 1);
  KeAbPostRelease((ULONG_PTR)(Object + 32));
  ObfDereferenceObject((PVOID)Object);
  KeLeaveCriticalRegion();
}
