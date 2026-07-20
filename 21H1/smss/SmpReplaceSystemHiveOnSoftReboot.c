/*
 * XREFs of SmpReplaceSystemHiveOnSoftReboot @ 0x14000EA88
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpDeleteFile @ 0x1400141F8 (SmpDeleteFile.c)
 *     SmpOpenTargetFile @ 0x140014A30 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140014B3C (SmpRenameTargetFile.c)
 *     SmpTerminate @ 0x140015498 (SmpTerminate.c)
 */

__int64 SmpReplaceSystemHiveOnSoftReboot()
{
  __int64 result; // rax
  int v1; // eax
  unsigned __int64 v2; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-51h] BYREF
  struct _UNICODE_STRING v5; // [rsp+38h] [rbp-41h] BYREF
  struct _UNICODE_STRING v6; // [rsp+48h] [rbp-31h] BYREF
  struct _UNICODE_STRING v7; // [rsp+58h] [rbp-21h] BYREF
  struct _UNICODE_STRING v8; // [rsp+68h] [rbp-11h] BYREF
  int v9; // [rsp+78h] [rbp-1h] BYREF
  __int64 v10; // [rsp+80h] [rbp+7h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp+Fh]
  int v12; // [rsp+90h] [rbp+17h]
  __int128 v13; // [rsp+98h] [rbp+1Fh]
  unsigned __int64 Parameters[2]; // [rsp+A8h] [rbp+2Fh] BYREF
  __int128 v15; // [rsp+B8h] [rbp+3Fh]

  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\config\\SYSTEM.ksr.tmp");
  v10 = 0LL;
  p_DestinationString = &DestinationString;
  v9 = 48;
  v12 = 64;
  v13 = 0LL;
  result = SmpOpenTargetFile(&Handle, 1114112LL, &v9);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&v5, L"\\SystemRoot\\System32\\config\\SYSTEM");
    v1 = SmpRenameTargetFile(&v5, Handle, 1LL);
    v2 = v1;
    if ( v1 < 0 )
    {
      RtlInitUnicodeString(&v6, L"Failed to replace system hive on soft reboot");
      Parameters[1] = v2;
      Parameters[0] = (unsigned __int64)&v6;
      v15 = 0LL;
      SmpTerminate(Parameters, 1u, 4u);
      JUMPOUT(0x14000EBD7LL);
    }
    NtClose(Handle);
    RtlInitUnicodeString(&v7, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG1");
    RtlInitUnicodeString(&v8, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG2");
    SmpDeleteFile(&v7);
    return SmpDeleteFile(&v8);
  }
  return result;
}
