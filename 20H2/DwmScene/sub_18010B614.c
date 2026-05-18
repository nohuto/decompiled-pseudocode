/*
 * XREFs of sub_18010B614 @ 0x18010B614
 * Callers:
 *     sub_180107A98 @ 0x180107A98 (sub_180107A98.c)
 *     sub_180107B48 @ 0x180107B48 (sub_180107B48.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18010B614(_QWORD *a1)
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
      sub_180065AF4(v3 + 2, 0);
      j_j__o_free(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return j_j__o_free(*a1);
}
