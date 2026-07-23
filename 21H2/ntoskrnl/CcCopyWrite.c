/*
 * XREFs of CcCopyWrite @ 0x1404EA250
 * Callers:
 *     FsRtlCopyWrite @ 0x14088A9F0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1402D0830 (CcCopyWriteEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64)FileOffset, *(__int64 *)&Length, Wait, (__int64)Buffer, 0LL);
}
