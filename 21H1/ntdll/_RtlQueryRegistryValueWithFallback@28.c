/*
 * XREFs of _RtlQueryRegistryValueWithFallback@28 @ 0x4B3511F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  unsigned int v7; // edi
  NTSTATUS v9; // esi
  ULONG *Heap; // edi
  size_t v11; // [esp-Ch] [ebp-18h]
  ULONG v12; // [esp+4h] [ebp-8h] BYREF
  SIZE_T Size; // [esp+8h] [ebp-4h] BYREF

  if ( !PrimaryHandle && !FallbackHandle )
    return -1073741811;
  LODWORD(Size) = 16;
  v9 = RtlULongPtrAdd(0x10u, ValueLength, (int *)&Size);
  if ( v9 >= 0 )
  {
    Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, __PAIR64__(v7, Size));
    if ( !Heap )
      return -1073741801;
    v9 = -1073741772;
    if ( !PrimaryHandle
      || (v9 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Size, &v12), v9 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_17:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v9;
      }
      v9 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Size, &v12);
    }
    if ( v9 >= 0 || v9 == -2147483643 )
    {
      *ResultLength = Heap[2];
      if ( ValueType )
        *ValueType = Heap[1];
      if ( v9 >= 0 )
      {
        LODWORD(v11) = Heap[2];
        memcpy(ValueData, Heap + 3, v11);
      }
    }
    goto LABEL_17;
  }
  return v9;
}
