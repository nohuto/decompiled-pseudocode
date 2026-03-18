/*
 * XREFs of MmGetFileObjectForSection @ 0x14066BA80
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 1953261124LL);
}
