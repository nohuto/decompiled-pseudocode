/*
 * XREFs of SymCryptSha256AppendBlocks @ 0x1403E7E70
 * Callers:
 *     SymCryptSha256Append @ 0x1403E7DA0 (SymCryptSha256Append.c)
 *     SymCryptSha256Result @ 0x1403E95E0 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x1403EABDC (SymCryptParallelSha256AppendBytes_serial.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x140320600 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x1403E7ED4 (SymCryptSha256AppendBlocks_shani.c)
 *     SymCryptSha256AppendBlocks_ul1 @ 0x1403E82B4 (SymCryptSha256AppendBlocks_ul1.c)
 */

__int64 __fastcall SymCryptSha256AppendBlocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x42) != 0 )
    return SymCryptSha256AppendBlocks_ul1(a1, a2, a3, a4);
  else
    return SymCryptSha256AppendBlocks_shani(a1, a2, a3, a4);
}
