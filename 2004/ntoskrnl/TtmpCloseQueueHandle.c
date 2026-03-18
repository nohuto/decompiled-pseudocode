/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409024C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x14026AB30 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1409001C8 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
