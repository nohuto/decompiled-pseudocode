/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x1800F9F54
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800F2E70 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18005F850 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005FAC0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E70 (RtlSetUserFlagsHeap.c)
 *     RtlpValidateHeap @ 0x1800FA614 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E0A4 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserFlagsHeap(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v9; // di
  char v10; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180166470)(a1);
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserFlagsHeap") )
  {
    v14 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v14 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v14 |= 1u;
    }
    RtlpValidateHeap(a1, 0LL);
    v15 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v15 -= 16LL * *(unsigned __int8 *)(v15 + 14);
    if ( RtlpValidateHeapEntry(a1, v15, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(a1, v14, a3, a4, a5);
      RtlpValidateHeap(a1, 0LL);
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v12, v13);
  return v9;
}
