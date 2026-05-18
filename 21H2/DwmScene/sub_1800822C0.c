/*
 * XREFs of sub_1800822C0 @ 0x1800822C0
 * Callers:
 *     sub_18008200C @ 0x18008200C (sub_18008200C.c)
 *     sub_180082FB8 @ 0x180082FB8 (sub_180082FB8.c)
 * Callees:
 *     sub_1800820F8 @ 0x1800820F8 (sub_1800820F8.c)
 *     sub_180082934 @ 0x180082934 (sub_180082934.c)
 *     sub_180082A74 @ 0x180082A74 (sub_180082A74.c)
 *     sub_180082E50 @ 0x180082E50 (sub_180082E50.c)
 *     sub_180082F04 @ 0x180082F04 (sub_180082F04.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800822C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64))
{
  __int64 v9; // r14
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  bool v16; // zf

  if ( a2 != a3 )
  {
    v9 = a3;
    v11 = a1;
    if ( a1 != a2 )
    {
      while ( !a8(a2, v11) )
      {
        v11 += 16LL;
        --a4;
        if ( v11 == a2 )
          return;
      }
      v13 = a2 - 16;
      do
      {
        v14 = a5;
        v15 = v9;
        v9 -= 16LL;
        --a5;
        if ( a2 == v9 )
        {
          sub_180082F04(v11, a2, v15);
          return;
        }
        v16 = a8(v9, v13) == 0;
        v13 = a2 - 16;
      }
      while ( v16 );
      if ( a4 == 1 )
      {
        sub_180082E50(v11, a2, v15);
      }
      else if ( a4 > v14 || a4 > a7 )
      {
        if ( v14 > a7 )
          sub_1800820F8(v11, a2, v15, a4, v14, a6, a7, a8);
        else
          sub_180082A74(v11, a2, v15, a6, (__int64)a8);
      }
      else
      {
        sub_180082934(v11, a2, v15, a6, (__int64)a8);
      }
    }
  }
}
