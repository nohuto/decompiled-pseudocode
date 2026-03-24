/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1407771A0
 * Callers:
 *     PopFreeHiberContext @ 0x140776FBC (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x1407910F0 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408980FC (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C4EF40, PteAddress, v2);
}
