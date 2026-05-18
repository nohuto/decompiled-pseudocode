/*
 * XREFs of sub_1800F394C @ 0x1800F394C
 * Callers:
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 *     sub_1800D8EA8 @ 0x1800D8EA8 (sub_1800D8EA8.c)
 *     sub_180104F70 @ 0x180104F70 (sub_180104F70.c)
 * Callees:
 *     sub_180068240 @ 0x180068240 (sub_180068240.c)
 *     sub_1800D02F0 @ 0x1800D02F0 (sub_1800D02F0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800F394C(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v6 = sub_180068240((_QWORD *)*a2, &v16);
  v20 = 0LL;
  v7 = v6[1];
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v20 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v9 = v17;
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  if ( (_QWORD)v20 )
  {
    v10 = sub_1800D02F0(v20, &v18, a3, a2);
    v11 = *v10;
    v7 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    *a1 = v11;
    v12 = (volatile signed __int32 *)a1[1];
    a1[1] = v7;
    if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = v19;
    if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v14 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))&v20 + 1))(*((_QWORD *)&v20 + 1), v7, v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  return a1;
}
