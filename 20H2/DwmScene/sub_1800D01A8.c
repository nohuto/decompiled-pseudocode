/*
 * XREFs of sub_1800D01A8 @ 0x1800D01A8
 * Callers:
 *     sub_1800D02F0 @ 0x1800D02F0 (sub_1800D02F0.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800D05F4 @ 0x1800D05F4 (sub_1800D05F4.c)
 *     sub_180103164 @ 0x180103164 (sub_180103164.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800D01A8(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h]
  _BYTE v16[8]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  _QWORD v18[5]; // [rsp+48h] [rbp-28h] BYREF

  v15 = a1;
  sub_1800619A8(a1);
  sub_1800D05F4(a1, v16, a3);
  if ( v16[0] )
  {
    v9 = 2 * (v17 + 4);
    v18[4] = &v14;
    v14 = 0LL;
    v10 = a5[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a5[1];
    }
    *(_QWORD *)&v14 = *a5;
    *((_QWORD *)&v14 + 1) = v10;
    v18[2] = 0LL;
    v18[3] = 0LL;
    sub_18001CDF8(v18, a4);
    v11 = sub_180103164(*(_QWORD *)(a1 + 8 * v9), v18, &v14);
    v12 = *(volatile signed __int32 **)(a1 + 8 * v9 + 8);
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = *(volatile signed __int32 **)(a1 + 8 * v9 + 8);
    }
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v12 )
      _InterlockedIncrement(v12 + 3);
    *a2 = v11;
    a2[1] = (__int64)v12;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_180061A34(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_180061A34(a1);
  }
  return a2;
}
