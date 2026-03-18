/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1406E826C
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x14088DF6C (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
