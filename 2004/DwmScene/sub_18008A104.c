/*
 * XREFs of sub_18008A104 @ 0x18008A104
 * Callers:
 *     sub_180086E80 @ 0x180086E80 (sub_180086E80.c)
 * Callees:
 *     sub_180089ED4 @ 0x180089ED4 (sub_180089ED4.c)
 *     sub_180089FC0 @ 0x180089FC0 (sub_180089FC0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008A104(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD *i; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-20h]

  sub_180089ED4(a1, &v6, a2);
  v3 = 0LL;
  for ( i = v6; i != v7; ++v3 )
    i = (_QWORD *)*i;
  sub_180089FC0(a1, &v6, v6, v7);
  return v3;
}
