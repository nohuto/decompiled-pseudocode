/*
 * XREFs of ObpDestroyTypeArray @ 0x1408DDD40
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1408DD50C (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1408DD5D8 (ObGetObjectInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
