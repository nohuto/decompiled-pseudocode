/*
 * XREFs of MiMakePageFilePte @ 0x140310C10
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406D2818 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
