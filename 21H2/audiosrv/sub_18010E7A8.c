/*
 * XREFs of sub_18010E7A8 @ 0x18010E7A8
 * Callers:
 *     sub_18010D340 @ 0x18010D340 (sub_18010D340.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     sub_18010BDE8 @ 0x18010BDE8 (sub_18010BDE8.c)
 *     sub_18010E4B8 @ 0x18010E4B8 (sub_18010E4B8.c)
 *     sub_18010E768 @ 0x18010E768 (sub_18010E768.c)
 */

__int64 __fastcall sub_18010E7A8(__int64 *a1, __int128 *a2)
{
  __int64 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  sub_18010BDE8(a1, &v10, a2);
  v3 = v10;
  v4 = 0LL;
  v5 = v10;
  v12 = v10;
  while ( (_QWORD *)v5 != v11 )
  {
    ++v4;
    sub_1800E3598(&v12);
    v5 = v12;
  }
  v6 = (_QWORD *)*a1;
  v12 = v3;
  if ( v3 == *v6 && v11 == v6 )
  {
    sub_18010E768(a1);
  }
  else
  {
    while ( (_QWORD *)v3 != v11 )
    {
      sub_1800E3598(&v12);
      v9 = sub_18010E4B8(a1, v8);
      sub_18000F708(v9 + 6);
      sub_1800472E0((__int64)v9, 0x48uLL);
      v3 = v12;
    }
  }
  return v4;
}
