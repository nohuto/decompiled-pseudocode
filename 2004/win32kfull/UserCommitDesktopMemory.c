/*
 * XREFs of UserCommitDesktopMemory @ 0x1C0114F50
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     GetDesktopView @ 0x1C0026530 (GetDesktopView.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserCommitDesktopMemory(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // r9
  _QWORD *i; // rcx
  __int64 v13; // rcx
  __int64 j; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 CurrentProcess; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]
  int v20; // [rsp+38h] [rbp-10h]
  int v21; // [rsp+3Ch] [rbp-Ch]
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v22 = 0;
  if ( PsIsSystemThread(KeGetCurrentThread()) )
  {
    v11 = grpWinStaList;
    if ( !grpWinStaList )
      return 3221225495LL;
    do
    {
      for ( i = *(_QWORD **)(v11 + 16); i; i = (_QWORD *)i[4] )
      {
        if ( i[2] == a1 )
          goto LABEL_14;
      }
      v11 = *(_QWORD *)(v11 + 8);
    }
    while ( v11 );
LABEL_14:
    if ( !v11 )
      return 3221225495LL;
    result = CommitReadOnlyMemory(i[15], a3, (unsigned int)(*(_DWORD *)a2 - a1), &v22);
    if ( (int)result >= 0 )
      *a2 += v22;
  }
  else
  {
    v6 = *(unsigned int *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    if ( (v6 & 0x40) == 0 )
    {
      v8 = *(_QWORD **)(PsGetCurrentProcessWin32Process(v6) + 704);
      if ( !v8 )
        goto LABEL_19;
      do
      {
        if ( *(_QWORD *)(v8[1] + 16LL) == a1 )
          break;
        v8 = (_QWORD *)*v8;
      }
      while ( v8 );
      if ( !v8 )
      {
LABEL_19:
        v13 = grpWinStaList;
        if ( !grpWinStaList )
          return 3221225495LL;
        do
        {
          for ( j = *(_QWORD *)(v13 + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( *(_QWORD *)(j + 16) == a1 )
              goto LABEL_25;
          }
          v13 = *(_QWORD *)(v13 + 8);
        }
        while ( v13 );
LABEL_25:
        if ( !v13 )
          return 3221225495LL;
        v17[1] = 0;
        v17[0] = 1;
        v20 = 0;
        CurrentProcess = PsGetCurrentProcess(v13, v7, v9);
        v19 = j;
        v21 = 1;
        if ( (int)MapDesktop((__int64)v17) < 0 )
          return 3221225495LL;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
        if ( !GetDesktopView(CurrentProcessWin32Process, j) )
          return 3221225495LL;
      }
    }
    return MmCommitSessionMappedView(*a2, *a3);
  }
  return result;
}
