/*
 * XREFs of sub_180110EE4 @ 0x180110EE4
 * Callers:
 *     sub_18010D368 @ 0x18010D368 (sub_18010D368.c)
 *     sub_18010D418 @ 0x18010D418 (sub_18010D418.c)
 * Callees:
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180110EE4(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_18006B3C4(v3 + 2, 0);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
