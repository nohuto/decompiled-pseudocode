/*
 * XREFs of __RegisterKeyboardCorrectionCallout@8 @ 0x16D83A
 * Callers:
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _RegisterKeyboardCorrectionCallout(int a1, int a2)
{
  int CurrentProcessWin32Process; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edx
  int v6; // ecx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v3 = CurrentProcessWin32Process;
  if ( a2 != (a2 != 0) )
  {
LABEL_14:
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  if ( (*(_BYTE *)(CurrentProcessWin32Process + 8) & 0x88) == 0 )
  {
    v4 = *(_DWORD *)(_gptiCurrent + 248) + 144;
    if ( a2 != (*(_DWORD *)v4 != 0)
      && *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) == CurrentProcessWin32Process
      && IsImmersiveBroker(CurrentProcessWin32Process)
      && *(int *)(v3 + 8) < 0 )
    {
      if ( a2 )
      {
        HMAssignmentLock(v6, v5);
        return 1;
      }
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 8) + 232) == v3 )
      {
        if ( *(_DWORD *)v4 == a1 )
        {
          HMAssignmentUnlock(v4);
          return 1;
        }
        goto LABEL_14;
      }
    }
  }
  UserSetLastError((struct _NT_TIB *)5);
  return 0;
}
