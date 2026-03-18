/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1405976F0
 * Callers:
 *     MmShutdownSystem @ 0x140A6A3E0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x1405970A0 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
