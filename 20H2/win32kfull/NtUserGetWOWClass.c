/*
 * XREFs of NtUserGetWOWClass @ 0x1C01FC1D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01E8A74 (_GetWOWClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, unsigned int *a2)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  char *v8; // rbx
  ULONG64 v9; // rdx
  _BYTE **v10; // rax
  _QWORD *WOWClass; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  int v15; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v7 = *a2;
  v15 = *a2;
  v8 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (ULONG64)&v8[(unsigned __int16)v7 + 2];
  v10 = (_BYTE **)MmUserProbeAddress;
  if ( v9 < MmUserProbeAddress && (unsigned __int16)v7 <= HIWORD(v15) )
  {
    if ( (v7 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v9, v5, v6);
      v10 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v9 > (unsigned __int64)v8 )
      goto LABEL_12;
  }
  if ( (v7 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v10 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v8);
  v13 = WOWClass;
  if ( WOWClass )
    v13 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 472));
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
