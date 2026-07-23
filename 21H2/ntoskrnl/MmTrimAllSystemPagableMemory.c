/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14053CBD0
 * Callers:
 *     MmShutdownSystem @ 0x1409B10B0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14053C280 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
