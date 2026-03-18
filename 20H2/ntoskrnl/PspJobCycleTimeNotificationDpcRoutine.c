/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x140324E20
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PspRequestDeferredJobNotification @ 0x140324E5C (PspRequestDeferredJobNotification.c)
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
