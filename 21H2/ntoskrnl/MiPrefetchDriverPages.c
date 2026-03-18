/*
 * XREFs of MiPrefetchDriverPages @ 0x1406F4650
 * Callers:
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiReadPteShadow @ 0x14027D890 (MiReadPteShadow.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 */

__int64 __fastcall MiPrefetchDriverPages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4, a2);
  v5 = 0LL;
  v6 = result;
  v10 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  if ( v3 <= v8 )
  {
    do
    {
      result = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow(v3, *(_QWORD *)v3);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v6) )
      {
        result = v3 << 25;
        if ( !v5 )
        {
          v7 = result >> 16;
          v9 = result >> 16;
        }
        v5 = ((result + 0x10000000) >> 16) - v7;
        v10 = v5;
      }
      v3 += 8LL;
    }
    while ( v3 <= v4 );
    if ( v5 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v9, 1LL, 45);
  }
  return result;
}
