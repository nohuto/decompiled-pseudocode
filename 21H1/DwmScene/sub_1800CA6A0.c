/*
 * XREFs of sub_1800CA6A0 @ 0x1800CA6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C9F64 @ 0x1800C9F64 (sub_1800C9F64.c)
 *     sub_1800CA724 @ 0x1800CA724 (sub_1800CA724.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800CA6A0(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  sub_1800C9F64(a3, (__int64 *)&v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_1800CA724(v8, v6);
  *a2 = v8;
  return a2;
}
