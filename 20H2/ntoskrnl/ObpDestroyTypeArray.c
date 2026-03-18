/*
 * XREFs of ObpDestroyTypeArray @ 0x1408E0420
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1408DFBEC (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1408DFCB8 (ObGetObjectInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
