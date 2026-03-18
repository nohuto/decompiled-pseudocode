/*
 * XREFs of FsRtlpOplockWaitCompleteRoutine @ 0x14088EB50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall FsRtlpOplockWaitCompleteRoutine(struct _KEVENT *a1)
{
  return KeSetEvent(a1, 0, 0);
}
