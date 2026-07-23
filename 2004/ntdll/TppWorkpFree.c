/*
 * XREFs of TppWorkpFree @ 0x18000F0E0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(PVOID BaseAddress)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
