/*
 * XREFs of sub_18002A1BC @ 0x18002A1BC
 * Callers:
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 * Callees:
 *     sub_180027CC0 @ 0x180027CC0 (sub_180027CC0.c)
 *     sub_180027D48 @ 0x180027D48 (sub_180027D48.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002A1BC(_QWORD **a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]

  result = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*a1[63] + 128LL))(a1[63], &v5);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v5 )
    {
      sub_180027D48(a1 + 206, (__int64)v4, (unsigned int *)&v5);
      v3 = v4[0];
      *(_OWORD *)(v4[0] + 40LL) = v5;
      *(_OWORD *)(v3 + 56) = v6;
      sub_180027CC0(a1 + 208, (__int64)v4, (unsigned int *)&v5 + 2);
      result = v4[0];
      *(_QWORD *)(v4[0] + 40LL) = v6;
    }
  }
  return result;
}
