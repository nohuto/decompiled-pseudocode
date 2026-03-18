/*
 * XREFs of _EngAllocUserMem@8 @ 0xEDF36
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall EngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  return __imp__EngAllocUserMem@8(cjMemSize, ulTag);
}
