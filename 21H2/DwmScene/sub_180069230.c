/*
 * XREFs of sub_180069230 @ 0x180069230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067E60 @ 0x180067E60 (sub_180067E60.c)
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     sub_1800A05A0 @ 0x1800A05A0 (sub_1800A05A0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180069230(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  sub_180069518(a1 + 120, &v7);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    sub_1800A05A0(v4, a2);
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    sub_1800A05A0(v5, a2);
  return sub_180067E60(a1, a2);
}
