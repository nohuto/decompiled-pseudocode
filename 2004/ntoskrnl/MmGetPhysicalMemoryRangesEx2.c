/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x14075D040
 * Callers:
 *     PfpMemoryRangesQuery @ 0x14037CAAC (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRanges @ 0x1407BA2A0 (MmGetPhysicalMemoryRanges.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1407C2AF0 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x14031338C (MiPartitionObjectToPartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075D0A8 (MiGetPhysicalMemoryRanges.c)
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
