/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x14059C980
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
