/*
 * XREFs of ?QueuePTPMouseEvent@@YGXPAXUtagPOINT@@K_K2PAU_PTPMouseLatencyTracker@@@Z @ 0xF3B5E
 * Callers:
 *     _SendPTPAsMouse@36 @ 0xF3C36 (_SendPTPAsMouse@36.c)
 * Callees:
 *     ?DropInput@Mouse@InputTraceLogging@@SGX_KW4DropReason@12@@Z @ 0x178673 (-DropInput@Mouse@InputTraceLogging@@SGX_KW4DropReason@12@@Z.c)
 */

void __userpurge QueuePTPMouseEvent(
        int a1@<edx>,
        int a2@<ecx>,
        void *a3,
        struct tagPOINT a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        struct _PTPMouseLatencyTracker *a8)
{
  int v10; // ecx

  ExEnterCriticalRegionAndAcquireResourceExclusive(_gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    v10 = 10 * (((_BYTE)gdwPTPQueueHead + 1) & 0x3F);
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    ++gdwPTPMouseEvents;
    gPTPMouseEventQueue[v10] = a2;
    dword_271DE4[v10] = a1;
    dword_271DDC[v10] = HIDWORD(a6);
    dword_271DE0[v10] = a7;
    dword_271DE8[v10] = (int)a3;
    dword_271DEC[v10] = a4.x;
    dword_271DF0[v10] = a4.y;
    dword_271DF4[v10] = a5;
    dword_271DF8[v10] = a6;
    ExReleaseResourceAndLeaveCriticalRegion(_gpresPTPEventQueue);
    KeSetEvent(_gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(_gpresPTPEventQueue);
    ++PTPTelemetry::Usage::gTPTelemState[22];
    InputTraceLogging::Mouse::DropInput(a3, a4.x);
  }
}
