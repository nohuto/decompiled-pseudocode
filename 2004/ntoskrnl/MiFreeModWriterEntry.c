/*
 * XREFs of MiFreeModWriterEntry @ 0x1402F8068
 * Callers:
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1405300AC (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1408CCE8C (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1402F80A4 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
