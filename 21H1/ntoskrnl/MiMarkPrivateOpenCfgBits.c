/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x14063BA18
 * Callers:
 *     MiCommitVadCfgBits @ 0x140637020 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x14063726C (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DD8D4 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x14063C7A0 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
