/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x140584098
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1402DB4B8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall RtlpAllocateHeapRaiseException(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6[20]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v6, 0, 0x98uLL);
  LODWORD(v6[3]) = 1;
  return RtlRaiseException(
           (__int64)v6,
           v2,
           v3,
           v4,
           3221225495LL,
           0LL,
           (__int64)RtlRaiseException,
           v6[3],
           a1,
           v6[5],
           v6[6],
           v6[7],
           v6[8],
           v6[9],
           v6[10],
           v6[11],
           v6[12],
           v6[13],
           v6[14],
           v6[15],
           v6[16],
           v6[17],
           v6[18],
           v6[19]);
}
