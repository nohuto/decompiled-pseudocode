/*
 * XREFs of EtwTraceProcess @ 0x14065E6E4
 * Callers:
 *     PspExitProcess @ 0x14061D5F4 (PspExitProcess.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x14027C5F0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpEnumerateAddressSpace @ 0x140603964 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14061F28C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x140620168 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteProcessStarted @ 0x14064D198 (EtwpWriteProcessStarted.c)
 *     EtwpWriteProcessEvent @ 0x14065E8C4 (EtwpWriteProcessEvent.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406F9FC8 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x140707CE4 (EtwpWriteAppStateChange.c)
 *     EtwpLogProcessPerfCtrs @ 0x140933818 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  unsigned __int8 **v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v9[112]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[416]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset(v10, 0, 0x198uLL);
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(BugCheckParameter1, 0LL, (int *)&PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask & 8) != 0 )
      EtwpLogProcessPerfCtrs(BugCheckParameter1);
  }
  EtwpWriteProcessEvent(BugCheckParameter1, (__int64)P, (__int64)&v7);
  v4 = (unsigned __int8 **)v7;
  if ( a2 == 769 && dword_140C02B78 && tlgKeywordOn((__int64)&dword_140C02B78, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted(BugCheckParameter1, (int *)&v6, (__int64)v10, (unsigned __int16 *)P, v4);
    EtwpInitStateChangeInfo(BugCheckParameter1, (__int64)v9);
    *(_WORD *)v9 = 0;
    EtwpWriteAppStateChange(v9);
    if ( !(unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary(BugCheckParameter1, v9, 0LL, (__int64)v10, (int *)&v6, (unsigned __int16 *)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
