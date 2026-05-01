/*
 * XREFs of sub_180009018 @ 0x180009018
 * Callers:
 *     sub_1800035F4 @ 0x1800035F4 (sub_1800035F4.c)
 *     sub_180008168 @ 0x180008168 (sub_180008168.c)
 *     sub_180009FE0 @ 0x180009FE0 (sub_180009FE0.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 *     sub_18007F078 @ 0x18007F078 (sub_18007F078.c)
 * Callees:
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_1800090A8 @ 0x1800090A8 (sub_1800090A8.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 */

__int64 __fastcall sub_180009018(__int64 a1)
{
  int v2; // edi

  sub_18000E1BC(a1);
  while ( 1 )
  {
    ++*(_QWORD *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 128) )
    {
      v2 = 0;
    }
    else
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 96)) <= 1 )
        __fastfail(0xEu);
      *(_DWORD *)(a1 + 128) = GetCurrentThreadId();
      v2 = 1;
    }
    if ( v2 != (unsigned int)sub_1800090A8(a1) )
      __int2c();
    if ( v2 )
      break;
    sub_180005700(a1 + 8, a1 + 24, 0LL);
  }
  return sub_18000E244(a1);
}
