/*
 * XREFs of sub_18012FA10 @ 0x18012FA10
 * Callers:
 *     sub_180074FE0 @ 0x180074FE0 (sub_180074FE0.c)
 *     sub_180074FF0 @ 0x180074FF0 (sub_180074FF0.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_180075010 @ 0x180075010 (sub_180075010.c)
 *     sub_180075020 @ 0x180075020 (sub_180075020.c)
 *     sub_180075030 @ 0x180075030 (sub_180075030.c)
 *     sub_180075040 @ 0x180075040 (sub_180075040.c)
 *     sub_180075050 @ 0x180075050 (sub_180075050.c)
 *     sub_180075060 @ 0x180075060 (sub_180075060.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012FA10(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  if ( !v2 )
    v2 = a1 - 8;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
