/*
 * XREFs of _TppJobpFree@4 @ 0x4B383990
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall TppJobpFree(_DWORD *a1)
{
  TpAdjustBindingCount(a1[23], 0xFFFFFFFF);
  *(a1 - 4) = 0;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, (int)(a1 - 12));
}
