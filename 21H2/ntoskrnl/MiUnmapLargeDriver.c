/*
 * XREFs of MiUnmapLargeDriver @ 0x1408DA744
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14026DF3C (MiGetPdeAddress.c)
 *     MiFreeContiguousPages @ 0x140296068 (MiFreeContiguousPages.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapLargePages @ 0x1403952E4 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x140773A48 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C4CC4C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6, v7);
}
