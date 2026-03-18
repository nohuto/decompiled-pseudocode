/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x14075FB64
 * Callers:
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140893B5C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140C4EE80, PteAddress, v2);
}
