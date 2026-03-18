/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C01FCE20
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C005A29C (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C005A31C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021F7E8 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  _DWORD *v7; // rdx
  ULONG64 v8; // rcx
  ULONG64 v9; // r8
  struct tagWINDOWSTATION *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r15d
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // r10
  int v18; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = CheckClipboardAccess();
  if ( v10 )
  {
    v11 = PsGetCurrentProcessWin32Process(v8);
    v9 = (unsigned int)CountNumClipFormatForIL(*(_QWORD *)(v11 + 880), (__int64)v10);
    v7 = (_DWORD *)MmUserProbeAddress;
    v8 = (ULONG64)a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    *a3 = v9;
    if ( a2 >= (unsigned int)v9 )
    {
      v12 = 0;
      v13 = 0;
      v18 = 0;
      while ( v12 < *((_DWORD *)v10 + 34) && v13 < a2 )
      {
        v14 = 32LL * v12;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(v14 + *((_QWORD *)v10 + 16) + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 880))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(v14 + *((_QWORD *)v10 + 16))) )
        {
          v9 = a1 + 4LL * v13;
          v7 = (_DWORD *)v9;
          if ( v9 >= MmUserProbeAddress )
            v7 = (_DWORD *)MmUserProbeAddress;
          *v7 = *v7;
          v8 = *(unsigned int *)(v14 + *((_QWORD *)v10 + 16));
          *(_DWORD *)v9 = v8;
          v13 = ++v18;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v15, *(_QWORD *)(v14 + v16 + 20));
        }
        ++v12;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL, MmUserProbeAddress, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v6;
}
