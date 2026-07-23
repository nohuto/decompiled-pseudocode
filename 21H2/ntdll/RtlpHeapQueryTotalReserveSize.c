/*
 * XREFs of RtlpHeapQueryTotalReserveSize @ 0x1800F4340
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryMemoryUsageHeap @ 0x1800F49C0 (RtlpQueryMemoryUsageHeap.c)
 */

__int64 __fastcall RtlpHeapQueryTotalReserveSize(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v5 = (*(_QWORD *)(a1 + 88) << 12) + (*(_QWORD *)(a1 + 128) << 12);
    v6 = *(_QWORD *)(a1 + 136) << 12;
    v3 = (*(_QWORD *)(a1 + 96) << 12) + v6;
    result = 0LL;
  }
  else
  {
    result = RtlpQueryMemoryUsageHeap(a1, &v5, &v6);
    if ( (int)result < 0 )
      return result;
    v3 = v6;
  }
  *(_QWORD *)(a2 + 8) += v3;
  *(_QWORD *)a2 += v5;
  ++*(_DWORD *)(a2 + 16);
  return result;
}
