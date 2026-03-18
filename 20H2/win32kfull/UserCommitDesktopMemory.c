/*
 * XREFs of UserCommitDesktopMemory @ 0x1C01164E0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     GetDesktopView @ 0x1C003E860 (GetDesktopView.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // r9
  _QWORD *i; // rcx
  __int64 v15; // rcx
  __int64 j; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 CurrentProcessWin32Process; // rax
  _DWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-18h]
  int v24; // [rsp+38h] [rbp-10h]
  int v25; // [rsp+3Ch] [rbp-Ch]
  int v26; // [rsp+68h] [rbp+20h] BYREF

  v26 = 0;
  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v13 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v13 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_14;
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
LABEL_14:
    if ( !v13 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v26);
    if ( (int)result >= 0 )
      *a2 += v26;
  }
  else
  {
    v7 = *(unsigned int *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1232);
    if ( (v7 & 0x40) == 0 )
    {
      v10 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v7, v6, v8) + 704);
      if ( !v10 )
        goto LABEL_19;
      do
      {
        if ( *(_QWORD *)(v10[1] + 16LL) == a1 )
          break;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
      if ( !v10 )
      {
LABEL_19:
        v15 = grpWinStaList;
        if ( !grpWinStaList )
          return 3221225495LL;
        do
        {
          for ( j = *(_QWORD *)(v15 + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( *(_QWORD *)(j + 16) == a1 )
              goto LABEL_25;
          }
          v15 = *(_QWORD *)(v15 + 8);
        }
        while ( v15 );
LABEL_25:
        if ( !v15 )
          return 3221225495LL;
        v21[1] = 0;
        v21[0] = 1;
        v24 = 0;
        CurrentProcess = PsGetCurrentProcess(v15, v9, v11);
        v23 = j;
        v25 = 1;
        if ( (int)MapDesktop((__int64)v21) < 0 )
          return 3221225495LL;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v17, v19);
        if ( !GetDesktopView(CurrentProcessWin32Process, j) )
          return 3221225495LL;
      }
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
