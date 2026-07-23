/*
 * XREFs of MiFreeModWriterEntry @ 0x140276D58
 * Callers:
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1405357BC (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1408D05EC (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140276D94 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
