/*
 * XREFs of RtlReportSilentProcessExit @ 0x18005DE40
 * Callers:
 *     RtlExitUserProcess @ 0x18005D980 (RtlExitUserProcess.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5360 (LdrpFatalExceptionFilter.c)
 * Callees:
 *     WerpGlobalFlagsForProcess @ 0x180060684 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18006083C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CE90 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwDuplicateObject @ 0x18009D590 (ZwDuplicateObject.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     SendMessageToWERService @ 0x1800DD36C (SendMessageToWERService.c)
 */

__int64 __fastcall RtlReportSilentProcessExit(__int64 a1, int a2)
{
  int v5; // ebx
  int UniqueProcess; // edi
  int UniqueThread; // esi
  int v8; // eax
  int v9; // ebx
  unsigned int NtGlobalFlag; // eax
  int v11; // eax
  HANDLE v12; // rdi
  NTSTATUS v13; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v15[176]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v16[352]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(v16, 0, 0x578uLL);
  memset(v15, 0, 0x578uLL);
  Handle[0] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( a1 == -1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0LL;
  v5 = ZwDuplicateObject(-1LL, a1, -1LL, Handle, 4096, 0, 0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  v8 = WerpProcessId(Handle[0]);
  v9 = v8;
  if ( !UniqueProcess || !UniqueThread || !v8 )
    return 3221225485LL;
  if ( UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(Handle[0]);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    v16[0] = 91751760;
    v16[10] = 805306368;
    v16[12] = UniqueThread;
    v16[13] = UniqueProcess;
    v16[14] = v9;
    v16[15] = a2;
    memset((char *)v15 + 4, 0, 0x574uLL);
    LODWORD(v15[0]) = 91751760;
    v11 = SendMessageToWERService(v16, v15);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v12 = v15[6];
        while ( 1 )
        {
          v13 = NtWaitForSingleObject(v12, 1u, 0LL);
          v5 = v13;
          if ( v13 < 0 || v13 == 258 )
            break;
          if ( v13 != 192 && v13 != 257 )
          {
            v5 = 0;
            break;
          }
        }
        if ( v12 )
          NtClose(v12);
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_13:
  if ( Handle[0] )
    NtClose(Handle[0]);
  return (unsigned int)v5;
}
