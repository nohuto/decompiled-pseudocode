/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x14080051C
 * Callers:
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14093C640 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 */

char __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C534C0, PteAddress, v2);
}
