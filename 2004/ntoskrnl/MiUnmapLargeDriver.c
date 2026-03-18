/*
 * XREFs of MiUnmapLargeDriver @ 0x1408D7144
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPdeAddress @ 0x14025387C (MiGetPdeAddress.c)
 *     MiFreeContiguousPages @ 0x140337158 (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x1403929B4 (MiUnmapLargePages.c)
 *     MiReleasePrivilegedPtes @ 0x140761528 (MiReleasePrivilegedPtes.c)
 */

__int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  _DWORD *v8; // r9

  PdeAddress = MiGetPdeAddress(a1);
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  v6 = ((unsigned int)dword_140C4CA4C + 511LL + a2) & 0xFFFFFFFFFFFFFE00uLL;
  MiGetPteAddress(a1);
  MiReleasePrivilegedPtes();
  MiUnmapLargePages(a1, v6 << 12, 12);
  return MiFreeContiguousPages((v5 >> 12) & 0xFFFFFFFFFLL, v6, v7, v8);
}
