/*
 * XREFs of MiFreeModWriterEntry @ 0x1402557E8
 * Callers:
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1403B7730 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x14053557C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1408D048C (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140255824 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r9

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2, v4);
}
