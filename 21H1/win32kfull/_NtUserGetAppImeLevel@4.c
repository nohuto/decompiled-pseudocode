/*
 * XREFs of _NtUserGetAppImeLevel@4 @ 0x161BCA
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserGetAppImeLevel(int a1)
{
  int Prop; // esi
  int v2; // edi
  PKTHREAD CurrentThread; // eax

  Prop = 0;
  EnterSharedCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    if ( (*_gpsi & 4) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) == *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 232) )
        Prop = _GetProp(v2, (unsigned __int16)atomImeLevel, 1);
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x78);
    }
  }
  UserSessionSwitchLeaveCrit();
  return Prop;
}
