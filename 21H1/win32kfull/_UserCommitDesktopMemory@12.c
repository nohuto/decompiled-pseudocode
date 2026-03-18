/*
 * XREFs of _UserCommitDesktopMemory@12 @ 0xAAE84
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 */

int __stdcall UserCommitDesktopMemory(int a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // eax
  PKTHREAD v4; // eax
  _DWORD *v5; // ecx
  int result; // eax
  int v7; // eax
  _DWORD *i; // ecx
  int v9; // eax
  int j; // esi
  int CurrentProcessWin32Process; // eax
  _DWORD v12[5]; // [esp+4h] [ebp-18h] BYREF
  int v13; // [esp+18h] [ebp-4h] BYREF

  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( PsIsSystemThread(CurrentThread) )
  {
    v7 = _grpWinStaList;
    if ( !_grpWinStaList )
      return -1073741801;
    do
    {
      for ( i = *(_DWORD **)(v7 + 8); i; i = (_DWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_16;
      }
      v7 = *(_DWORD *)(v7 + 4);
    }
    while ( v7 );
LABEL_16:
    if ( !v7 )
      return -1073741801;
    result = CommitReadOnlyMemory(i[15], a3, *a2 - a1, &v13);
    if ( result >= 0 )
      *a2 += v13;
  }
  else
  {
    v4 = KeGetCurrentThread();
    if ( (*(_BYTE *)(W32GetThreadWin32Thread(v4) + 688) & 0x40) == 0 )
    {
      v5 = *(_DWORD **)(PsGetCurrentProcessWin32Process() + 384);
      if ( !v5 )
        goto LABEL_19;
      do
      {
        if ( *(_DWORD *)(v5[1] + 8) == a1 )
          break;
        v5 = (_DWORD *)*v5;
      }
      while ( v5 );
      if ( !v5 )
      {
LABEL_19:
        v9 = _grpWinStaList;
        if ( !_grpWinStaList )
          return -1073741801;
        do
        {
          for ( j = *(_DWORD *)(v9 + 8); j; j = *(_DWORD *)(j + 16) )
          {
            if ( *(_DWORD *)(j + 8) == a1 )
              goto LABEL_25;
          }
          v9 = *(_DWORD *)(v9 + 4);
        }
        while ( v9 );
LABEL_25:
        if ( !v9 )
          return -1073741801;
        v12[0] = 1;
        v12[3] = 0;
        v12[1] = PsGetCurrentProcess();
        v12[2] = j;
        v12[4] = 1;
        if ( MapDesktop(v12) < 0 )
          return -1073741801;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        if ( !GetDesktopView(CurrentProcessWin32Process, j) )
          return -1073741801;
      }
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
