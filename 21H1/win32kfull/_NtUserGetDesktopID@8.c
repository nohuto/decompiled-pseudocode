/*
 * XREFs of _NtUserGetDesktopID@8 @ 0xA653A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetDesktopID(int a1, ULONG a2)
{
  int v2; // esi
  _DWORD ***v3; // edi
  int CurrentProcess; // eax
  _DWORD *v5; // ecx
  _DWORD *v7; // eax

  v2 = 0;
  v3 = 0;
  EnterSharedCrit(0, 1);
  CurrentProcess = PsGetCurrentProcess();
  if ( !IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_10;
  }
  if ( a1 == 1 )
  {
    v7 = (_DWORD *)_grpdeskRitInput;
  }
  else
  {
    if ( a1 != 2 )
    {
      if ( a1 == 4 )
        v3 = (_DWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v7 = (_DWORD *)_grpdeskIODefault;
  }
  v3 = (_DWORD ***)*v7;
LABEL_6:
  if ( v3 )
  {
    v5 = (_DWORD *)a2;
    if ( a2 >= _MmUserProbeAddress )
      v5 = (_DWORD *)_MmUserProbeAddress;
    *v5 = **v3[1];
    v2 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v2;
}
