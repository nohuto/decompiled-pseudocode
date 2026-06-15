/*
 * XREFs of sub_18003D300 @ 0x18003D300
 * Callers:
 *     <none>
 * Callees:
 *     _o_free @ 0x18003A790 (_o_free.c)
 */

void __fastcall sub_18003D300()
{
  if ( dword_18004F5C0 == 72 )
  {
    if ( qword_18004F5F8 )
    {
      o_free(qword_18004F5F8);
      qword_18004F5F8 = 0LL;
    }
    dword_18004F600 = 0;
    dword_18004F604 = 0;
    DeleteCriticalSection(&stru_18004F5C8);
    dword_18004F5C0 = 0;
  }
  if ( qword_18004F5F8 )
  {
    o_free(qword_18004F5F8);
    qword_18004F5F8 = 0LL;
  }
  dword_18004F600 = 0;
  dword_18004F604 = 0;
}
