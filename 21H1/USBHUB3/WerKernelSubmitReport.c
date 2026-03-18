/*
 * XREFs of WerKernelSubmitReport @ 0x1C00421BC
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0086794 (TelemetryData_SubmitReport.c)
 * Callees:
 *     WerpGetRegistryKey @ 0x1C00418A0 (WerpGetRegistryKey.c)
 *     WerpAllocateAndInitializeSid @ 0x1C004198C (WerpAllocateAndInitializeSid.c)
 *     WerpParseKeyName @ 0x1C0041A98 (WerpParseKeyName.c)
 *     WerStartSystemErrorHandler @ 0x1C0041FB8 (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C00420EC (WerWaitForSystemErrorHandler.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall WerKernelSubmitReport(HANDLE KeyHandle)
{
  __int64 v2; // r14
  __int64 v3; // r12
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  int RegistryKey; // eax
  signed int v9; // ebx
  __int64 v10; // r9
  const CHAR *v11; // r8
  _DWORD *PoolWithTag; // rsi
  int Key; // eax
  __int64 v14; // r9
  const CHAR *v15; // r8
  signed int v16; // eax
  ULONG v17; // eax
  __int64 *v18; // r13
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r14
  _WORD *v22; // rcx
  __int16 v23; // ax
  _WORD *v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r12
  _WORD *v28; // rcx
  __int16 v29; // ax
  _WORD *v30; // rax
  int v31; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-E0h]
  ULONG Length[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandlea; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  __int64 SystemInformation; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-30h]
  __int128 v47; // [rsp+E8h] [rbp-20h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v49[10]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v50[352]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v51[352]; // [rsp+6D8h] [rbp+5D0h] BYREF

  Handle = 0LL;
  memset(v50, 0, 0x578uLL);
  memset(v51, 0, 0x578uLL);
  v43 = 0LL;
  P = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v42 = 0LL;
  DestinationString = 0LL;
  Length[0] = 0;
  v2 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  v3 = 0LL;
  v46 = 0LL;
  v41 = 0LL;
  v4 = 0;
  v47 = 0LL;
  v36 = 0LL;
  KeyHandlea = 0LL;
  memset(v49, 0, 0x48uLL);
  SystemInformation = 0LL;
  if ( !KeyHandle )
    return 3221225485LL;
  RegistryKey = WerpGetRegistryKey(KeyHandle, v5, v6, &KeyHandlea);
  v9 = RegistryKey;
  if ( RegistryKey >= 0 )
  {
    ZwDeleteKey(KeyHandlea);
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    RegistryKey = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, Length);
    v9 = RegistryKey;
    if ( RegistryKey != -2147483643 && RegistryKey != -1073741789 )
    {
      v10 = 1003LL;
      v11 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n";
      goto LABEL_5;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)Length[0], 0x7765726Bu);
    if ( !PoolWithTag )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 1011);
      v9 = -1073741801;
      goto LABEL_67;
    }
    Key = ZwQueryKey(KeyHandle, KeyNameInformation, PoolWithTag, Length[0], Length);
    v9 = Key;
    if ( Key < 0 )
    {
      v14 = 1029LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n";
LABEL_33:
      LODWORD(ResultLengtha) = Key;
      DbgPrintEx(0x96u, 0, v15, v14, ResultLengtha);
      goto LABEL_66;
    }
    if ( PoolWithTag == (_DWORD *)-4LL )
    {
      v9 = -1073741811;
    }
    else
    {
      v16 = WerpParseKeyName(
              (unsigned __int64)(PoolWithTag + 1),
              *PoolWithTag >> 1,
              &v40,
              &v36,
              &v41,
              (_DWORD *)&v36 + 1);
      v2 = v40;
      v9 = v16;
      v3 = v41;
      v4 = v36;
    }
    if ( v9 < 0 )
    {
      LODWORD(ResultLengtha) = v9;
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ParseKeyName failed with 0x%x\n", 1042LL, ResultLengtha);
      goto LABEL_66;
    }
    RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
    v49[2] = 1400LL;
    v17 = RtlLengthRequiredSid(1u);
    v9 = WerpAllocateAndInitializeSid(&IdentifierAuthority, &P, v17);
    if ( v9 < 0 )
      goto LABEL_66;
    Key = WerStartSystemErrorHandler();
    v9 = Key;
    if ( Key < 0 )
    {
      v14 = 1075LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
      goto LABEL_33;
    }
    Key = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
    v9 = Key;
    if ( Key < 0 )
    {
      v14 = 1089LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
      goto LABEL_33;
    }
    Key = WerWaitForSystemErrorHandler(SystemInformation);
    v9 = Key;
    if ( Key < 0 )
    {
      v14 = 1096LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
      goto LABEL_33;
    }
    if ( Key == 258 )
    {
      Key = -1073740973;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
      v9 = -1073740973;
      v14 = 1103LL;
      goto LABEL_33;
    }
    LODWORD(v45) = 48;
    *((_QWORD *)&v45 + 1) = 0LL;
    DWORD2(v46) = 512;
    *(_QWORD *)&v46 = 0LL;
    v47 = 0LL;
    if ( HIDWORD(SystemInformation) != -1 )
      v42 = -10000LL * SHIDWORD(SystemInformation);
    v18 = &v42;
    if ( HIDWORD(SystemInformation) == -1 )
      v18 = 0LL;
    Key = ZwAlpcConnectPort(&Handle, &DestinationString, &v45, v49, 0x20000, P, 0LL, 0LL, 0LL, 0LL, v18);
    v9 = Key;
    if ( Key < 0 )
    {
      v14 = 1133LL;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
      goto LABEL_33;
    }
    if ( Key == 258 )
    {
      Key = -1073740973;
      v15 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
      v9 = -1073740973;
      v14 = 1140LL;
      goto LABEL_33;
    }
    v19 = v4;
    v50[0] = 91751760;
    v50[10] = 1610612736;
    if ( v4 > 0xF )
      v19 = 15LL;
    LOWORD(v50[1]) = 0;
    v50[12] = 0;
    if ( v19 <= 0x7FFFFFFE )
    {
      v20 = 16LL;
      v21 = v2 - (_QWORD)&v50[14];
      v22 = &v50[14];
      do
      {
        if ( !(v19 + v20 - 16) )
          break;
        v23 = *(_WORD *)((char *)v22 + v21);
        if ( !v23 )
          break;
        *v22++ = v23;
        --v20;
      }
      while ( v20 );
      v24 = v22 - 1;
      if ( v20 )
        v24 = v22;
      *v24 = 0;
      v9 = v20 == 0 ? 0x80000005 : 0;
      if ( v20 )
      {
        v25 = HIDWORD(v36);
        if ( HIDWORD(v36) > 0x27 )
          v25 = 39LL;
        if ( v25 <= 0x7FFFFFFE )
        {
          v26 = 40LL;
          v27 = v3 - (_QWORD)&v50[22];
          v28 = &v50[22];
          do
          {
            if ( !(v26 + v25 - 40) )
              break;
            v29 = *(_WORD *)((char *)v28 + v27);
            if ( !v29 )
              break;
            *v28++ = v29;
            --v26;
          }
          while ( v26 );
          v30 = v28 - 1;
          if ( v26 )
            v30 = v28;
          *v30 = 0;
          v9 = v26 == 0 ? 0x80000005 : 0;
          if ( v26 )
          {
            memset(&v51[1], 0, 0x574uLL);
            v43 = 1400LL;
            v51[0] = 91751760;
            v31 = ZwAlpcSendWaitReceivePort(Handle, 0LL, v50, 0LL, v51, &v43, 0LL, v18);
            v9 = v31;
            if ( v31 < 0 || v31 == 258 )
            {
              DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n", 1196);
            }
            else if ( v51[11] >= 0 )
            {
              v9 = 0;
            }
            else
            {
              DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1202);
              v9 = -1073741823;
            }
            goto LABEL_66;
          }
        }
        else
        {
          v9 = -1073741811;
          LOWORD(v50[22]) = 0;
        }
        LODWORD(ResultLengtha) = v9;
        DbgPrintEx(
          0x96u,
          0,
          "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for id with 0x%x\n",
          1177LL,
          ResultLengtha);
LABEL_66:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_67;
      }
    }
    else
    {
      v9 = -1073741811;
      LOWORD(v50[14]) = 0;
    }
    LODWORD(ResultLengtha) = v9;
    DbgPrintEx(
      0x96u,
      0,
      "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for key with 0x%x\n",
      1165LL,
      ResultLengtha);
    goto LABEL_66;
  }
  v10 = 981LL;
  v11 = "WERLIVEKERNELREPORTING:%u: ERROR WerpGetRegistryKey failed for the busy key 0x%x\n";
LABEL_5:
  LODWORD(ResultLength) = RegistryKey;
  DbgPrintEx(0x96u, 0, v11, v10, ResultLength);
LABEL_67:
  if ( KeyHandlea )
  {
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
