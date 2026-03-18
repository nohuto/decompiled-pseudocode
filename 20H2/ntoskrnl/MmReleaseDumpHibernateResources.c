/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140773334
 * Callers:
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089AB2C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 */

char __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C4EDC0, PteAddress, v2);
}
