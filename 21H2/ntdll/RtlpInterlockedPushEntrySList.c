/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A1210
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlDeleteResource @ 0x180010F30 (RtlDeleteResource.c)
 *     RtlpFreeDebugInfo @ 0x180013E00 (RtlpFreeDebugInfo.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     EtwpFreeRegistration @ 0x1800515F8 (EtwpFreeRegistration.c)
 *     RtlInterlockedPushEntrySList @ 0x18006B450 (RtlInterlockedPushEntrySList.c)
 *     RtlStdReleaseStackTrace @ 0x180101420 (RtlStdReleaseStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x18010ADD8 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18011C190 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)a1,
           (signed __int64)a2,
           v5 + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return v6;
}
