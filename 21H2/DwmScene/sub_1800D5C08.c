/*
 * XREFs of sub_1800D5C08 @ 0x1800D5C08
 * Callers:
 *     sub_1800D56E8 @ 0x1800D56E8 (sub_1800D56E8.c)
 * Callees:
 *     sub_180025928 @ 0x180025928 (sub_180025928.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5C08(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  _QWORD *i; // rdi
  volatile signed __int32 *v9; // rsi

  sub_180067278((__int64)a1);
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
    sub_180025928((__int64)(a1 + 6), (__int64)(a1 + 6), (__int64 *)v6[2]);
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
  return sub_180067304((__int64)a1);
}
