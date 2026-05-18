/*
 * XREFs of sub_18002C9F8 @ 0x18002C9F8
 * Callers:
 *     sub_18002C9F8 @ 0x18002C9F8 (sub_18002C9F8.c)
 *     sub_18002E2FC @ 0x18002E2FC (sub_18002E2FC.c)
 *     sub_18002E35C @ 0x18002E35C (sub_18002E35C.c)
 *     sub_1800318D8 @ 0x1800318D8 (sub_1800318D8.c)
 * Callees:
 *     sub_18002C9F8 @ 0x18002C9F8 (sub_18002C9F8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002C9F8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18002C9F8(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
