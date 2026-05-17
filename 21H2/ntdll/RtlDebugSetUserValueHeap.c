/*
 * XREFs of RtlDebugSetUserValueHeap @ 0x1800FA120
 * Callers:
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18005F850 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005FAC0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1800FA614 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010E0A4 (RtlpHeapExceptionFilter.c)
 */

char __fastcall RtlDebugSetUserValueHeap(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v8; // si
  char v9; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180166460)();
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    v13 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v13 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v13 |= 1u;
    }
    RtlpValidateHeap(a1, 0LL);
    v14 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
    if ( RtlpValidateHeapEntry(a1, v14, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(a1, v13, a3, a4);
      RtlpValidateHeap(a1, 0LL);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v11, v12);
  return v8;
}
