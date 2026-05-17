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

void *__fastcall RtlDebugQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  char v9; // si
  void *TagHeap; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v13 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v13 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v13 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap(a1, 0LL) )
      TagHeap = RtlQueryTagHeap(a1, v13, a3, a4, a5);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v11, v12);
  return TagHeap;
}
