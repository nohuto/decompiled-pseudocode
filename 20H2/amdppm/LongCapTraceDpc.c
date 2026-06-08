/*
 * XREFs of LongCapTraceDpc @ 0x1C0009180
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C00091F0 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 912, qword_1C0013828, &PPM_ETW_LONG_CAP_INFO_HV);
}
