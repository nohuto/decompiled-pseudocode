/*
 * XREFs of sub_18002FA8C @ 0x18002FA8C
 * Callers:
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 * Callees:
 *     sub_18002D590 @ 0x18002D590 (sub_18002D590.c)
 *     sub_18002D618 @ 0x18002D618 (sub_18002D618.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002FA8C(_QWORD **a1)
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
      sub_18002D618(a1 + 206, (__int64)v4, (unsigned int *)&v5);
      v3 = v4[0];
      *(_OWORD *)(v4[0] + 40LL) = v5;
      *(_OWORD *)(v3 + 56) = v6;
      sub_18002D590(a1 + 208, (__int64)v4, (unsigned int *)&v5 + 2);
      result = v4[0];
      *(_QWORD *)(v4[0] + 40LL) = v6;
    }
  }
  return result;
}
