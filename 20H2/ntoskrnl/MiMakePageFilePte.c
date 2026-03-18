/*
 * XREFs of MiMakePageFilePte @ 0x14033150C
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406E39C0 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
