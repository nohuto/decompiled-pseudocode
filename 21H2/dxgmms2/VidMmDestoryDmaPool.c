/*
 * XREFs of VidMmDestoryDmaPool @ 0x1C001AC40
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C001AC5C (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmDestoryDmaPool(void *a1, unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return VIDMM_DMA_POOL::`scalar deleting destructor'(a1, a2);
  return result;
}
