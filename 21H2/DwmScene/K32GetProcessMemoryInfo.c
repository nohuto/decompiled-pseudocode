/*
 * XREFs of K32GetProcessMemoryInfo @ 0x180125450
 * Callers:
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall K32GetProcessMemoryInfo(HANDLE Process, PPROCESS_MEMORY_COUNTERS ppsmemCounters, DWORD cb)
{
  return __imp_K32GetProcessMemoryInfo(Process, ppsmemCounters, cb);
}
