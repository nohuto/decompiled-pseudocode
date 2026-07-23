/*
 * XREFs of MiPrefetchDriverPages @ 0x1405E7A30
 * Callers:
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 */

__int64 MiPrefetchDriverPages()
{
  __int64 result; // rax
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4);
  v3 = 0LL;
  v4 = result;
  v9 = 0LL;
  v5 = 0LL;
  v8 = 0LL;
  if ( v1 <= v6 )
  {
    do
    {
      result = *(_QWORD *)v1;
      if ( v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow(v1, *(_QWORD *)v1);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v4) )
      {
        result = 0LL;
        v7 = v1 << 25;
        if ( !v3 )
        {
          v5 = v7 >> 16;
          v8 = v7 >> 16;
        }
        v3 = ((v7 + 0x10000000) >> 16) - v5;
        v9 = v3;
      }
      v1 += 8LL;
    }
    while ( v1 <= v2 );
    if ( v3 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v8, 1LL, 45);
  }
  return result;
}
