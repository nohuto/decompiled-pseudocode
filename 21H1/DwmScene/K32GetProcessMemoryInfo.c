/*
 * XREFs of K32GetProcessMemoryInfo @ 0x18011FB80
 * Callers:
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall K32GetProcessMemoryInfo(HANDLE Process, PPROCESS_MEMORY_COUNTERS ppsmemCounters, DWORD cb)
{
  return __imp_K32GetProcessMemoryInfo(Process, ppsmemCounters, cb);
}
