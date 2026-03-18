/*
 * XREFs of __PostUIActions@4 @ 0x16D7D6
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

unsigned int __stdcall _PostUIActions(unsigned int a1)
{
  int CurrentProcessWin32Process; // eax
  int v2; // ecx
  int v3; // edx

  if ( a1 > 2 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      v2 = *(_DWORD *)(_gptiCurrent + 248);
      if ( v2 )
      {
        v3 = *(_DWORD *)(v2 + 144);
        if ( v3 )
        {
          if ( v2 == _grpdeskRitInput )
            return _PostMessage(v3, 814, a1, 0);
        }
      }
    }
    UserSetLastError((struct _NT_TIB *)5);
  }
  return 0;
}
