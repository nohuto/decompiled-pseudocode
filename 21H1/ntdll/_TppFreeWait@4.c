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

LOGICAL __stdcall TppFreeWait(PVOID BaseAddress)
{
  ULONG v1; // eax

  TpAdjustBindingCount(*((_DWORD *)BaseAddress + 23), -1);
  TppCleanupGroupMemberDestroy(BaseAddress);
  NtClose(*((HANDLE *)BaseAddress + 57));
  v1 = TppHeapTag;
  *((_DWORD *)BaseAddress + 70) = 0;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, v1 + 1835008, BaseAddress);
}
