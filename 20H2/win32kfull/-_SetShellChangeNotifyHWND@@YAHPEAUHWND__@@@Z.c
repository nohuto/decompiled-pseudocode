/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C012CA20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(HWND a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 168);
      if ( v7 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2, v5);
        v10 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL);
        v11 = *(unsigned int *)(v10 + 780);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 780) == (_DWORD)v11 )
        {
          v12 = PsGetCurrentProcessWin32Process(v11, v10, v9);
          v10 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL);
          if ( *(_DWORD *)(v12 + 784) == *(_DWORD *)(v10 + 784) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v4 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5LL, v10, v9);
      }
    }
  }
  return 0LL;
}
