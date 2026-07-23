/*
 * XREFs of EtwTraceProcess @ 0x1406F2A40
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpWriteProcessStarted @ 0x14066FC18 (EtwpWriteProcessStarted.c)
 *     EtwpEnumerateAddressSpace @ 0x1406840BC (EtwpEnumerateAddressSpace.c)
 *     EtwpInitStateChangeInfo @ 0x1406A2F6C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406A42DC (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessEvent @ 0x1406F2264 (EtwpWriteProcessEvent.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406F458C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x1406F462C (EtwpWriteAppStateChange.c)
 *     EtwpLogProcessPerfCtrs @ 0x140936FE8 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(PEPROCESS Process, __int16 a2)
{
  unsigned __int8 **v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v9[112]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v10[208]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset(v10, 0, 0x198uLL);
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace((ULONG_PTR)Process, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(Process);
  }
  EtwpWriteProcessEvent(Process, a2, &v6, v10, (unsigned __int16 *)P, (__int64)&v7);
  v4 = (unsigned __int8 **)v7;
  if ( a2 == 769 && dword_140C02BB8 && tlgKeywordOn((__int64)&dword_140C02BB8, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted((__int64)Process, (int *)&v6, (__int64)v10, (unsigned __int16 *)P, v4);
    EtwpInitStateChangeInfo((__int64)Process, (__int64)v9);
    *(_WORD *)v9 = 0;
    EtwpWriteAppStateChange(v9);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(Process) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary((__int64)Process, v9, 0LL, (__int64)v10, (int *)&v6, (unsigned __int16 *)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
