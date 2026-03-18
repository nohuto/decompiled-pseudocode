/*
 * XREFs of TtmpCloseQueueHandle @ 0x1409011D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleClosed @ 0x1408FEED8 (TtmiLogQueueHandleClosed.c)
 */

void __fastcall TtmpCloseQueueHandle(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  TtmiLogQueueHandleClosed();
}
