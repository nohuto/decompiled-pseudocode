/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14053AE90
 * Callers:
 *     MmShutdownSystem @ 0x1409B3280 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14053A540 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
