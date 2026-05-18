/*
 * XREFs of sub_1800D57FC @ 0x1800D57FC
 * Callers:
 *     sub_1800D5978 @ 0x1800D5978 (sub_1800D5978.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800D5EC4 @ 0x1800D5EC4 (sub_1800D5EC4.c)
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D57FC(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v12; // rdi
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  sub_180067278((__int64)a1);
  sub_1800D5EC4(a1, v14, a3);
  if ( v14[0] || (v6 = a1[5]) == 0 )
  {
    sub_180067304((__int64)a1);
    v12 = (volatile signed __int32 *)a2[1];
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( !_InterlockedDecrement(v12 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    return 0;
  }
  else
  {
    v7 = (__int64 *)a1[1];
    if ( v7 )
      v8 = *v7;
    else
      v8 = 0LL;
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((a1[4] >> 1) & (*(_QWORD *)(v8 + 16) - 1LL)))
                   + 8 * (a1[4] & 1LL));
    a1[5] = v6 - 1;
    if ( v6 == 1 )
      a1[4] = 0LL;
    else
      ++a1[4];
    a1[v9 + 18] = a3;
    v13[0] = *a2;
    v13[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_180108788(a1[2 * v9 + 8], a3, v13);
    sub_180067304((__int64)a1);
    v10 = (volatile signed __int32 *)a2[1];
    if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    return 1;
  }
}
