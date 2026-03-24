/*
 * XREFs of MiMakePageFilePte @ 0x14035B8F4
 * Callers:
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14070FD70 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakePageFilePte(__int64 a1)
{
  return MiSwizzleInvalidPte(a1 << 32);
}
