/*
 * XREFs of RtlpFcEnterRegion @ 0x14077965C
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A3578 (RtlpFcBufferManagerReferenceBuffers.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *RtlpFcEnterRegion()
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  --result->KernelApcDisable;
  return result;
}
