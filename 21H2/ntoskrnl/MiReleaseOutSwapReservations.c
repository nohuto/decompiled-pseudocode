/*
 * XREFs of MiReleaseOutSwapReservations @ 0x1402A2084
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1402A1FCC (MiProcessWsInSwapRanges.c)
 * Callees:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     memset @ 0x140414300 (memset.c)
 */

_QWORD *__fastcall MiReleaseOutSwapReservations(ULONG_PTR *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rsi
  _QWORD v7[14]; // [rsp+28h] [rbp-29h] BYREF

  memset(&v7[2], 0, 0x60uLL);
  v7[1] = 4096LL;
  result = v7;
  v7[0] = 0LL;
  v7[3] = v7;
  v7[5] = 0LL;
  v7[6] = 0LL;
  LOWORD(v7[2]) = 3;
  v7[4] = 1LL;
  while ( (unsigned __int64)a1 <= a2 )
  {
    v5 = *a1;
    v6 = *a1 + a1[1];
    while ( v5 < v6 )
    {
      v7[0] = v5;
      result = (_QWORD *)MmAccessFault(0LL, v5);
      v5 += 4096LL;
    }
    a1 += 2;
  }
  return result;
}
