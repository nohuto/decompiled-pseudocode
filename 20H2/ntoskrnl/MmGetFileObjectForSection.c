/*
 * XREFs of MmGetFileObjectForSection @ 0x1407096E0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1403561D0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
