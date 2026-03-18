/*
 * XREFs of _FindWindowEx @ 0x1C006BAD0
 * Callers:
 *     NtUserFindWindowEx @ 0x1C006B6E0 (NtUserFindWindowEx.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006C710 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall FindWindowEx(__int64 ThreadDesktopWindow, __int64 a2, unsigned __int16 *a3, const wchar_t *a4)
{
  unsigned __int16 *v4; // rbx
  __int64 v7; // r15
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 *v11; // rdx
  int v12; // r10d
  __int64 v13; // r9
  struct tagWND *v15; // rbx
  struct tagBWL *v16; // rax
  struct tagBWL *v17; // r12
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  _QWORD *i; // rbx
  unsigned __int64 v22; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  _QWORD *v28; // r14
  unsigned __int64 v29; // rsi
  const wchar_t *v30; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned __int64 v38; // rdi
  unsigned int v39; // r8d
  __int16 v40; // [rsp+20h] [rbp-A8h]
  _QWORD *v41; // [rsp+28h] [rbp-A0h]
  int v42; // [rsp+E0h] [rbp+18h]
  int v44; // [rsp+F0h] [rbp+28h]

  v4 = a3;
  v7 = 0LL;
  v40 = 0;
  v44 = 0;
  if ( !a3 )
    goto LABEL_22;
  if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive() && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v8 = ++gdwAtomicCheckSerial;
    v37 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v37 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v37 >= gdwAtomicCheckLogSize )
          goto LABEL_6;
      }
      v38 = (unsigned __int64)v37 << 6;
      *(_DWORD *)(v38 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v38 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v38 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v38 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v8 = v42;
  }
LABEL_6:
  if ( ((unsigned __int64)v4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_16;
  v9 = 2147483646LL;
  v10 = 256LL;
  v11 = &gawchAtomScratch;
  v12 = 0;
  v13 = 0LL;
  while ( v10 )
  {
    if ( !v9 || !*v4 )
      goto LABEL_12;
    *v11++ = *v4++;
    --v10;
    --v9;
    ++v13;
  }
  --v11;
  v12 = -2147483643;
LABEL_12:
  *v11 = 0;
  if ( v12 < 0 )
  {
    LOWORD(v4) = 0;
LABEL_16:
    v40 = (__int16)v4;
    goto LABEL_17;
  }
  LOWORD(v4) = UserFindAtom(&gawchAtomScratch);
  v40 = (__int16)v4;
LABEL_17:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v39 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v39 << 6) + gpAtomickCheckStacks) != v8 )
          {
            if ( ++v39 >= gdwAtomicCheckLogSize )
              goto LABEL_20;
          }
          *(_DWORD *)(((unsigned __int64)v39 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_20:
  if ( !(_WORD)v4 )
    return 0LL;
LABEL_22:
  if ( !ThreadDesktopWindow )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( !a2 )
      v44 = 1;
  }
  while ( 1 )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 104) != ThreadDesktopWindow )
        return 0LL;
      v15 = *(struct tagWND **)(a2 + 88);
    }
    else
    {
      v15 = *(struct tagWND **)(ThreadDesktopWindow + 112);
    }
    v16 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v16 = (struct tagBWL *)Win32AllocPool(296LL, 1819767637LL);
      if ( !v16 )
        return 0LL;
      *((_QWORD *)v16 + 2) = (char *)v16 + 280;
    }
    *((_QWORD *)v16 + 1) = (char *)v16 + 32;
    *((_QWORD *)v16 + 3) = 0LL;
    v17 = InternalBuildHwndList(v16, v15, 2u);
    v18 = (_QWORD *)*((_QWORD *)v17 + 1);
    if ( (unsigned __int64)v18 >= *((_QWORD *)v17 + 2) )
    {
      Win32FreePool(v17);
      return 0LL;
    }
    *v18 = 1LL;
    *((_QWORD *)v17 + 3) = gptiCurrent;
    v19 = gpbwlList;
    *(_QWORD *)v17 = gpbwlList;
    gpbwlList = v17;
    v20 = 0LL;
    for ( i = (_QWORD *)((char *)v17 + 32); ; i = v41 + 1 )
    {
      v41 = i;
      v22 = *i;
      if ( *i == 1LL )
        break;
      v20 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v19)
        || (CurrentProcess = PsGetCurrentProcess(v25, v24, v26),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        PsGetThreadWin32Thread(CurrentThread);
      }
      v19 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v22 < *(_QWORD *)(gpsi + 8LL) )
      {
        v27 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v22 * LODWORD(gSharedInfo[2]);
        v28 = (_QWORD *)HMPkheFromPhe(v27);
        v29 = v22 >> 16;
        if ( ((_WORD)v29 == *(_WORD *)(v27 + 26)
           || (_WORD)v29 == 0xFFFF
           || !(_WORD)v29 && PsGetCurrentProcessWow64Process(v19))
          && (*(_BYTE *)(v27 + 25) & 1) == 0
          && *(_BYTE *)(v27 + 24) == 1 )
        {
          v20 = (_QWORD *)*v28;
        }
      }
      if ( v20 )
      {
        if ( !v40 || (v19 = *(_QWORD *)(v20[17] + 8LL), v40 == *(_WORD *)(v19 + 2)) )
        {
          if ( !a4
            || (!*(_DWORD *)(v20[5] + 184LL) ? (v30 = (const wchar_t *)szNull) : (v30 = (const wchar_t *)v20[23]),
                !_wcsicmp(a4, v30)) )
          {
            i = v41;
            break;
          }
        }
        v20 = 0LL;
      }
    }
    FreeHwndList(v17);
    if ( v20 || !v44 )
      break;
    v44 = 0;
    ThreadDesktopWindow = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v36 = *(_QWORD *)(ThreadWin32Thread + 448);
      if ( v36 )
        ThreadDesktopWindow = *(_QWORD *)(v36 + 104);
    }
    a2 = 0LL;
  }
  if ( *i != 1LL )
    return v20;
  return (_QWORD *)v7;
}
