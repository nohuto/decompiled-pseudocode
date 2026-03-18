/*
 * XREFs of NtUserGetWOWClass @ 0x1C01FD040
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _GetWOWClass @ 0x1C01E9704 (_GetWOWClass.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, unsigned int *a2)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v5; // rcx
  char *v6; // rbx
  ULONG64 v7; // rdx
  _BYTE **v8; // rax
  _QWORD *WOWClass; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rbx
  int v15; // [rsp+60h] [rbp+18h]

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (unsigned int *)MmUserProbeAddress;
  v5 = *a2;
  v15 = *a2;
  v6 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (ULONG64)&v6[(unsigned __int16)v5 + 2];
  v8 = (_BYTE **)MmUserProbeAddress;
  if ( v7 < MmUserProbeAddress && (unsigned __int16)v5 <= HIWORD(v15) )
  {
    if ( (v5 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7);
      v8 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v7 > (unsigned __int64)v6 )
      goto LABEL_12;
  }
  if ( (v5 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v8 = 0;
LABEL_12:
  WOWClass = GetWOWClass(a1, v6);
  v13 = WOWClass;
  if ( WOWClass )
    v13 = (_QWORD *)(WOWClass[1] - *(_QWORD *)(ThreadWin32Thread + 464));
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v13;
}
