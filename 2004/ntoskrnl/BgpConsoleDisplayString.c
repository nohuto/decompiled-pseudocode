/*
 * XREFs of BgpConsoleDisplayString @ 0x1409F3B60
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     BgpConsoleDisplayCharacterEx @ 0x1409F38C4 (BgpConsoleDisplayCharacterEx.c)
 */

__int64 __fastcall BgpConsoleDisplayString(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  unsigned __int16 v5; // cx
  int v6; // eax

  BgpFwAcquireLock();
  v2 = qword_140CDAF58;
  if ( qword_140CDAF58 )
  {
    if ( a1 )
    {
      v5 = *a1;
      if ( *a1 )
      {
        if ( (*(_DWORD *)(qword_140CDAF58 + 8) & 0x10000) != 0 )
        {
          AnFwFadeCompletion();
          v2 = qword_140CDAF58;
          *(_DWORD *)(qword_140CDAF58 + 8) &= ~0x10000u;
          v5 = *a1;
        }
        v3 = 0;
        if ( v5 )
        {
          while ( 1 )
          {
            v6 = BgpConsoleDisplayCharacterEx(
                   v5,
                   *(_DWORD *)(v2 + 68),
                   *(_DWORD *)(v2 + 72),
                   *(_DWORD *)(v2 + 12),
                   *(_DWORD *)(v2 + 16));
            if ( v6 < 0 && v3 >= 0 )
              v3 = v6;
            v5 = *++a1;
            if ( !*a1 )
              break;
            v2 = qword_140CDAF58;
          }
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return (unsigned int)v3;
}
