/*
 * XREFs of EtwTraceProcess @ 0x14070AC28
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PspExitProcess @ 0x1407DB734 (PspExitProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1406C6268 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpEnumerateAddressSpace @ 0x1406F6CA4 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessEvent @ 0x14070AE08 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChange @ 0x140711DA8 (EtwpWriteAppStateChange.c)
 *     EtwpInitStateChangeInfo @ 0x140711E3C (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140712BA0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x1407136E8 (EtwpWriteProcessStarted.c)
 *     EtwpLogProcessPerfCtrs @ 0x1409E32A4 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  PVOID v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[56]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[408]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = 0LL;
  memset(v10, 0, sizeof(v10));
  v6 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a2 == 770 )
  {
    if ( (PerfGlobalGroupMask[0] & 0xC004) != 0 )
    {
      v5 = IoSetThreadHardErrorMode(0);
      EtwpEnumerateAddressSpace(BugCheckParameter1, 0LL, (int *)PerfGlobalGroupMask);
      IoSetThreadHardErrorMode(v5);
    }
    if ( (PerfGlobalGroupMask[0] & 8) != 0 )
      EtwpLogProcessPerfCtrs(BugCheckParameter1);
  }
  EtwpWriteProcessEvent(BugCheckParameter1, (__int64)P, (__int64)&v7);
  v4 = v7;
  if ( a2 == 769 && dword_140C043A8 && tlgKeywordOn((__int64)&dword_140C043A8, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted(BugCheckParameter1, (unsigned int)&v6, (unsigned int)v10, (unsigned int)P, (__int64)v4);
    EtwpInitStateChangeInfo(BugCheckParameter1, v9);
    v9[0] = 0;
    EtwpWriteAppStateChange(v9);
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary(BugCheckParameter1, (unsigned int)v9, 0, (unsigned int)v10, (__int64)&v6, (__int64)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
