/*
 * XREFs of _NtUserMagControl@8 @ 0x1663B8
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _MagControl@16 @ 0x13CA3F (_MagControl@16.c)
 */

int __stdcall NtUserMagControl(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  NTSTATUS v4; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct _NT_TIB *v7; // eax

  v2 = 1;
  EnterCrit(0, 1);
  if ( a2 )
  {
    v3 = ValidateHwnd(a2);
    if ( !v3 )
    {
      v4 = -1073741811;
LABEL_6:
      v2 = 0;
      v7 = (struct _NT_TIB *)RtlNtStatusToDosError(v4);
      UserSetLastError(v7);
      goto LABEL_7;
    }
  }
  else
  {
    v3 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = MagControl(_gMagnContext, ThreadWin32Thread, a1, v3);
  if ( v4 < 0 )
    goto LABEL_6;
LABEL_7:
  UserSessionSwitchLeaveCrit();
  return v2;
}
