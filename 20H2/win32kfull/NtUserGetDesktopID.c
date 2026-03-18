/*
 * XREFs of NtUserGetDesktopID @ 0x1C010D890
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD ***v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  int v14; // edi
  _QWORD *v16; // rax

  v4 = 0;
  v5 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v10, v12);
    goto LABEL_10;
  }
  v13 = a1 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 2 )
        v5 = (_QWORD ***)grpdeskLogon;
      goto LABEL_6;
    }
    v16 = (_QWORD *)grpdeskIODefault;
  }
  else
  {
    v16 = (_QWORD *)grpdeskRitInput;
  }
  v5 = (_QWORD ***)*v16;
LABEL_6:
  if ( v5 )
  {
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = **v5[1];
    v4 = 1;
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
