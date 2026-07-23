/*
 * XREFs of MiMakePageFilePte @ 0x1402A0694
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406BE3C0 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
