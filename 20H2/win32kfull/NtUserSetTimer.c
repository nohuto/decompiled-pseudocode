/*
 * XREFs of NtUserSetTimer @ 0x1C00CC860
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetTimer @ 0x1C00CCA00 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r15d
  __int64 v13; // rsi
  unsigned int v14; // ebx
  unsigned int v15; // edi
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // rsi
  unsigned int v20; // r8d
  int v21; // [rsp+50h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive()
    && (v10 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v9 = 0LL;
    v12 = ++gdwAtomicCheckSerial;
    v11 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v9 << 6) + gpAtomickCheckStacks) )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v19 = (unsigned __int64)(unsigned int)v9 << 6;
      *(_DWORD *)(v19 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v19 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v19 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v19 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v12 = v21;
  }
LABEL_5:
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
      v16 = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = 10;
  if ( a3 >= 0xA )
    v14 = a3;
  if ( v14 > 0x7FFFFFFF )
    v14 = 0x7FFFFFFF;
  v15 = a5;
  if ( a5 == 2147483637 )
  {
    v15 = 0x7FFFFFFF - v14;
  }
  else if ( a5 != -1 && (v14 + a5 < v14 || v14 + a5 > 0x7FFFFFFF) )
  {
    v16 = 0LL;
    UserSetLastError(87LL);
    goto LABEL_18;
  }
  if ( v13 && PsGetCurrentProcessWin32Process(v10, v9, v11) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL) )
  {
    UserSetLastError(5LL);
    v16 = 0LL;
  }
  else
  {
    v16 = InternalSetTimer(v13, a2, v14, a4, v15, 0);
  }
LABEL_18:
  v17 = gpresUser;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      v17 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v20 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v17 = v20;
            if ( *(_DWORD *)(((unsigned __int64)v20 << 6) + gpAtomickCheckStacks) == v12 )
              break;
            if ( ++v20 >= gdwAtomicCheckLogSize )
              goto LABEL_21;
          }
          v17 = (unsigned __int64)v20 << 6;
          *(_DWORD *)(v17 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v17);
  return v16;
}
