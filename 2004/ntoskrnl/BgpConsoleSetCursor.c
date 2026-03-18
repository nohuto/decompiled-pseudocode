/*
 * XREFs of BgpConsoleSetCursor @ 0x1409F3FE0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x1409F3C1C (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = (_DWORD *)qword_140CDAF58;
  v7 = 0;
  if ( qword_140CDAF58 )
  {
    if ( a1 >= 0x50 || a2 >= *(_DWORD *)(qword_140CDAF58 + 4) || a3 > 0x64 )
    {
      v7 = -1073741811;
    }
    else if ( *(_DWORD *)(qword_140CDAF58 + 68) != a1
           || *(_DWORD *)(qword_140CDAF58 + 72) != a2
           || *(_DWORD *)(qword_140CDAF58 + 76) != a3 )
    {
      if ( *(_DWORD *)(qword_140CDAF58 + 76) )
      {
        *(_DWORD *)(qword_140CDAF58 + 76) = 0;
        BgpConsoleDrawCursor();
        v6 = (_DWORD *)qword_140CDAF58;
      }
      v6[17] = a1;
      v6[18] = a2;
      v6[19] = a3;
      if ( a3 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
