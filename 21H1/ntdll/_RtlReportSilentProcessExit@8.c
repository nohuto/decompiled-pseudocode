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

int __stdcall RtlReportSilentProcessExit(int a1, int a2)
{
  int v3; // esi
  void *UniqueProcess; // edi
  void *UniqueThread; // ebx
  int v6; // eax
  int v7; // esi
  unsigned int NtGlobalFlag; // eax
  int v9; // eax
  void *v10; // edi
  int v11; // eax
  HANDLE v12; // [esp+Ch] [ebp-ADCh] BYREF
  _DWORD v13[346]; // [esp+10h] [ebp-AD8h] BYREF
  _DWORD v14[347]; // [esp+578h] [ebp-570h] BYREF

  memset(v14, 0, 0x568u);
  memset(v13, 0, sizeof(v13));
  v12 = 0;
  if ( !a1 )
    return -1073741811;
  if ( a1 == -1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0;
  v3 = ZwDuplicateObject(-1, a1, -1, &v12, 4096, 0, 0);
  if ( v3 < 0 )
    goto LABEL_27;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = WerpProcessId(v12);
  v7 = v6;
  if ( !UniqueProcess || !UniqueThread || !v6 )
    return -1073741811;
  if ( UniqueProcess == (void *)v6 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(v12);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    v14[11] = a2;
    v14[0] = 90703184;
    v14[6] = 805306368;
    v14[8] = UniqueThread;
    v14[9] = UniqueProcess;
    v14[10] = v7;
    memset(&v13[1], 0, 0x564u);
    v13[0] = 90703184;
    v9 = SendMessageToWERService(v14, v13);
    if ( v9 >= 0 )
    {
      if ( v9 == 258 )
      {
        v3 = -1073741248;
      }
      else
      {
        v10 = (void *)v13[8];
        while ( 1 )
        {
          v11 = ZwWaitForSingleObject(v10, 1, 0);
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
  if ( v12 )
    NtClose(v12);
  return v3;
}
