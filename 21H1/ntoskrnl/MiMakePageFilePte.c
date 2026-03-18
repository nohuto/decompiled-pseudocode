/*
 * XREFs of MiMakePageFilePte @ 0x1402D1564
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406563A0 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
