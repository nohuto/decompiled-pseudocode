/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1406BF8BC
 * Callers:
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x140661B8C (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        _DWORD *a2,
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
