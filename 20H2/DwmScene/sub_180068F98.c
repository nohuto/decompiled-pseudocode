/*
 * XREFs of sub_180068F98 @ 0x180068F98
 * Callers:
 *     sub_180068F2C @ 0x180068F2C (sub_180068F2C.c)
 *     sub_180068F98 @ 0x180068F98 (sub_180068F98.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_180068F98 @ 0x180068F98 (sub_180068F98.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180068F98(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180068F98(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180012938(v6 + 5);
  }
  return result;
}
