/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x140536E70
 * Callers:
 *     MmShutdownSystem @ 0x1409AC4B0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x140536520 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return MiTrimAllSystemPagableMemory(0, (_DWORD *)a1, a3, a4);
}
