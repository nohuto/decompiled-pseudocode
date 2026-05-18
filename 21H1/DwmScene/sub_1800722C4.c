/*
 * XREFs of sub_1800722C4 @ 0x1800722C4
 * Callers:
 *     sub_180125455 @ 0x180125455 (sub_180125455.c)
 *     sub_18012568C @ 0x18012568C (sub_18012568C.c)
 * Callees:
 *     sub_18006D054 @ 0x18006D054 (sub_18006D054.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800722C4(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_18006D054((__int64 *)(v1 + 16), v1 + 16);
    return j__o_free(v1);
  }
  return result;
}
