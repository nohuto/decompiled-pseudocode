/*
 * XREFs of RtlpFcEnterRegion @ 0x14078A06C
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A60A8 (RtlpFcBufferManagerReferenceBuffers.c)
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
