/*
 * XREFs of sub_1800693EC @ 0x1800693EC
 * Callers:
 *     sub_18007D230 @ 0x18007D230 (sub_18007D230.c)
 * Callees:
 *     sub_18013257C @ 0x18013257C (sub_18013257C.c)
 */

__int64 sub_1800693EC()
{
  if ( dword_18019E740 == 72 )
  {
    sub_18013257C(&qword_18019E778);
    DeleteCriticalSection(&stru_18019E748);
    dword_18019E740 = 0;
  }
  return sub_18013257C(&qword_18019E778);
}
