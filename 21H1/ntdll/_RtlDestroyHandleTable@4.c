/*
 * XREFs of _RtlDestroyHandleTable@4 @ 0x4B2ABF30
 * Callers:
 *     _RtlDestroyAtomTable@4 @ 0x4B34CFA0 (_RtlDestroyAtomTable@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

NTSTATUS __cdecl RtlDestroyHandleTable(PRTL_HANDLE_TABLE HandleTable)
{
  NTSTATUS v1; // esi
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // ecx
  PVOID BaseAddress; // [esp+4h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  CommittedHandles = HandleTable->CommittedHandles;
  BaseAddress = CommittedHandles;
  if ( CommittedHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CommittedHandles);
    }
    else
    {
      LODWORD(RegionSize) = (char *)HandleTable->MaxReservedHandles - (char *)CommittedHandles;
      return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return v1;
}
