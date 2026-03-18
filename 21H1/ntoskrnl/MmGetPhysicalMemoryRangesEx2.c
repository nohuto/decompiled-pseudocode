/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x14075AC10
 * Callers:
 *     PfpMemoryRangesQuery @ 0x14037BD2C (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407B7130 (MmGetPhysicalMemoryRanges.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1407BF590 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1403426CC (MiPartitionObjectToPartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075AC78 (MiGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx2(ULONG_PTR **a1, unsigned int a2)
{
  ULONG_PTR *v3; // rax
  ULONG_PTR *v4; // rdi
  __int64 PhysicalMemoryRanges; // rbx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 2) != 0 && a1 )
    return 0LL;
  v3 = MiPartitionObjectToPartition(a1, 0, &v7);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(v3, a2);
  if ( v7 )
    PsDereferencePartition(v4[22]);
  return PhysicalMemoryRanges;
}
