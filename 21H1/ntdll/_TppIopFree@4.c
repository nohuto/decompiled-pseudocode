/*
 * XREFs of _TppIopFree@4 @ 0x4B2E71A0
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TppIopFree@4 @ 0x4B2E71A0 (_TppIopFree@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

LOGICAL __stdcall TppIopFree(_DWORD *BaseAddress)
{
  TpAdjustBindingCount(BaseAddress[23], 0xFFFFFFFF);
  BaseAddress[38] = 0;
  TppCleanupGroupMemberDestroy((int)BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
}
