/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1406A9198
 * Callers:
 *     MiCommitVadCfgBits @ 0x14061BCBC (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x14061BF08 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140713DA4 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x14061FDB8 (MiPopulateCfgBitMap.c)
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
