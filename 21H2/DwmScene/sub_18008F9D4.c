/*
 * XREFs of sub_18008F9D4 @ 0x18008F9D4
 * Callers:
 *     sub_18008C750 @ 0x18008C750 (sub_18008C750.c)
 * Callees:
 *     sub_18008F7A4 @ 0x18008F7A4 (sub_18008F7A4.c)
 *     sub_18008F890 @ 0x18008F890 (sub_18008F890.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18008F9D4(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD *i; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-20h]

  sub_18008F7A4(a1, &v6, a2);
  v3 = 0LL;
  for ( i = v6; i != v7; ++v3 )
    i = (_QWORD *)*i;
  sub_18008F890(a1, &v6, v6, v7);
  return v3;
}
