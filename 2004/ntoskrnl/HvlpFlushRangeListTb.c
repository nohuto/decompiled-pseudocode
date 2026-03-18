/*
 * XREFs of HvlpFlushRangeListTb @ 0x14038D5EC
 * Callers:
 *     HvlFlushRangeListTb @ 0x14038D59C (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpFastFlushListTb @ 0x14038D684 (HvlpFastFlushListTb.c)
 *     HvlpPrepareFlushHeader @ 0x14038D9D8 (HvlpPrepareFlushHeader.c)
 *     HvlpAllowFastFlushList @ 0x14038DBEC (HvlpAllowFastFlushList.c)
 *     HvlpCountFlushVaList @ 0x14038DC18 (HvlpCountFlushVaList.c)
 *     HvlpSlowFlushListTb @ 0x1404F5DEC (HvlpSlowFlushListTb.c)
 */

__int64 __fastcall HvlpFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  char v7; // bl
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // r10
  unsigned int v13; // r11d
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v7 = a4;
  v16 = 0LL;
  v15 = 0LL;
  if ( a5 )
  {
    LOBYTE(a4) = a3;
    HvlpPrepareFlushHeader(&v15, a1, a2, a4);
  }
  v13 = HvlpCountFlushVaList(a6, a7);
  if ( v13 <= 0xB && (LOBYTE(v9) = v7, (unsigned __int8)HvlpAllowFastFlushList(v9, v11)) )
  {
    LOBYTE(v10) = a5;
    LOBYTE(v8) = v7;
    return HvlpFastFlushListTb((unsigned int)&v15, v8, v10, v11, v12, v13);
  }
  else
  {
    LOBYTE(v10) = a5;
    LOBYTE(v8) = v7;
    return HvlpSlowFlushListTb((unsigned int)&v15, v8, v10, v11, v12, v13);
  }
}
