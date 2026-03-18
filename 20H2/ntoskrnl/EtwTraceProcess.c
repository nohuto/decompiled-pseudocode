/*
 * XREFs of EtwTraceProcess @ 0x140632174
 * Callers:
 *     PspExitProcess @ 0x14064E234 (PspExitProcess.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14023DB40 (IoSetThreadHardErrorMode.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpEnumerateAddressSpace @ 0x140629054 (EtwpEnumerateAddressSpace.c)
 *     EtwpWriteProcessStarted @ 0x14062F1AC (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChange @ 0x14062F440 (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14062F498 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteProcessEvent @ 0x140632354 (EtwpWriteProcessEvent.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14064FECC (EtwpWriteAppStateChangeSummary.c)
 *     EtwpInitStateChangeInfo @ 0x140650DA8 (EtwpInitStateChangeInfo.c)
 *     EtwpLogProcessPerfCtrs @ 0x140939648 (EtwpLogProcessPerfCtrs.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceProcess(ULONG_PTR BugCheckParameter1, __int16 a2)
{
  unsigned __int8 **v4; // rbx
  BOOLEAN v5; // bl
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v7; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[56]; // [rsp+50h] [rbp-B0h] BYREF
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
  if ( a2 == 769 && dword_140C02BB0 && tlgKeywordOn((__int64)&dword_140C02BB0, 0x600000000003LL) )
  {
    memset(v9, 0, 0x62uLL);
    EtwpWriteProcessStarted(BugCheckParameter1, (int *)&v6, (__int64)v10, (unsigned __int16 *)P, v4);
    EtwpInitStateChangeInfo(BugCheckParameter1, v9);
    v9[0] = 0;
    EtwpWriteAppStateChange();
    if ( !EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
      LOWORD(P[0]) = 0;
    EtwpWriteAppStateChangeSummary(BugCheckParameter1, (unsigned int)v9, 0, (unsigned int)v10, (__int64)&v6, (__int64)P);
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
