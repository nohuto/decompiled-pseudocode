/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1C021F3D8
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1C01FB120 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C001696C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021E958 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(unsigned int *a1, int a2)
{
  struct tagWINDOWSTATION *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct tagWINDOWSTATION *v8; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int v12; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax

  v4 = CheckClipboardAccess();
  v8 = v4;
  if ( !v4 || !*((_DWORD *)v4 + 34) || !*((_QWORD *)v4 + 16) )
    return 0LL;
  while ( a2 > 0 )
  {
    v10 = *a1;
    --a2;
    if ( *a1 )
    {
      v11 = *((_QWORD *)v8 + 16);
      v12 = *((_DWORD *)v8 + 34);
      while ( v12 )
      {
        --v12;
        if ( *(_DWORD *)v11 == v10 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
          if ( !(unsigned int)CheckClipboardAccessForIntegrityLevel(
                                *(_QWORD *)(v11 + 20),
                                *(_QWORD *)(CurrentProcessWin32Process + 880))
            && (unsigned int)IsFmtBlocked(v10) )
          {
            v17 = PsGetCurrentProcessWin32Process(v15, v14, v16);
            EtwTraceUIPIClipboardError(0LL, v17, v10, *(_QWORD *)(v11 + 20));
            break;
          }
          return v10;
        }
        v11 += 32LL;
      }
    }
    ++a1;
  }
  return 0xFFFFFFFFLL;
}
