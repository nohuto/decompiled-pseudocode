/*
 * XREFs of RtlDebugCompactHeap @ 0x1800F89FC
 * Callers:
 *     RtlCompactHeap @ 0x1800F2050 (RtlCompactHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlCompactHeap @ 0x1800F2050 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FA854 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(PRTL_CRITICAL_SECTION *Src, int a2)
{
  char v4; // si
  SIZE_T v6; // rbx
  ULONG v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180164A58)(Src);
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
