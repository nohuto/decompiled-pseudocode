/*
 * XREFs of BgpConsoleSetCursor @ 0x1409F7FE0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x1409F7C1C (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = (_DWORD *)qword_140CDB198;
  v7 = 0;
  if ( qword_140CDB198 )
  {
    if ( a1 >= 0x50 || a2 >= *(_DWORD *)(qword_140CDB198 + 4) || a3 > 0x64 )
    {
      v7 = -1073741811;
    }
    else if ( *(_DWORD *)(qword_140CDB198 + 68) != a1
           || *(_DWORD *)(qword_140CDB198 + 72) != a2
           || *(_DWORD *)(qword_140CDB198 + 76) != a3 )
    {
      if ( *(_DWORD *)(qword_140CDB198 + 76) )
      {
        *(_DWORD *)(qword_140CDB198 + 76) = 0;
        BgpConsoleDrawCursor();
        v6 = (_DWORD *)qword_140CDB198;
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
