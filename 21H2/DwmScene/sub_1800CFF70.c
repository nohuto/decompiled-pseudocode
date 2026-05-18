/*
 * XREFs of sub_1800CFF70 @ 0x1800CFF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF834 @ 0x1800CF834 (sub_1800CF834.c)
 *     sub_1800CFFF4 @ 0x1800CFFF4 (sub_1800CFFF4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800CFF70(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  sub_1800CF834(a3, (__int64 *)&v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_1800CFFF4(v8, v6);
  *a2 = v8;
  return a2;
}
