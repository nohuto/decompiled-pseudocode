/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x1800FA290
 * Callers:
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180050840 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18005E360 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005E5D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1800FA784 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __fastcall RtlDebugSetUserValueHeap(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3, void *a4)
{
  BOOLEAN v8; // si
  char v9; // r14
  ULONG v11; // edi
  unsigned __int64 v12; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180166460)();
  if ( RtlpCheckHeapSignature(HeapHandle, "RtlSetUserValueHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap((_DWORD)HeapHandle);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v12, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(HeapHandle, v11, a3, a4);
      RtlpValidateHeap((_DWORD)HeapHandle);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v8;
}
