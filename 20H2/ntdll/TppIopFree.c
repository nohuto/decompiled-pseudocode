/*
 * XREFs of TppIopFree @ 0x18007D600
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall TppIopFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  a1[32] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, (__int64)a1);
}
