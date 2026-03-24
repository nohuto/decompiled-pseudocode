/*
 * XREFs of IopSynchronousApiServiceTail @ 0x140698FCC
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140698D00 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x14089108C (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
