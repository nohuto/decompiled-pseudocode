/*
 * XREFs of sub_1800220C8 @ 0x1800220C8
 * Callers:
 *     sub_180021558 @ 0x180021558 (sub_180021558.c)
 * Callees:
 *     sub_18002213C @ 0x18002213C (sub_18002213C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800220C8(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v4 = 0;
  sub_18002213C(a1, sub_180022130, &v4);
  if ( v4 || *(_WORD *)(*(_QWORD *)(a1 + 24) + 6LL) )
    return 1;
  return v1;
}
