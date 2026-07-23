/*
 * XREFs of MiProcessWsInSwapSupport @ 0x1402A1EF8
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     MmInSwapVirtualAddresses @ 0x140734850 (MmInSwapVirtualAddresses.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1408D9C60 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiProcessWsInSwapRanges @ 0x1402A1FCC (MiProcessWsInSwapRanges.c)
 */

__int64 __fastcall MiProcessWsInSwapSupport(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8

  v2 = *(_QWORD **)a1;
  result = 0LL;
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v6 )
  {
    do
    {
      v7 = v2[1] >> 12;
      if ( (unsigned __int64)(v7 + result) >= 0x1000 )
      {
        v8 = 4096 - result;
        if ( (a2 & 4) != 0 )
        {
          v10 = *v2 + (v8 << 12);
          if ( ((*v2 ^ (v10 - 1)) & 0xFFFFFFFFFFE00000uLL) != 0 )
            v8 -= (v10 >> 12) & 0x1FF;
        }
        v9 = v7 - v8;
        v2[1] = v8 << 12;
        MiProcessWsInSwapRanges(v5, v2, a2);
        if ( v9 )
        {
          v5 = v2;
          *v2 += v2[1];
          v2[1] = v9 << 12;
          v2 -= 2;
        }
        else
        {
          v5 = v2 + 2;
        }
        result = 0LL;
      }
      else
      {
        result += v7;
      }
      v2 += 2;
    }
    while ( (unsigned __int64)v2 < v6 );
    if ( result )
      return MiProcessWsInSwapRanges(v5, v2 - 2, a2);
  }
  return result;
}
