/*
 * XREFs of SendMessageToWERService @ 0x1800DD70C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005DF50 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x1800DCBB8 (ReportExceptionInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18009D770 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x18009DFC0 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009E220 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     SignalStartWerSvc @ 0x1800DD918 (SignalStartWerSvc.c)
 *     WaitForWerSvc @ 0x1800DD9C4 (WaitForWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DDB2C (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x1800DDE3C (WerpFreeSid.c)
 */

__int64 __fastcall SendMessageToWERService(__int64 a1, __int64 a2)
{
  NTSTATUS started; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v14; // [rsp+64h] [rbp-9Ch]
  unsigned int SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  __int128 v26; // [rsp+C0h] [rbp-40h]
  _QWORD v27[9]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = 1280;
  Handle = 0LL;
  v18 = 0LL;
  v13 = 0;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v4 = WaitForWerSvc(SystemInformation);
      started = v4;
      if ( v4 >= 0 && v4 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v27, 0, sizeof(v27));
        v27[2] = 1400LL;
        v8 = WerpAllocateAndInitializeSid((unsigned int)&v13, v5, v6, v7);
        v9 = v18;
        started = v8;
        if ( v8 >= 0 )
        {
          v26 = 0LL;
          v22 = 48;
          v23 = 0LL;
          v25 = 0;
          v24 = 0LL;
          if ( v16 != -1 )
            v19 = -10000LL * v16;
          v10 = NtAlpcConnectPort();
          started = v10;
          if ( v10 >= 0 && v10 != 258 )
          {
            v20 = 1400LL;
            v11 = ZwAlpcSendWaitReceivePort();
            started = v11;
            if ( v11 >= 0 && v11 != 258 )
            {
              started = 0;
              if ( *(int *)(a2 + 44) < 0 )
                started = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v9 )
          WerpFreeSid(v9);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
