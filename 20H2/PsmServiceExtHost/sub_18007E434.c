/*
 * XREFs of sub_18007E434 @ 0x18007E434
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 *     sub_18007E80C @ 0x18007E80C (sub_18007E80C.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

_QWORD *__fastcall sub_18007E434(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  sub_18001E380();
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    v3 = v2 - 91;
    sub_1800093A0((__int64)(v2 - 91), 0);
    sub_18001CC80((__int64)(v2 - 91), 0);
    sub_18000A110((__int64)(v2 - 91));
    v5 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_OWORD *)v2 = 0LL;
    *((_DWORD *)v3 + 192) = 0;
    if ( v3[74]-- == 1LL )
      sub_18000A1AC((__int64)(v2 - 99), v4);
  }
  return sub_18000F390();
}
