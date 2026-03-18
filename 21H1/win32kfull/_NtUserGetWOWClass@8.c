/*
 * XREFs of _NtUserGetWOWClass@8 @ 0x164B4A
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetWOWClass@8 @ 0x15463B (__GetWOWClass@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserGetWOWClass(int a1, ULONG a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // edi
  int *v4; // edx
  int v5; // ecx
  unsigned __int16 *v6; // edx
  ULONG v7; // esi
  _DWORD *WOWClass; // eax
  int v9; // esi

  EnterSharedCrit(0, 1);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = (int *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v4 = (int *)_MmUserProbeAddress;
  v5 = *v4;
  v6 = (unsigned __int16 *)v4[1];
  v7 = (ULONG)v6 + (unsigned __int16)v5 + 2;
  if ( v7 <= (unsigned int)v6 || v7 >= _MmUserProbeAddress )
LABEL_11:
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v5 > HIWORD(v5) )
  {
    if ( (v5 & 1) == 0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (v5 & 1) != 0 )
  {
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_11;
  }
  WOWClass = _GetWOWClass(a1, v6);
  v9 = (int)WOWClass;
  if ( WOWClass )
    v9 = WOWClass[1] - *(_DWORD *)(ThreadWin32Thread + 256);
  UserSessionSwitchLeaveCrit();
  return v9;
}
