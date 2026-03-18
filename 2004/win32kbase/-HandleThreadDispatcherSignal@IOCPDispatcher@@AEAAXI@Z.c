/*
 * XREFs of ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C006FCBC
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0078970 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ApiSetEditionHandleMitSignal @ 0x1C006FD44 (ApiSetEditionHandleMitSignal.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C006FDF0 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 */

void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  _QWORD *v4; // rbx
  char v5; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 < *((_DWORD *)this + 684) )
  {
    v4 = (_QWORD *)((char *)this + 16 * a2 + 2576);
    if ( v4[1] )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v5,
        "HandleMitSignal",
        0LL);
      IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v4[1], *v4, 2LL, a2);
      ApiSetEditionHandleMitSignal(*v4);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v5);
    }
  }
}
