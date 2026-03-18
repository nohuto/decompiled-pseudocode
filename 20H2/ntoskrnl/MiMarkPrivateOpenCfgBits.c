/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1406CC0A0
 * Callers:
 *     MiCommitVadCfgBits @ 0x140627A50 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x140627C9C (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406D3888 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x140629B48 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(
           a1,
           a4 != 1,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL,
           0,
           a2,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
