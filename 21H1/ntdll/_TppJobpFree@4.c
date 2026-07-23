/*
 * XREFs of _TppJobpFree@4 @ 0x4B383990
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

LOGICAL __stdcall TppJobpFree(int a1)
{
  TpAdjustBindingCount(*(_DWORD *)(a1 + 92), 0xFFFFFFFF);
  *(_DWORD *)(a1 - 48 + 32) = 0;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, (PVOID)(a1 - 48));
}
