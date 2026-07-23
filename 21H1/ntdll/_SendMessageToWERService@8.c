/*
 * XREFs of _SendMessageToWERService@8 @ 0x4B33AB80
 * Callers:
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _ReportExceptionInternal@24 @ 0x4B33A3B1 (_ReportExceptionInternal@24.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     _ZwAlpcConnectPort@44 @ 0x4B2F3110 (_ZwAlpcConnectPort@44.c)
 *     _NtAlpcSendWaitReceivePort@32 @ 0x4B2F3240 (_NtAlpcSendWaitReceivePort@32.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _SignalStartWerSvc@0 @ 0x4B33AD08 (_SignalStartWerSvc@0.c)
 *     _WaitForWerSvc@4 @ 0x4B33AD78 (_WaitForWerSvc@4.c)
 *     _WerpAllocateAndInitializeSid@44 @ 0x4B33AE87 (_WerpAllocateAndInitializeSid@44.c)
 *     _WerpFreeSid@8 @ 0x4B33B0D2 (_WerpFreeSid@8.c)
 */

NTSTATUS __fastcall SendMessageToWERService(_PORT_MESSAGE *a1, _PORT_MESSAGE *a2)
{
  char v2; // bl
  NTSTATUS started; // esi
  int v4; // eax
  LARGE_INTEGER *v5; // eax
  NTSTATUS v6; // eax
  LARGE_INTEGER *v7; // eax
  PPORT_MESSAGE v8; // ebx
  NTSTATUS v9; // eax
  int v11; // [esp-24h] [ebp-ACh]
  int v12; // [esp-20h] [ebp-A8h]
  int v13; // [esp-1Ch] [ebp-A4h]
  int v14; // [esp-18h] [ebp-A0h]
  int v15; // [esp-14h] [ebp-9Ch]
  int v16; // [esp-10h] [ebp-98h]
  int v17; // [esp-Ch] [ebp-94h]
  int v18; // [esp-8h] [ebp-90h]
  size_t v19; // [esp-4h] [ebp-8Ch]
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-78h] BYREF
  int SystemInformation; // [esp+28h] [ebp-60h] BYREF
  int v23; // [esp+2Ch] [ebp-5Ch]
  __int64 v24; // [esp+30h] [ebp-58h] BYREF
  PPORT_MESSAGE SendMessageA; // [esp+3Ch] [ebp-4Ch]
  PPORT_MESSAGE ReceiveMessage; // [esp+40h] [ebp-48h]
  ULONG_PTR BufferLength; // [esp+44h] [ebp-44h] BYREF
  __int16 v28; // [esp+4Ch] [ebp-3Ch]
  HANDLE PortHandle; // [esp+50h] [ebp-38h] BYREF
  PSID RequiredServerSid; // [esp+54h] [ebp-34h] BYREF
  _BYTE v31[16]; // [esp+58h] [ebp-30h] BYREF
  int v32; // [esp+68h] [ebp-20h]

  v2 = 0;
  ReceiveMessage = a2;
  SendMessageA = a1;
  PortHandle = 0;
  RequiredServerSid = 0;
  HIDWORD(BufferLength) = 0;
  v28 = 1280;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0);
    if ( started >= 0 )
    {
      v4 = WaitForWerSvc(SystemInformation);
      started = v4;
      if ( v4 >= 0 && v4 != 258 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        LODWORD(v19) = 44;
        memset(v31, 0, v19);
        v32 = 1384;
        started = WerpAllocateAndInitializeSid(v11, v12, v13, v14, v15, v16, v17, v18, &RequiredServerSid);
        if ( started >= 0 )
        {
          ObjectAttributes.Length = 24;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( v23 == -1 )
          {
            v2 = 1;
            v5 = 0;
          }
          else
          {
            v24 = -10000LL * v23;
            v5 = (LARGE_INTEGER *)&v24;
          }
          v6 = ZwAlpcConnectPort(
                 &PortHandle,
                 &DestinationString,
                 &ObjectAttributes,
                 (PALPC_PORT_ATTRIBUTES)v31,
                 0x20000u,
                 RequiredServerSid,
                 0,
                 0,
                 0,
                 0,
                 v5);
          started = v6;
          if ( v6 >= 0 && v6 != 258 )
          {
            LODWORD(BufferLength) = 1384;
            v7 = v2 ? 0 : (LARGE_INTEGER *)&v24;
            v8 = ReceiveMessage;
            v9 = NtAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0, ReceiveMessage, &BufferLength, 0, v7);
            started = v9;
            if ( v9 >= 0 && v9 != 258 )
            {
              started = *(&v8->CallbackId + 1);
              if ( started >= 0 )
                started = 0;
            }
          }
        }
        if ( RequiredServerSid )
          WerpFreeSid(RequiredServerSid);
      }
    }
  }
  if ( PortHandle )
    NtClose(PortHandle);
  return started;
}
