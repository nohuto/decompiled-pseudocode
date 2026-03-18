/*
 * XREFs of MmGetFileObjectForSection @ 0x14060D700
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140266E80 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
