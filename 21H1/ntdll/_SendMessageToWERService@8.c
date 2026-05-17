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

NTSTATUS __fastcall SendMessageToWERService(int a1, int a2)
{
  char v2; // bl
  NTSTATUS started; // esi
  int v4; // eax
  __int64 *v5; // eax
  int v6; // eax
  __int64 *v7; // eax
  int v8; // ebx
  int v9; // eax
  int v11; // [esp-24h] [ebp-ACh]
  int v12; // [esp-20h] [ebp-A8h]
  int v13; // [esp-1Ch] [ebp-A4h]
  int v14; // [esp-18h] [ebp-A0h]
  int v15; // [esp-14h] [ebp-9Ch]
  int v16; // [esp-10h] [ebp-98h]
  int v17; // [esp-Ch] [ebp-94h]
  int v18; // [esp-8h] [ebp-90h]
  UNICODE_STRING DestinationString; // [esp+8h] [ebp-80h] BYREF
  _DWORD v20[6]; // [esp+10h] [ebp-78h] BYREF
  int SystemInformation; // [esp+28h] [ebp-60h] BYREF
  int v22; // [esp+2Ch] [ebp-5Ch]
  __int64 v23; // [esp+30h] [ebp-58h] BYREF
  int v24; // [esp+3Ch] [ebp-4Ch]
  int v25; // [esp+40h] [ebp-48h]
  _DWORD v26[2]; // [esp+44h] [ebp-44h] BYREF
  __int16 v27; // [esp+4Ch] [ebp-3Ch]
  HANDLE Handle; // [esp+50h] [ebp-38h] BYREF
  int v29; // [esp+54h] [ebp-34h] BYREF
  _DWORD v30[11]; // [esp+58h] [ebp-30h] BYREF

  v2 = 0;
  v25 = a2;
  v24 = a1;
  Handle = 0;
  v29 = 0;
  v26[1] = 0;
  v27 = 1280;
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
        memset(v30, 0, sizeof(v30));
        v30[4] = 1384;
        started = WerpAllocateAndInitializeSid(v11, v12, v13, v14, v15, v16, v17, v18, &v29);
        if ( started >= 0 )
        {
          v20[0] = 24;
          memset(&v20[1], 0, 20);
          if ( v22 == -1 )
          {
            v2 = 1;
            v5 = 0;
          }
          else
          {
            v23 = -10000LL * v22;
            v5 = &v23;
          }
          v6 = ZwAlpcConnectPort(
                 (int)&Handle,
                 (int)&DestinationString,
                 (int)v20,
                 (int)v30,
                 0x20000,
                 v29,
                 0,
                 0,
                 0,
                 0,
                 (int)v5);
          started = v6;
          if ( v6 >= 0 && v6 != 258 )
          {
            v26[0] = 1384;
            v7 = v2 ? 0 : &v23;
            v8 = v25;
            v9 = NtAlpcSendWaitReceivePort((int)Handle, 0x20000, v24, 0, v25, (int)v26, 0, (int)v7);
            started = v9;
            if ( v9 >= 0 && v9 != 258 )
            {
              started = *(_DWORD *)(v8 + 28);
              if ( started >= 0 )
                started = 0;
            }
          }
        }
        if ( v29 )
          WerpFreeSid(v29);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return started;
}
