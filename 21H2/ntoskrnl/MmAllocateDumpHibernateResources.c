/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14078ED5C
 * Callers:
 *     PopHiberInitializeResources @ 0x140777B00 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140897FCC (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EF80, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0), a3, a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
