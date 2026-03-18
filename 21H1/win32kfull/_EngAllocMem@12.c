/*
 * XREFs of _EngAllocMem@12 @ 0xEDF2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  return __imp__EngAllocMem@12(fl, cjMemSize, ulTag);
}
