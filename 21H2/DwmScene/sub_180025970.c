/*
 * XREFs of sub_180025970 @ 0x180025970
 * Callers:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 * Callees:
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_1800288B0 @ 0x1800288B0 (sub_1800288B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180025970(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180025970(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800288B0(v6 + 4, 0LL);
  }
  return result;
}
