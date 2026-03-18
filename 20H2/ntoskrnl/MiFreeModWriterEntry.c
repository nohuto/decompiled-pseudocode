/*
 * XREFs of MiFreeModWriterEntry @ 0x140344D2C
 * Callers:
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1403B60F0 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x140533A7C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1408D2CCC (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140344D68 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
