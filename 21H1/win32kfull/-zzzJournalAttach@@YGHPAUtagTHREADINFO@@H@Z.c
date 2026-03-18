/*
 * XREFs of ?zzzJournalAttach@@YGHPAUtagTHREADINFO@@H@Z @ 0x1526E3
 * Callers:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     _zzzSetWindowsHookEx@24 @ 0x13290 (_zzzSetWindowsHookEx@24.c)
 *     _zzzRegisterSystemThread@4 @ 0x152CC2 (_zzzRegisterSystemThread@4.c)
 * Callees:
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 */

int __fastcall zzzJournalAttach(int a1, int a2)
{
  int result; // eax
  int v5; // edx
  _DWORD **v6; // ecx
  _DWORD *i; // eax

  if ( a2 )
  {
    result = AllocQueue(a1, 0);
    v5 = result;
    if ( !result )
      return result;
    v6 = (_DWORD **)(*(_DWORD *)(a1 + 248) + 92);
    for ( i = *v6; i != v6; i = (_DWORD *)*i )
    {
      if ( (*(_BYTE *)(i - 35) & 0x81) == 0 )
      {
        *(i - 11) = v5;
        ++*(_DWORD *)(v5 + 288);
      }
    }
  }
  zzzReattachThreads(a2 != 0, 0, 0);
  return 1;
}
