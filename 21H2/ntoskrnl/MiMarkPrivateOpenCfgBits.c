/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x140607118
 * Callers:
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x140685B78 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406C23F4 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x140689A28 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
