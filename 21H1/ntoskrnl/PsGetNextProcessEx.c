/*
 * XREFs of PsGetNextProcessEx @ 0x1406E0D50
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
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
