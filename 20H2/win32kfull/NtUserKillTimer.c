/*
 * XREFs of NtUserKillTimer @ 0x1C00C7840
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00C96F8 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r15d
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD **v11; // rsi
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v21; // [rsp+40h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive()
    && (v6 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v5 = 0LL;
    v7 = ++gdwAtomicCheckSerial;
    v4 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      v6 = gpAtomickCheckStacks;
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= gdwAtomicCheckLogSize )
          goto LABEL_11;
      }
      v8 = (unsigned __int64)(unsigned int)v5 << 6;
      *(_DWORD *)(v8 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v8 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v8 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v8 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v7 = v21;
  }
LABEL_11:
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
    {
      v10 = 0LL;
      goto LABEL_36;
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = 0LL;
  v11 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v9)) & 0x3F));
  v12 = *v11;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      if ( *(v12 - 3) == v9 && *(v12 - 2) == a2 )
      {
        v13 = *((_DWORD *)v12 - 16);
        if ( (v13 & 6) == 0 )
        {
          if ( (v13 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6);
          v5 = *(v12 - 11);
          if ( CurrentProcessWin32Process == *(_QWORD *)(v5 + 424) || !v9 && (*(_BYTE *)(v12 - 8) & 4) == 0 )
            break;
        }
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        goto LABEL_36;
    }
    if ( (unsigned int)HMMarkObjectDestroy(v12 - 14) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
      if ( (*(_DWORD *)(v12 - 8) & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(v12 - 14));
      v15 = *(v12 - 5);
      v16 = v12 - 5;
      if ( *(_QWORD **)(v15 + 8) != v12 - 5
        || (v17 = (_QWORD *)v16[1], (_QWORD *)*v17 != v16)
        || (*v17 = v15, *(_QWORD *)(v15 + 8) = v17, v18 = *v12, *(_QWORD **)(*v12 + 8LL) != v12)
        || (v19 = (_QWORD *)v12[1], (_QWORD *)*v19 != v12) )
      {
        __fastfail(3u);
      }
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( !*(v12 - 3) )
        _bittestandreset(gTimerId, *((_DWORD *)v12 - 4) - 256);
      EtwTraceKillTimer(v12 - 14);
      HMAssignmentUnlock(v12 - 3);
      HMFreeObject(v12 - 14);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
    }
    v10 = 1LL;
  }
LABEL_36:
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v5 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) != v7 )
          {
            v5 = (unsigned int)(v5 + 1);
            if ( (unsigned int)v5 >= gdwAtomicCheckLogSize )
              goto LABEL_45;
          }
          *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_45:
  UserSessionSwitchLeaveCrit(v5);
  return v10;
}
