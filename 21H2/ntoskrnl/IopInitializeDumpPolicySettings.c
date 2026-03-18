/*
 * XREFs of IopInitializeDumpPolicySettings @ 0x140860A10
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x1409335E0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14093CC30 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmIsStateSeparationEnabled @ 0x1402201F8 (CmIsStateSeparationEnabled.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IopDumpIsTracingEnabled @ 0x140554630 (IopDumpIsTracingEnabled.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     IopOpenRegistryKey @ 0x1406DE960 (IopOpenRegistryKey.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140860B90 (IopLiveDumpRegisterWnfNotificationCallback.c)
 */

NTSTATUS __fastcall IopInitializeDumpPolicySettings(char a1)
{
  const WCHAR *v2; // rdx
  UNICODE_STRING *p_DestinationString; // r8
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp-29h] BYREF
  __int64 v6; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING v8; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp+17h] BYREF
  __int64 *v11; // [rsp+90h] [rbp+37h]
  int v12; // [rsp+98h] [rbp+3Fh]
  int v13; // [rsp+9Ch] [rbp+43h]

  Handle = 0LL;
  v6 = 0LL;
  HIDWORD(UserData.Ptr) = 0;
  DestinationString = 0LL;
  v8 = 0LL;
  if ( !CmIsStateSeparationEnabled() )
  {
    v2 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
    goto LABEL_3;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\CrashControl");
  if ( IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 0x20019u, 0) < 0 )
  {
    v2 = L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\CrashControl";
LABEL_3:
    RtlInitUnicodeString(&DestinationString, v2);
    if ( IopOpenRegistryKey(&Handle, 0LL, &DestinationString, 0x20019u, 0) < 0 )
      goto LABEL_6;
  }
  if ( IopGetRegistryValue(Handle, L"AllowCrashDump", 4, &v6) >= 0
    && *(_DWORD *)(v6 + 4) == 4
    && *(_DWORD *)(v6 + 12) == 4 )
  {
    AllowCrashDump = *(_DWORD *)(*(unsigned int *)(v6 + 8) + v6) != 0;
  }
  ZwClose(Handle);
LABEL_6:
  if ( !CmIsStateSeparationEnabled() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump");
    p_DestinationString = &DestinationString;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&v8, L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\LiveDump");
  if ( IopOpenRegistryKey(&Handle, 0LL, &v8, 0x20019u, 0) < 0 )
  {
    RtlInitUnicodeString(&v8, L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\LiveDump");
    p_DestinationString = &v8;
LABEL_8:
    result = IopOpenRegistryKey(&Handle, 0LL, p_DestinationString, 0x20019u, 0);
    if ( result < 0 )
      goto LABEL_9;
  }
  if ( IopGetRegistryValue(Handle, L"AllowLiveDump", 4, &v6) >= 0
    && *(_DWORD *)(v6 + 4) == 4
    && *(_DWORD *)(v6 + 12) == 4 )
  {
    AllowLiveDump = *(_DWORD *)(*(unsigned int *)(v6 + 8) + v6) != 0;
  }
  result = ZwClose(Handle);
LABEL_9:
  if ( a1 )
  {
    EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C064A8, 0LL, 0LL);
    if ( (int)ExSubscribeWnfStateChange(
                (int)&v6,
                (int)&WNF_DUMP_ALLOW_CRASHDUMP_POLICY_VALUE_CHANGED,
                1,
                0,
                (__int64)IopCrashDumpPolicyChangeWnfCallback,
                0LL) < 0 )
    {
      if ( IopDumpIsTracingEnabled() )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)"Failed to subscribe for policy value change notification";
        UserData.Size = 56;
        EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_OPERATION_FAILURE, 0LL, 1u, &UserData);
      }
      if ( (unsigned int)dword_140C064A8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C064A8, 0x400000000000LL) )
        {
          v13 = 0;
          v11 = &v6;
          v6 = 0x1000000LL;
          v12 = 8;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C064A8,
            (unsigned __int8 *)&byte_14002ACBF,
            0LL,
            0LL,
            3u,
            &v10);
        }
      }
    }
    return IopLiveDumpRegisterWnfNotificationCallback();
  }
  return result;
}
