/*
 * XREFs of _TppSimplepFree@4 @ 0x4B2ECE40
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

LOGICAL __stdcall TppSimplepFree(PVOID BaseAddress)
{
  TppCleanupGroupMemberDestroy((int)BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
