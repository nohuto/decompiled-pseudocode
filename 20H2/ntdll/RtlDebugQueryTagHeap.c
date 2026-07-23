/*
 * XREFs of RtlDebugQueryTagHeap @ 0x1800F99F4
 * Callers:
 *     RtlQueryTagHeap @ 0x1800F2C40 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005E5D0 (RtlpCheckHeapSignature.c)
 *     RtlQueryTagHeap @ 0x1800F2C40 (RtlQueryTagHeap.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(
        PRTL_CRITICAL_SECTION *HeapHandle,
        int a2,
        USHORT a3,
        BOOLEAN a4,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap((_DWORD)HeapHandle) )
      TagHeap = RtlQueryTagHeap(HeapHandle, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return TagHeap;
}
