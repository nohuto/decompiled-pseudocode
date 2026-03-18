/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1408FB278
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408F926C (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408F9E2C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1408FB960 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x140901210 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
