/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x140323380
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
