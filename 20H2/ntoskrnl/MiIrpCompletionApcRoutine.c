/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x140331C50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
