/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x140374E90
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x140374EA8 (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(__int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
