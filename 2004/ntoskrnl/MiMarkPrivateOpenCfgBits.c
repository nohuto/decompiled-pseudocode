/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1406068D4
 * Callers:
 *     MiCommitVadCfgBits @ 0x140601FE0 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x14060222C (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407005F4 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x140607650 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
