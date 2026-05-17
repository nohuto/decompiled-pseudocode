/*
 * XREFs of _TppTimerpFree@4 @ 0x4B2B1F30
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall TppTimerpFree(int a1)
{
  TpAdjustBindingCount(*(_DWORD *)(a1 + 92), -1);
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
