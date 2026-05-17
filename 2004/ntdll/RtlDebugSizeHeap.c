/*
 * XREFs of RtlDebugSizeHeap @ 0x1800F9F14
 * Callers:
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 * Callees:
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18005E250 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugSizeHeap(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  char v6; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180164A50)(a1);
  v8 = -1LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSizeHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v11 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(a1, 0LL);
    v12 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry(a1, v12, "RtlSizeHeap") )
      v8 = RtlSizeHeap(a1, v11, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v9, v10);
  return v8;
}
