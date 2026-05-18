/*
 * XREFs of sub_180084C3C @ 0x180084C3C
 * Callers:
 *     sub_180084BD0 @ 0x180084BD0 (sub_180084BD0.c)
 *     sub_180084C3C @ 0x180084C3C (sub_180084C3C.c)
 * Callees:
 *     sub_180084C3C @ 0x180084C3C (sub_180084C3C.c)
 *     sub_180085BC4 @ 0x180085BC4 (sub_180085BC4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180084C3C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180084C3C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180085BC4(v6 + 4);
  }
  return result;
}
