/*
 * XREFs of _RegisterKeyboardCorrectionCallout @ 0x1C0206D20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall RegisterKeyboardCorrectionCallout(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  _BOOL8 v8; // r8
  __int64 v9; // rbx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v7 = CurrentProcessWin32Process;
  v8 = v3 != 0;
  if ( v3 != v8 )
  {
LABEL_14:
    v11 = 87LL;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x88) == 0 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 456LL) + 248LL;
    if ( v3 != (*(_QWORD *)v9 != 0LL)
      && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == CurrentProcessWin32Process
      && (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
      && *(int *)(v7 + 12) < 0 )
    {
      if ( v3 )
      {
        v12[0] = v9;
        v12[1] = a1;
        HMAssignmentLock(v12);
        return 1LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 424LL) == v7 )
      {
        if ( *(_QWORD *)v9 == a1 )
        {
          HMAssignmentUnlock(v9);
          return 1LL;
        }
        goto LABEL_14;
      }
    }
  }
  v11 = 5LL;
LABEL_15:
  UserSetLastError(v11, v6, v8);
  return 0LL;
}
