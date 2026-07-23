/*
 * XREFs of RtlDebugSizeHeap @ 0x1800FA424
 * Callers:
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 * Callees:
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18005E360 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005E5D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugSizeHeap(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3)
{
  char v6; // r14
  SIZE_T v8; // rdi
  ULONG v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180166480)(HeapHandle);
  v8 = -1LL;
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSizeHeap") )
  {
    v9 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap((_DWORD)HeapHandle);
    v10 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(HeapHandle, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v8;
}
