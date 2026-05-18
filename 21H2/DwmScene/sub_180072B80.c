/*
 * XREFs of sub_180072B80 @ 0x180072B80
 * Callers:
 *     sub_180072924 @ 0x180072924 (sub_180072924.c)
 *     sub_180072B80 @ 0x180072B80 (sub_180072B80.c)
 * Callees:
 *     sub_18006B43C @ 0x18006B43C (sub_18006B43C.c)
 *     sub_180072B80 @ 0x180072B80 (sub_180072B80.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072B80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180072B80(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18006B43C(v6 + 4, 0);
  }
  return result;
}
