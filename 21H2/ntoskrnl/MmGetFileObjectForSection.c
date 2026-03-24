/*
 * XREFs of MmGetFileObjectForSection @ 0x1406D41F0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402E9010 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
