/*
 * XREFs of MiMakePageFilePte @ 0x140375EAC
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1407F7238 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
