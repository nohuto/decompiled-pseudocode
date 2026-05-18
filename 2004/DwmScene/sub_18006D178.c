/*
 * XREFs of sub_18006D178 @ 0x18006D178
 * Callers:
 *     sub_18006CF7C @ 0x18006CF7C (sub_18006CF7C.c)
 *     sub_18006D178 @ 0x18006D178 (sub_18006D178.c)
 *     sub_18007B9BC @ 0x18007B9BC (sub_18007B9BC.c)
 * Callees:
 *     sub_18006D178 @ 0x18006D178 (sub_18006D178.c)
 *     sub_180072244 @ 0x180072244 (sub_180072244.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D178(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006D178(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180072244(v6 + 4);
  }
  return result;
}
