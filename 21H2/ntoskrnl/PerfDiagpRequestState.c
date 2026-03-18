/*
 * XREFs of PerfDiagpRequestState @ 0x14081C88C
 * Callers:
 *     PerfDiagpShutdownProxyCallback @ 0x140808C50 (PerfDiagpShutdownProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x14081C860 (PerfDiagpBootUserProxyCallback.c)
 *     PerfDiagpBootSystemProxyCallback @ 0x140864FC0 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x1409DA7D0 (PerfDiagpSecondaryLogonProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  __int64 Pool2; // rax

  if ( a1 < 8 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1682330192LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = PerfDiagpProxyWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_DWORD *)(Pool2 + 32) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
  }
}
