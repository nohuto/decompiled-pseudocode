/*
 * XREFs of CcFastCopyWrite @ 0x1404EA500
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteEx @ 0x1402D0830 (CcCopyWriteEx.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = FileOffset;
  CcCopyWriteEx((__int64)FileObject, (__int64)v4, *(__int64 *)&Length, 1, (__int64)Buffer, 0LL);
}
