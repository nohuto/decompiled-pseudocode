/*
 * XREFs of NtUserUnregisterClass @ 0x1C0090960
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0090A8C (_UnregisterClass.c)
 *     _W32ExceptionHandler @ 0x1C025E554 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterClass(unsigned int *a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // rcx
  ULONG64 v7; // rbx
  ULONG64 v8; // rdx
  _BYTE **v9; // rax
  ULONG64 v10; // rdx
  ULONG64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int128 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h]
  int v17; // [rsp+78h] [rbp+20h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v6 = *a1;
  v17 = *a1;
  v7 = *((_QWORD *)a1 + 1);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int16)v6 + v7 + 2;
    v9 = (_BYTE **)MmUserProbeAddress;
    if ( v8 < MmUserProbeAddress && (unsigned __int16)v6 <= HIWORD(v17) )
    {
      if ( (v6 & 1) != 0 )
        goto LABEL_11;
      if ( v8 > v7 )
        goto LABEL_13;
    }
    if ( (v6 & 1) == 0 )
    {
LABEL_12:
      **v9 = 0;
      goto LABEL_13;
    }
LABEL_11:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v8);
    v9 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_12;
  }
LABEL_13:
  v12 = UnregisterClass(v7, a2, &v15);
  if ( v12 )
  {
    v11 = MmUserProbeAddress;
    v10 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v15;
    *(_QWORD *)(a3 + 16) = v16;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v13);
  return v12;
}
