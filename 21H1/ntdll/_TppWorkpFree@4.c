/*
 * XREFs of _TppWorkpFree@4 @ 0x4B2EC540
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TppWorkpFree@4 @ 0x4B2EC540 (_TppWorkpFree@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

LOGICAL __stdcall TppWorkpFree(PVOID BaseAddress)
{
  TppCleanupGroupMemberDestroy((int)BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
