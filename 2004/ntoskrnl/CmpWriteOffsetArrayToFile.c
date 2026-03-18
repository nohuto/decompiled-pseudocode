/*
 * XREFs of CmpWriteOffsetArrayToFile @ 0x14086E304
 * Callers:
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140878820 (CmDumpKey.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1403F3AA0 (ZwSetInformationFile.c)
 *     ZwFlushBuffersFile @ 0x1403F3F20 (ZwFlushBuffersFile.c)
 *     CmpDoFileWrite @ 0x14061E5DC (CmpDoFileWrite.c)
 */

NTSTATUS __fastcall CmpWriteOffsetArrayToFile(__int64 a1, unsigned int a2, __int64 a3, int a4, HANDLE FileHandle)
{
  NTSTATUS result; // eax
  __int64 v8; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v11 = 0;
  v10 = a4;
  IoStatusBlock = 0LL;
  result = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v10, 8u, FileEndOfFileInformation);
  if ( result >= 0 )
  {
    result = CmpDoFileWrite(FileHandle, v8, a3, (struct _LOOKASIDE_LIST_EX *)a2, 0);
    if ( result >= 0 )
      return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  }
  return result;
}
