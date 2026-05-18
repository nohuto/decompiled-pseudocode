/*
 * XREFs of sub_180020058 @ 0x180020058
 * Callers:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     sub_180021DD0 @ 0x180021DD0 (sub_180021DD0.c)
 *     sub_180021F18 @ 0x180021F18 (sub_180021F18.c)
 *     sub_180022184 @ 0x180022184 (sub_180022184.c)
 *     sub_180062770 @ 0x180062770 (sub_180062770.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     sub_18008BD60 @ 0x18008BD60 (sub_18008BD60.c)
 *     sub_1800CFD70 @ 0x1800CFD70 (sub_1800CFD70.c)
 *     sub_1800D0338 @ 0x1800D0338 (sub_1800D0338.c)
 *     sub_1800EEC54 @ 0x1800EEC54 (sub_1800EEC54.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180020058(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180020058(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
