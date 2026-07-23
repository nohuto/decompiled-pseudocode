/*
 * XREFs of SendMessageToWERService @ 0x1800DD36C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18005DE40 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x1800DC818 (ReportExceptionInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18009D4D0 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x18009DD20 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009DF80 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     SignalStartWerSvc @ 0x1800DD578 (SignalStartWerSvc.c)
 *     WaitForWerSvc @ 0x1800DD624 (WaitForWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD78C (WerpAllocateAndInitializeSid.c)
 *     WerpFreeSid @ 0x1800DDA9C (WerpFreeSid.c)
 */

__int64 __fastcall SendMessageToWERService(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
{
  int started; // ebx
  int v5; // eax
  int v6; // eax
  PSID v7; // rdi
  char v8; // dl
  LARGE_INTEGER *Timeout; // r14
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int RequiredServerSid; // [rsp+28h] [rbp-D8h]
  int ConnectionMessage; // [rsp+30h] [rbp-D0h]
  int BufferLength; // [rsp+38h] [rbp-C8h]
  int OutMessageAttributes; // [rsp+40h] [rbp-C0h]
  int InMessageAttributes; // [rsp+48h] [rbp-B8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h]
  HANDLE PortHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-30h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PortHandle = 0LL;
  v23 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v5 = WaitForWerSvc(SystemInformation);
      started = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.MaxMessageLength = 1400LL;
        v6 = WerpAllocateAndInitializeSid(
               &IdentifierAuthority,
               Flags,
               RequiredServerSid,
               ConnectionMessage,
               BufferLength,
               OutMessageAttributes,
               InMessageAttributes,
               (__int64)&v23);
        v7 = v23;
        started = v6;
        if ( v6 >= 0 )
        {
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( v21 == -1 )
          {
            v8 = 1;
          }
          else
          {
            v8 = 0;
            v24 = -10000LL * v21;
          }
          Timeout = (LARGE_INTEGER *)&v24;
          if ( v8 )
            Timeout = 0LL;
          v10 = NtAlpcConnectPort(
                  &PortHandle,
                  &DestinationString,
                  &ObjectAttributes,
                  &PortAttributes,
                  0x20000u,
                  v23,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  Timeout);
          started = v10;
          if ( v10 >= 0 && v10 != 258 )
          {
            v25 = 1400LL;
            v11 = ZwAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0LL, ReceiveMessage, &v25, 0LL, Timeout);
            started = v11;
            if ( v11 >= 0 && v11 != 258 )
            {
              started = 0;
              if ( (ReceiveMessage[1].u2.ZeroInit & 0x80000000) != 0 )
                started = ReceiveMessage[1].u2.ZeroInit;
            }
          }
        }
        if ( v7 )
          WerpFreeSid(v7);
      }
    }
  }
  if ( PortHandle )
    NtClose(PortHandle);
  return (unsigned int)started;
}
