/*
 * XREFs of sub_180072B24 @ 0x180072B24
 * Callers:
 *     sub_1800728B8 @ 0x1800728B8 (sub_1800728B8.c)
 *     sub_180072B24 @ 0x180072B24 (sub_180072B24.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180072B24 @ 0x180072B24 (sub_180072B24.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072B24(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180072B24(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    unknown_libname_103(v6 + 8);
  }
  return result;
}
