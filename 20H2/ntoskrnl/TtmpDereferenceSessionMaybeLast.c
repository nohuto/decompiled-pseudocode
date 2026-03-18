/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x140902190
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x140900180 (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x140900D3C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x140908110 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
