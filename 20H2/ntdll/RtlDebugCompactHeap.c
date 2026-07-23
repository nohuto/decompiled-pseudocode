/*
 * XREFs of RtlDebugCompactHeap @ 0x1800F8F0C
 * Callers:
 *     RtlCompactHeap @ 0x1800F2560 (RtlCompactHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005E5D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlCompactHeap @ 0x1800F2560 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAD64 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(PRTL_CRITICAL_SECTION *Src, int a2)
{
  char v4; // si
  SIZE_T v6; // rbx
  ULONG v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180166488)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap((_DWORD)Src);
    v6 = RtlCompactHeap(Src, v7);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
