/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1406BCEBC
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x140893ABC (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
