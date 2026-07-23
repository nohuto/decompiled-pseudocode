/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140777360
 * Callers:
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14089825C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C4EF80, PteAddress, v2);
}
