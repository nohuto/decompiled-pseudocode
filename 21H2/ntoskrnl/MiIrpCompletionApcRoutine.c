/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x1402D3EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
