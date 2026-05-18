/*
 * XREFs of sub_18006A14C @ 0x18006A14C
 * Callers:
 *     sub_18006A028 @ 0x18006A028 (sub_18006A028.c)
 *     sub_18006A14C @ 0x18006A14C (sub_18006A14C.c)
 * Callees:
 *     sub_18006A14C @ 0x18006A14C (sub_18006A14C.c)
 *     sub_18006B43C @ 0x18006B43C (sub_18006B43C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006A14C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006A14C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18006B43C(v6 + 4, 0LL);
  }
  return result;
}
