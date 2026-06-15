/*
 * XREFs of sub_18003D2B0 @ 0x18003D2B0
 * Callers:
 *     <none>
 * Callees:
 *     _o_free @ 0x18003A790 (_o_free.c)
 */

void __fastcall sub_18003D2B0()
{
  DeleteCriticalSection(&stru_18004F0F8);
  if ( qword_18004F120 )
  {
    o_free(qword_18004F120);
    qword_18004F120 = 0LL;
  }
  dword_18004F128 = 0;
  dword_18004F12C = 0;
}
