/*
 * XREFs of EtwTraceProcess @ 0x14060330C
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     PspExitProcess @ 0x1406CD37C (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140250300 (IoSetThreadHardErrorMode.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140604E5C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x140604EFC (EtwpWriteAppStateChange.c)
 *     EtwpInitStateChangeInfo @ 0x1406134BC (EtwpInitStateChangeInfo.c)
 *     EtwpEnumerateAddressSpace @ 0x14061A45C (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062A95C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x14062B670 (EtwpWriteProcessStarted.c)
 *     EtwpLogProcessPerfCtrs @ 0x140936E18 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(PEPROCESS Process, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[56]; // [rsp+50h] [rbp-B0h] BYREF
  int v10[104]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset(v10, 0, 0x198uLL);
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(Process, 0LL, &PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(Process);
  }
  EtwpWriteProcessEvent(Process, a2, &v6, v10, (unsigned __int16 *)P, (__int64)&v7);
  v4 = v7;
  if ( a2 == 769 && dword_140C02BB8 && tlgKeywordOn((__int64)&dword_140C02BB8, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted((_DWORD)Process, (unsigned int)&v6, (unsigned int)v10, (unsigned int)P, (__int64)v4);
    EtwpInitStateChangeInfo(Process, v9);
    v9[0] = 0;
    EtwpWriteAppStateChange(v9);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(Process) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary((_DWORD)Process, (unsigned int)v9, 0, (unsigned int)v10, (__int64)&v6, (__int64)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
