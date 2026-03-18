/*
 * XREFs of NtWriteVirtualMemory @ 0x1406DE950
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14061FCA0 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtWriteVirtualMemory(void *a1, size_t a2, size_t a3, size_t a4, unsigned __int64 a5)
{
  return MiReadWriteVirtualMemory(a1, a2, a3, a4, a5, 0x20u);
}
