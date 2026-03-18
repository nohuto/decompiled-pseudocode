/*
 * XREFs of NtUserUnregisterClass @ 0x1C00D5B40
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C00D5C6C (_UnregisterClass.c)
 *     _W32ExceptionHandler @ 0x1C025CF44 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterClass(unsigned int *a1, __int64 a2, ULONG64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  ULONG64 v9; // rbx
  ULONG64 v10; // rdx
  _BYTE **v11; // rax
  ULONG64 v12; // rcx
  int v13; // ebx
  __int128 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h]
  int v17; // [rsp+78h] [rbp+20h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v8 = *a1;
  v17 = *a1;
  v9 = *((_QWORD *)a1 + 1);
  if ( (v9 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v9 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (unsigned __int16)v8 + v9 + 2;
    v11 = (_BYTE **)MmUserProbeAddress;
    if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v17) )
    {
      if ( (v8 & 1) != 0 )
        goto LABEL_11;
      if ( v10 > v9 )
        goto LABEL_13;
    }
    if ( (v8 & 1) == 0 )
    {
LABEL_12:
      **v11 = 0;
      goto LABEL_13;
    }
LABEL_11:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v10, v6, v7);
    v11 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_12;
  }
LABEL_13:
  v13 = UnregisterClass(v9, a2, &v15);
  if ( v13 )
  {
    v12 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v15;
    *(_QWORD *)(a3 + 16) = v16;
  }
  UserSessionSwitchLeaveCrit(v12);
  return v13;
}
