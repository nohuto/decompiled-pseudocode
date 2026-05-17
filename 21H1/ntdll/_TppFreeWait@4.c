/*
 * XREFs of _TppFreeWait@4 @ 0x4B2B24C0
 * Callers:
 *     <none>
 * Callees:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __stdcall TppFreeWait(int a1)
{
  int v1; // eax

  TpAdjustBindingCount(*(_DWORD *)(a1 + 92), -1);
  TppCleanupGroupMemberDestroy(a1);
  NtClose(*(HANDLE *)(a1 + 228));
  v1 = TppHeapTag;
  *(_DWORD *)(a1 + 280) = 0;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, v1 + 1835008, a1);
}
