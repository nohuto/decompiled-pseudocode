/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x1405374C0
 * Callers:
 *     MmShutdownSystem @ 0x1409AD310 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140536B70 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
