/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x140345F70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x140345FAC (PspRequestDeferredJobNotification.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( ObReferenceObjectSafeWithTag((__int64)DeferredContext) )
  {
    if ( !(unsigned __int8)PspRequestDeferredJobNotification(DeferredContext, 0x20000LL) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
