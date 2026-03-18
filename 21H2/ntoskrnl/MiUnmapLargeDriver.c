/*
 * XREFs of MiUnmapLargeDriver @ 0x1409835EC
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiGetPdeAddress @ 0x14027FCC4 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapLargePages @ 0x1403A111C (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x1406EBA70 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C4F404 + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFFLL, v6);
}
