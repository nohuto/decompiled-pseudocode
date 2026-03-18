/*
 * XREFs of MmGetFileObjectForSection @ 0x140642850
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402BFEB0 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 */

ULONG_PTR __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFile(v1);
}
