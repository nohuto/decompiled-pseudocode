/*
 * XREFs of sub_180069438 @ 0x180069438
 * Callers:
 *     sub_18007D220 @ 0x18007D220 (sub_18007D220.c)
 * Callees:
 *     _o_free @ 0x18006AB44 (_o_free.c)
 */

void sub_180069438()
{
  DeleteCriticalSection(&stru_18019E708);
  if ( qword_18019E730 )
  {
    o_free(qword_18019E730);
    qword_18019E730 = 0LL;
  }
  dword_18019E738 = 0;
  dword_18019E73C = 0;
}
