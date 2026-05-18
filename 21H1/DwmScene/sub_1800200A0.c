/*
 * XREFs of sub_1800200A0 @ 0x1800200A0
 * Callers:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_1800200A0 @ 0x1800200A0 (sub_1800200A0.c)
 *     sub_180063B28 @ 0x180063B28 (sub_180063B28.c)
 * Callees:
 *     sub_1800200A0 @ 0x1800200A0 (sub_1800200A0.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800200A0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800200A0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180022FE0(v6 + 4, 0LL);
  }
  return result;
}
