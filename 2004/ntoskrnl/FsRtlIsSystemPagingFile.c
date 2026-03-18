/*
 * XREFs of FsRtlIsSystemPagingFile @ 0x14036A370
 * Callers:
 *     <none>
 * Callees:
 *     MmIsFileObjectAPagingFile @ 0x140227A0C (MmIsFileObjectAPagingFile.c)
 */

__int64 __fastcall FsRtlIsSystemPagingFile(unsigned __int64 a1)
{
  return MmIsFileObjectAPagingFile(a1);
}
