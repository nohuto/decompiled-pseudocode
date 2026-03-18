/*
 * XREFs of WerKernelSubmitReport @ 0x1C0042EF8
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C008A0A8 (TelemetryData_SubmitReport.c)
 * Callees:
 *     WerpGetRegistryKey @ 0x1C0042590 (WerpGetRegistryKey.c)
 *     WerpAllocateAndInitializeSid @ 0x1C0042680 (WerpAllocateAndInitializeSid.c)
 *     WerpParseKeyName @ 0x1C00427C8 (WerpParseKeyName.c)
 *     WerStartSystemErrorHandler @ 0x1C0042CF4 (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C0042E28 (WerWaitForSystemErrorHandler.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

__int64 __fastcall WerKernelSubmitReport(HANDLE KeyHandle)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int RegistryKey; // eax
  signed int v6; // ebx
  __int64 v7; // r9
  const CHAR *v8; // r8
  _DWORD *Pool2; // rsi
  int started; // eax
  __int64 v11; // r9
  const CHAR *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdi
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  _WORD *v19; // rcx
  __int64 v20; // rdx
  __int16 v21; // ax
  _WORD *v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  _WORD *v25; // rcx
  __int64 v26; // rdx
  __int16 v27; // ax
  _WORD *v28; // rax
  int v29; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+30h] [rbp-D8h]
  int v33; // [rsp+38h] [rbp-D0h]
  int v34; // [rsp+40h] [rbp-C8h]
  int v35; // [rsp+48h] [rbp-C0h]
  int v36; // [rsp+50h] [rbp-B8h]
  ULONG Length; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v39[2]; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandlea; // [rsp+78h] [rbp-90h] BYREF
  __int64 SystemInformation; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v44; // [rsp+98h] [rbp-70h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-68h] BYREF
  int v46[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-40h]
  __int128 v50; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v53[10]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v54[352]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v55[352]; // [rsp+6D8h] [rbp+5D0h] BYREF

  Handle = 0LL;
  memset(v54, 0, 0x578uLL);
  memset(v55, 0, 0x578uLL);
  v47 = 0LL;
  P = 0LL;
  *(_QWORD *)&v50 = 0LL;
  DWORD2(v50) = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  DestinationString = 0LL;
  v44 = 0LL;
  v48 = 0LL;
  Length = 0;
  v49 = 0LL;
  v45 = 0LL;
  *(_QWORD *)v46 = 0LL;
  v38 = 0;
  v39[0] = 0;
  KeyHandlea = 0LL;
  memset(v53, 0, 0x48uLL);
  SystemInformation = 0LL;
  if ( !KeyHandle )
    return 3221225485LL;
  RegistryKey = WerpGetRegistryKey(KeyHandle, v2, v3, &KeyHandlea);
  v6 = RegistryKey;
  if ( RegistryKey >= 0 )
  {
    ZwDeleteKey(KeyHandlea);
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    RegistryKey = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
    v6 = RegistryKey;
    if ( RegistryKey != -2147483643 && RegistryKey != -1073741789 )
    {
      v7 = 1003LL;
      v8 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n";
      goto LABEL_5;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (int)Length, 2003137131LL);
    if ( !Pool2 )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 1011);
      v6 = -1073741801;
      goto LABEL_65;
    }
    started = ZwQueryKey(KeyHandle, KeyNameInformation, Pool2, Length, &Length);
    v6 = started;
    if ( started < 0 )
    {
      v11 = 1029LL;
      v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n";
LABEL_13:
      LODWORD(ResultLengtha) = started;
      DbgPrintEx(0x96u, 0, v12, v11, ResultLengtha);
      goto LABEL_64;
    }
    started = WerpParseKeyName((unsigned __int64)(Pool2 + 1), *Pool2 >> 1, &v45, &v38, v46, v39);
    v6 = started;
    if ( started < 0 )
    {
      v11 = 1042LL;
      v12 = "WERLIVEKERNELREPORTING:%u: ERROR ParseKeyName failed with 0x%x\n";
      goto LABEL_13;
    }
    RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
    v53[2] = 1400LL;
    v6 = WerpAllocateAndInitializeSid(
           &IdentifierAuthority,
           v13,
           v14,
           v15,
           (int)ResultLengtha,
           v32,
           v33,
           v34,
           v35,
           v36,
           &P);
    if ( v6 >= 0 )
    {
      started = WerStartSystemErrorHandler();
      v6 = started;
      if ( started < 0 )
      {
        v11 = 1075LL;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
        goto LABEL_13;
      }
      started = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
      v6 = started;
      if ( started < 0 )
      {
        v11 = 1089LL;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
        goto LABEL_13;
      }
      started = WerWaitForSystemErrorHandler(SystemInformation);
      v6 = started;
      if ( started < 0 )
      {
        v11 = 1096LL;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
        goto LABEL_13;
      }
      if ( started == 258 )
      {
        started = -1073740973;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
        v6 = -1073740973;
        v11 = 1103LL;
        goto LABEL_13;
      }
      LODWORD(v48) = 48;
      *((_QWORD *)&v48 + 1) = 0LL;
      DWORD2(v49) = 512;
      *(_QWORD *)&v49 = 0LL;
      v50 = 0LL;
      if ( HIDWORD(SystemInformation) != -1 )
        v44 = -10000LL * SHIDWORD(SystemInformation);
      v16 = &v44;
      if ( HIDWORD(SystemInformation) == -1 )
        v16 = 0LL;
      started = ZwAlpcConnectPort(&Handle, &DestinationString, &v48, v53, 0x20000, P, 0LL, 0LL, 0LL, 0LL, v16);
      v6 = started;
      if ( started < 0 )
      {
        v11 = 1133LL;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
        goto LABEL_13;
      }
      if ( started == 258 )
      {
        started = -1073740973;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
        v6 = -1073740973;
        v11 = 1140LL;
        goto LABEL_13;
      }
      v17 = v38;
      v54[0] = 91751760;
      if ( v38 > 0xF )
        v17 = 15LL;
      v54[10] = 1610612736;
      LOWORD(v54[1]) = 0;
      v54[12] = 0;
      if ( v17 > 0x7FFFFFFE )
      {
        LOWORD(v54[14]) = 0;
        v6 = -1073741811;
LABEL_45:
        LODWORD(ResultLengtha) = v6;
        DbgPrintEx(
          0x96u,
          0,
          "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for key with 0x%x\n",
          1165LL,
          ResultLengtha);
        goto LABEL_64;
      }
      v18 = v45 - (_QWORD)&v54[14];
      v19 = &v54[14];
      v20 = 16LL;
      do
      {
        if ( !(v20 + v17 - 16) )
          break;
        v21 = *(_WORD *)((char *)v19 + v18);
        if ( !v21 )
          break;
        *v19++ = v21;
        --v20;
      }
      while ( v20 );
      v22 = v19 - 1;
      if ( v20 )
        v22 = v19;
      *v22 = 0;
      v6 = v20 == 0 ? 0x80000005 : 0;
      if ( !v20 )
        goto LABEL_45;
      v23 = (unsigned int)v39[0];
      if ( v39[0] > 0x27u )
        v23 = 39LL;
      if ( v23 <= 0x7FFFFFFE )
      {
        v24 = *(_QWORD *)v46 - (_QWORD)&v54[22];
        v25 = &v54[22];
        v26 = 40LL;
        do
        {
          if ( !(v26 + v23 - 40) )
            break;
          v27 = *(_WORD *)((char *)v25 + v24);
          if ( !v27 )
            break;
          *v25++ = v27;
          --v26;
        }
        while ( v26 );
        v28 = v25 - 1;
        if ( v26 )
          v28 = v25;
        *v28 = 0;
        v6 = v26 == 0 ? 0x80000005 : 0;
        if ( v26 )
        {
          memset(&v55[1], 0, 0x574uLL);
          v55[0] = 91751760;
          v47 = 1400LL;
          v29 = ZwAlpcSendWaitReceivePort(Handle, 0LL, v54, 0LL, v55, &v47, 0LL, v16);
          v6 = v29;
          if ( v29 < 0 || v29 == 258 )
          {
            DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1196);
          }
          else if ( v55[11] >= 0 )
          {
            v6 = 0;
          }
          else
          {
            DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1202);
            v6 = -1073741823;
          }
          goto LABEL_64;
        }
      }
      else
      {
        LOWORD(v54[22]) = 0;
        v6 = -1073741811;
      }
      LODWORD(ResultLengtha) = v6;
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for id with 0x%x\n",
        1177LL,
        ResultLengtha);
    }
LABEL_64:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_65;
  }
  v7 = 981LL;
  v8 = "WERLIVEKERNELREPORTING:%u: ERROR WerpGetRegistryKey failed for the busy key 0x%x\n";
LABEL_5:
  LODWORD(ResultLength) = RegistryKey;
  DbgPrintEx(0x96u, 0, v8, v7, ResultLength);
LABEL_65:
  if ( KeyHandlea )
  {
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
