/*
 * XREFs of TtmpDereferenceSessionMaybeLast @ 0x1408FC568
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408FA55C (TtmiSessionTerminalListWorker.c)
 *     TtmCleanupCurrentSession @ 0x1408FB11C (TtmCleanupCurrentSession.c)
 *     TtmpSessionWorker @ 0x1408FCC50 (TtmpSessionWorker.c)
 *     TtmpDeleteQueue @ 0x140902500 (TtmpDeleteQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmpDereferenceSessionMaybeLast(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    ExFreePoolWithTag((PVOID)a1, 0x536D7454u);
  return v1;
}
