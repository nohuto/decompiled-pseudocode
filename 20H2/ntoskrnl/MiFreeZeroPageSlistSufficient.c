/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x140365548
 * Callers:
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140231044 (MiNodeFreeZeroPages.c)
 */

_BOOL8 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  return (*(_DWORD *)(a1 + 4) & 0x20) != 0
      || *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 4200) + 16LL * a2) >= *(int *)(a1 + 6300)
      || (unsigned __int64)MiNodeFreeZeroPages(
                             *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a2 >> byte_140C4DD0C),
                             (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_140C4DD0D)),
                             a3 != 0 ? 4096 : 4098) <= 0x40;
}
