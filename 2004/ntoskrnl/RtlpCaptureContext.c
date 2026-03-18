/*
 * XREFs of RtlpCaptureContext @ 0x1403FF0F0
 * Callers:
 *     RtlRaiseNoncontinuableException @ 0x1403FF800 (RtlRaiseNoncontinuableException.c)
 *     PspGetSetContextInternal @ 0x1406AC990 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x1403FF16ALL);
}
