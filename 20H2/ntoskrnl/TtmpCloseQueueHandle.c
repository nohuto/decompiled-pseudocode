/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409080D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140262CB0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x140905E1C (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
