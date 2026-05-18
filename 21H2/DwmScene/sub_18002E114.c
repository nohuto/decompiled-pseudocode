/*
 * XREFs of sub_18002E114 @ 0x18002E114
 * Callers:
 *     sub_18002E00C @ 0x18002E00C (sub_18002E00C.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 * Callees:
 *     _o___std_exception_copy @ 0x180123893 (_o___std_exception_copy.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002E114(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]

  v5 = (_QWORD *)a1;
  v2 = a2;
  if ( a2[3] >= 0x10uLL )
    v2 = (_QWORD *)*a2;
  v5 = v2;
  v6 = 1;
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(&v5);
  *(_QWORD *)a1 = &std::runtime_error::`vftable';
  return a1;
}
