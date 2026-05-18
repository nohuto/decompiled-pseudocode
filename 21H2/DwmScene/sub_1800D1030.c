/*
 * XREFs of sub_1800D1030 @ 0x1800D1030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067E60 @ 0x180067E60 (sub_180067E60.c)
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     sub_1800A05A0 @ 0x1800A05A0 (sub_1800A05A0.c)
 *     sub_1800A12B0 @ 0x1800A12B0 (sub_1800A12B0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D1030(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF

  sub_1800A05A0(*(_QWORD *)(a1 + 112), a2);
  v4 = (__int64 *)(a1 + 192);
  v5 = 4LL;
  do
  {
    v6 = *(v4 - 8);
    if ( v6 )
      sub_1800A05A0(v6, a2);
    if ( *v4 )
      sub_1800A12B0(*v4, a2);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v8 = a2;
  sub_180069518((__int64 *)(a1 + 256), (unsigned int *)&v8);
  return sub_180067E60(a1, a2);
}
