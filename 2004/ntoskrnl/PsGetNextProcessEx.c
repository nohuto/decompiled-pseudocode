/*
 * XREFs of PsGetNextProcessEx @ 0x140703AE0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 */

void *__fastcall PsGetNextProcessEx(struct _DMA_ADAPTER *Object)
{
  void *NextProcess; // rax
  void *v3; // rbx

  if ( Object )
  {
    ObfReferenceObjectWithTag(Object, 0x6E457350u);
    HalPutDmaAdapter(Object);
  }
  NextProcess = (void *)PsGetNextProcess(Object);
  v3 = NextProcess;
  if ( NextProcess )
  {
    ObfReferenceObject(NextProcess);
    ObfDereferenceObjectWithTag(v3, 0x6E457350u);
  }
  return v3;
}
