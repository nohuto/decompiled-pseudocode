/*
 * XREFs of PopTimestampTargetProcessor @ 0x140389EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

void __fastcall PopTimestampTargetProcessor(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        struct _KEVENT *SystemArgument2)
{
  *SystemArgument1 = __rdtsc();
  KeSetEvent(SystemArgument2, 0, 0);
}
