/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14053C990
 * Callers:
 *     MmShutdownSystem @ 0x1409B0180 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14053C040 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
