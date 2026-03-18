/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140767C5C
 * Callers:
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140894E7C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C4ED40, PteAddress, v2);
}
