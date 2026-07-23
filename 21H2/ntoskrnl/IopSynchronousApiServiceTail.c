/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1405F7CBC
 * Callers:
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1405FA4E0 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     NtSetEaFile @ 0x140730E70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x1408911EC (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5,
        _OWORD *a6)
{
  unsigned int v8; // edi

  v8 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v8 = *a5;
  }
  *a6 = *(_OWORD *)a5;
  ExFreePoolWithTag(a2, 0);
  return v8;
}
