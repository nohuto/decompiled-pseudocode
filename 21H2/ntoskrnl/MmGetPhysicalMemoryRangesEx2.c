/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x140852570
 * Callers:
 *     PfpMemoryRangesQuery @ 0x1403D506C (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140852530 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetPhysicalMemoryRanges @ 0x140852550 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140264ED0 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
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
  v3 = MiPartitionObjectToPartition(a1, 0LL, &v7);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(v3, a2);
  if ( v7 )
    PsDereferencePartition(v4[22]);
  return PhysicalMemoryRanges;
}
