/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x180054520
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x1800B2898 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(a1, 0x2F8uLL);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache((struct CDrawListPrimitive8 *)a1);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        DefaultHeap::Free(a1);
      }
      else
      {
        *a1 = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = a1;
      }
    }
  }
  return a1;
}
