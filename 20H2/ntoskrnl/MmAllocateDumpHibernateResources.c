/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14078ADCC
 * Callers:
 *     PopHiberInitializeResources @ 0x140773990 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14089A89C (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EDC0, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
