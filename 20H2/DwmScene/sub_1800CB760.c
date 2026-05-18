/*
 * XREFs of sub_1800CB760 @ 0x1800CB760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     sub_18009ACD0 @ 0x18009ACD0 (sub_18009ACD0.c)
 *     sub_18009B9E0 @ 0x18009B9E0 (sub_18009B9E0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800CB760(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF

  sub_18009ACD0(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_18009ACD0(v6, a2);
    if ( *v4 )
      sub_18009B9E0(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_180063C48((__int64 *)(a1 + 256), (unsigned int *)&v8);
  return sub_180062590(a1, a2);
}
