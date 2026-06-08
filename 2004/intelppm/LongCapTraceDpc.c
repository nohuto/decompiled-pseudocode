/*
 * XREFs of LongCapTraceDpc @ 0x1C000D700
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000D730 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 912, qword_1C001C840, &PPM_ETW_LONG_CAP_INFO_HV);
}
