/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x1407CD428
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405DC884 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140612398 (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1403FAA60 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeZeroTruncateLogfile(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rcx
  void *v4; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  FileInformation = 0LL;
  v1 = 72LL;
  v8 = 72LL;
  v3 = *(void **)(a1 + 376);
  IoStatusBlock = 0LL;
  if ( ZwSetInformationFile(v3, &IoStatusBlock, &v8, 8u, FileEndOfFileInformation) < 0
    || (v4 = *(void **)(a1 + 376),
        FileInformation = 72LL,
        result = ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation),
        result < 0) )
  {
    result = ZwClose(*(HANDLE *)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0LL;
    v1 = 0LL;
  }
  *(_QWORD *)(a1 + 416) = v1;
  *(_QWORD *)(a1 + 408) = v1;
  *(_QWORD *)(a1 + 400) = v1;
  return result;
}
