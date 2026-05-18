/*
 * XREFs of sub_1800ABE80 @ 0x1800ABE80
 * Callers:
 *     sub_1800ABE14 @ 0x1800ABE14 (sub_1800ABE14.c)
 *     sub_1800ABE80 @ 0x1800ABE80 (sub_1800ABE80.c)
 *     sub_1800B3BA0 @ 0x1800B3BA0 (sub_1800B3BA0.c)
 *     sub_18012CB1C @ 0x18012CB1C (sub_18012CB1C.c)
 * Callees:
 *     sub_1800784C0 @ 0x1800784C0 (sub_1800784C0.c)
 *     sub_1800ABE80 @ 0x1800ABE80 (sub_1800ABE80.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800ABE80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800ABE80(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800784C0(v6 + 4, 0);
  }
  return result;
}
