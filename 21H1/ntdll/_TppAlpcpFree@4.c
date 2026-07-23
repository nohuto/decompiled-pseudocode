/*
 * XREFs of _TppAlpcpFree@4 @ 0x4B2E99B0
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TppAlpcpFree@4 @ 0x4B2E99B0 (_TppAlpcpFree@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

LOGICAL __stdcall TppAlpcpFree(int a1)
{
  TpAdjustBindingCount(*(_DWORD *)(a1 + 92), 0xFFFFFFFF);
  *(_DWORD *)(a1 - 48 + 32) = 0;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, (PVOID)(a1 - 48));
}
