/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YGHPAUHWND__@@@Z @ 0xE95CA
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _SetShellChangeNotifyHWND(HWND a1)
{
  PKTHREAD CurrentThread; // eax
  int v2; // esi
  int v3; // eax
  int v4; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 248);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 84);
      if ( v4 )
      {
        if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 424) == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 232)
                                                                               + 424)
          && *(_DWORD *)(PsGetCurrentProcessWin32Process() + 428) == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 232)
                                                                               + 428) )
        {
          *(_DWORD *)(**(_DWORD **)(v2 + 4) + 28) = a1;
          return 1;
        }
        UserSetLastError((struct _NT_TIB *)5);
      }
    }
  }
  return 0;
}
