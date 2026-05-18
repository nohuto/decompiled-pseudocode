/*
 * XREFs of sub_1800D0338 @ 0x1800D0338
 * Callers:
 *     sub_1800CFE18 @ 0x1800CFE18 (sub_1800CFE18.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0338(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  _QWORD *i; // rdi
  volatile signed __int32 *v9; // rsi

  sub_1800619A8((__int64)a1);
  while ( 1 )
  {
    v4 = a1[5];
    if ( !v4 )
      break;
    v2 = v4 - 1;
    a1[5] = v2;
    if ( v2 )
      v3 = a1[4] + 1LL;
    else
      v3 = 0LL;
    a1[4] = v3;
  }
  v5 = (_QWORD *)a1[6];
  v6 = (__int64 *)v5[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    sub_180020058((__int64)(a1 + 6), (__int64)(a1 + 6), (__int64 *)v6[2]);
    v7 = v6;
    v6 = (__int64 *)*v6;
    j_j__o_free(v7);
  }
  v5[1] = v5;
  *v5 = v5;
  v5[2] = v5;
  a1[7] = 0LL;
  for ( i = a1 + 8; i != a1 + 18; i += 2 )
  {
    *i = 0LL;
    v9 = (volatile signed __int32 *)i[1];
    i[1] = 0LL;
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return sub_180061A34((__int64)a1);
}
