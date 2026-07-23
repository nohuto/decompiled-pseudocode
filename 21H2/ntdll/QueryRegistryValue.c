/*
 * XREFs of QueryRegistryValue @ 0x18011A1CC
 * Callers:
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x18009D8E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall QueryRegistryValue(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, _DWORD *a5)
{
  ULONG Length; // ebx
  _DWORD *Heap; // rdi
  NTSTATUS ValueKey; // ebx
  size_t v13; // rax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF

  ResultLength[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  Length = *a5 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( !Heap )
    return 3221225626LL;
  ValueKey = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, ResultLength);
  if ( ValueKey < 0 )
    goto LABEL_13;
  v13 = (unsigned int)Heap[2];
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)v13 > *a5 )
    {
LABEL_15:
      ValueKey = -1073741789;
      *a5 = Heap[2];
      goto LABEL_16;
    }
    *a5 = v13;
    if ( a4 )
      memmove(a4, Heap + 3, v13);
    if ( a3 )
      *a3 = Heap[1];
LABEL_13:
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_16;
    goto LABEL_15;
  }
  ValueKey = -1073741811;
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)ValueKey;
}
