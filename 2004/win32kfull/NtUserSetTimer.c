/*
 * XREFs of NtUserSetTimer @ 0x1C0089280
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetTimer @ 0x1C0089420 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned int v15; // edi
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned int v19; // edx
  unsigned __int64 v20; // rsi
  int v21; // [rsp+50h] [rbp+8h]

  EnterCrit(0LL, 1LL);
  if ( gpresUser
    && (unsigned int)UserIsUserCritSecInExclusive()
    && (v9 = gpAtomickCheckStacks, ++gdwInAtomicOperation, gpAtomickCheckStacks) )
  {
    v19 = 0;
    v10 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v19 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v19 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v20 = (unsigned __int64)v19 << 6;
      *(_DWORD *)(v20 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v20 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v20 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v20 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v10 = v21;
  }
LABEL_5:
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      v16 = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    v12 = 0LL;
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
  if ( v12 && PsGetCurrentProcessWin32Process(v9) != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL) )
  {
    UserSetLastError(5LL);
    v16 = 0LL;
  }
  else
  {
    v16 = InternalSetTimer(v12, a2, v14, a4, v15, 0);
  }
LABEL_18:
  v17 = gpresUser;
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive() )
    {
      --gdwInAtomicOperation;
      v17 = gpAtomickCheckStacks;
      v11 = gpAtomickCheckStacks;
      if ( gpAtomickCheckStacks )
      {
        v13 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( 1 )
          {
            v17 = (unsigned int)v13;
            if ( *(_DWORD *)(((unsigned __int64)(unsigned int)v13 << 6) + gpAtomickCheckStacks) == v10 )
              break;
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 >= gdwAtomicCheckLogSize )
              goto LABEL_21;
          }
          v17 = (unsigned __int64)(unsigned int)v13 << 6;
          *(_DWORD *)(v17 + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v17, v11, v13);
  return v16;
}
