/*
 * XREFs of NtReadFile @ 0x140645C40
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14059DA88 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax
  SIZE_T v13; // [rsp+30h] [rbp-48h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-18h] BYREF

  DmaAdapter = 0LL;
  result = IopReferenceFileObject(FileHandle, 1u, KeGetCurrentThread()->PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( result >= 0 )
  {
    LODWORD(v13) = Length;
    return IopReadFile(
             (struct _FILE_OBJECT *)DmaAdapter,
             Event,
             (__int64)ApcRoutine,
             (__int64)ApcContext,
             IoStatusBlock,
             (struct _IRP *)Buffer,
             v13,
             (__int64)ByteOffset,
             (int *)Key,
             0,
             0LL);
  }
  return result;
}
