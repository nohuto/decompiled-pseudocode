/*
 * XREFs of _RegisterKeyboardCorrectionCallout @ 0x1C0207B90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall RegisterKeyboardCorrectionCallout(__int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  _BOOL8 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  v7 = a2 != 0;
  if ( a2 != v7 )
  {
LABEL_14:
    v10 = 87LL;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x88) == 0 )
  {
    v8 = *(_QWORD *)(gptiCurrent + 448LL) + 248LL;
    if ( a2 != (*(_QWORD *)v8 != 0LL)
      && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) == CurrentProcessWin32Process
      && (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
      && *(int *)(v6 + 12) < 0 )
    {
      if ( a2 )
      {
        v11[0] = v8;
        v11[1] = a1;
        HMAssignmentLock(v11);
        return 1LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 416LL) == v6 )
      {
        if ( *(_QWORD *)v8 == a1 )
        {
          HMAssignmentUnlock(v8);
          return 1LL;
        }
        goto LABEL_14;
      }
    }
  }
  v10 = 5LL;
LABEL_15:
  UserSetLastError(v10, v5, v7);
  return 0LL;
}
