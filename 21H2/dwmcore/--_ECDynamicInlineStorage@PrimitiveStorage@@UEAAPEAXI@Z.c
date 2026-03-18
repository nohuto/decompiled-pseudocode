/*
 * XREFs of ??_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800D7110
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

PrimitiveStorage::CDynamicInlineStorage *__fastcall PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor'(
        PrimitiveStorage::CDynamicInlineStorage *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x68uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
