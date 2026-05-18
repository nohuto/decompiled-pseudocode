/*
 * XREFs of sub_180017634 @ 0x180017634
 * Callers:
 *     sub_180019C80 @ 0x180019C80 (sub_180019C80.c)
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 *     sub_1800B38C0 @ 0x1800B38C0 (sub_1800B38C0.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800CB604 @ 0x1800CB604 (sub_1800CB604.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800F4C70 @ 0x1800F4C70 (sub_1800F4C70.c)
 *     sub_1800F5370 @ 0x1800F5370 (sub_1800F5370.c)
 *     sub_1800FA430 @ 0x1800FA430 (sub_1800FA430.c)
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 *     sub_180109924 @ 0x180109924 (sub_180109924.c)
 *     sub_18010D020 @ 0x18010D020 (sub_18010D020.c)
 * Callees:
 *     sub_18000F8D8 @ 0x18000F8D8 (sub_18000F8D8.c)
 *     sub_1800185F0 @ 0x1800185F0 (sub_1800185F0.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180017634(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  _QWORD *v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v13 = a2;
  *(_OWORD *)a2 = 0LL;
  sub_1800185F0(a2);
  v14 = 0LL;
  sub_1800615B4(a1 + 101, &v14);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = (_QWORD *)a1[109];
  if ( (_QWORD *)a1[110] == v8 )
  {
    sub_18000F8D8(a1 + 108, v8, &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v7;
    v8[1] = v6;
    v9 = 0LL;
    v12 = 0LL;
    a1[109] += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( BYTE8(v14) )
    sub_180061A34(v14);
  sub_180073CFC(a1, *a2, a3);
  return a2;
}
