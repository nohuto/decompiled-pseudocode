/*
 * XREFs of _RtlReportSilentProcessExit@8 @ 0x4B2DD910
 * Callers:
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _WerpGlobalFlagsForProcess@4 @ 0x4B33B104 (_WerpGlobalFlagsForProcess@4.c)
 *     _WerpProcessId@4 @ 0x4B33B2CF (_WerpProcessId@4.c)
 */

NTSTATUS __cdecl RtlReportSilentProcessExit(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  int v3; // esi
  void *UniqueProcess; // edi
  void *UniqueThread; // ebx
  int v6; // eax
  int v7; // esi
  unsigned int NtGlobalFlag; // eax
  int v9; // eax
  void *v10; // edi
  NTSTATUS v11; // eax
  size_t v12; // [esp-4h] [ebp-AECh]
  size_t v13; // [esp-4h] [ebp-AECh]
  size_t v14; // [esp-4h] [ebp-AECh]
  HANDLE StackCookie; // [esp+Ch] [ebp-ADCh] BYREF
  _DWORD StackCookie_4[346]; // [esp+10h] [ebp-AD8h] BYREF
  _DWORD v17[347]; // [esp+578h] [ebp-570h] BYREF

  LODWORD(v12) = 1384;
  memset(v17, 0, v12);
  LODWORD(v13) = 1384;
  memset(StackCookie_4, 0, v13);
  StackCookie = 0;
  if ( !ProcessHandle )
    return -1073741811;
  if ( ProcessHandle == (HANDLE)-1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0;
  v3 = ZwDuplicateObject((HANDLE)0xFFFFFFFF, ProcessHandle, (HANDLE)0xFFFFFFFF, &StackCookie, 0x1000u, 0, 0);
  if ( v3 < 0 )
    goto LABEL_27;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = WerpProcessId(StackCookie);
  v7 = v6;
  if ( !UniqueProcess || !UniqueThread || !v6 )
    return -1073741811;
  if ( UniqueProcess == (void *)v6 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(StackCookie);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    LODWORD(v14) = 1380;
    v17[11] = ExitStatus;
    v17[0] = 90703184;
    v17[6] = 805306368;
    v17[8] = UniqueThread;
    v17[9] = UniqueProcess;
    v17[10] = v7;
    memset(&StackCookie_4[1], 0, v14);
    StackCookie_4[0] = 90703184;
    v9 = SendMessageToWERService(v17, StackCookie_4);
    if ( v9 >= 0 )
    {
      if ( v9 == 258 )
      {
        v3 = -1073741248;
      }
      else
      {
        v10 = (void *)StackCookie_4[8];
        while ( 1 )
        {
          v11 = ZwWaitForSingleObject(v10, 1u, 0);
          v3 = v11;
          if ( v11 == 258 || v11 < 0 )
            break;
          if ( v11 != 192 && v11 != 257 )
          {
            v3 = 0;
            break;
          }
        }
        if ( v10 )
          NtClose(v10);
      }
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_27:
  if ( StackCookie )
    NtClose(StackCookie);
  return v3;
}
