/*
 * XREFs of ObpDestroyTypeArray @ 0x1408DA5E0
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1408D9DAC (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1408D9E78 (ObGetObjectInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDestroyTypeArray(_QWORD *P)
{
  __int64 i; // rdi
  struct _DMA_ADAPTER *v3; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    {
      v3 = (struct _DMA_ADAPTER *)P[i + 1];
      if ( v3 )
        HalPutDmaAdapter(v3 + 5);
    }
    ExFreePoolWithTag(P, 0x7241624Fu);
  }
}
