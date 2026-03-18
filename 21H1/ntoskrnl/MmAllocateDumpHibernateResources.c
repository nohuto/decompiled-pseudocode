/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14077A3BC
 * Callers:
 *     PopHiberInitializeResources @ 0x140762F40 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1408938CC (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
