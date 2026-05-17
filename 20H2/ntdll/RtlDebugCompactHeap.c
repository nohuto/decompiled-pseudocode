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

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // ebx

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_180166488)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v9 = Src[29] | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v9 |= 1u;
    }
    RtlpValidateHeap(Src, 0LL);
    v8 = RtlCompactHeap((char *)Src, v9);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v6, v7);
  return v8;
}
