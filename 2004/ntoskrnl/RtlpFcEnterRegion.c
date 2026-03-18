/*
 * XREFs of RtlpFcEnterRegion @ 0x14077BA6C
 * Callers:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A3CD8 (RtlpFcBufferManagerReferenceBuffers.c)
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
