/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800EE3D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
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
  ULONG Length; // esi
  ULONG *Heap; // rdi
  int v13; // ebx
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( Heap )
  {
    v13 = -1073741772;
    if ( !PrimaryHandle
      || (v13 = NtQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v14),
          v13 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_16:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v13;
      }
      v13 = NtQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v14);
    }
    if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
    {
      *ResultLength = Heap[2];
      if ( ValueType )
        *ValueType = Heap[1];
      if ( v13 >= 0 )
        memmove(ValueData, Heap + 3, Heap[2]);
    }
    goto LABEL_16;
  }
  return -1073741801;
}
