/*
 * XREFs of MiFreeModWriterEntry @ 0x140354048
 * Callers:
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x14052FA5C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x1408CBB3C (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140354084 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
