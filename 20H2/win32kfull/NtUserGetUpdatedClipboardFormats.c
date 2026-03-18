/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01FBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00168EC (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C001696C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021E958 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r12d
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct tagWINDOWSTATION *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned int v14; // r15d
  __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // r10
  _DWORD *v18; // r8
  _DWORD *v19; // rdx
  int v21; // [rsp+20h] [rbp-58h]

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = CheckClipboardAccess();
  if ( v10 )
  {
    v11 = PsGetCurrentProcessWin32Process(v8, v7, v9);
    v12 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v11 + 880), (__int64)v10);
    v8 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    *a3 = v12;
    if ( v4 >= (unsigned int)v12 )
    {
      v13 = 0;
      v14 = 0;
      v21 = 0;
      while ( v13 < *((_DWORD *)v10 + 34) && v14 < v4 )
      {
        v15 = 32LL * v13;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v15 + *((_QWORD *)v10 + 16) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 880))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v15 + *((_QWORD *)v10 + 16))) )
        {
          v18 = (_DWORD *)(a1 + 4LL * v14);
          v19 = v18;
          if ( (unsigned __int64)v18 >= MmUserProbeAddress )
            v19 = (_DWORD *)MmUserProbeAddress;
          *v19 = *v19;
          v8 = *(unsigned int *)(v15 + *((_QWORD *)v10 + 16));
          *v18 = v8;
          v14 = ++v21;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v16, *(_QWORD *)(v15 + v17 + 20));
        }
        ++v13;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
