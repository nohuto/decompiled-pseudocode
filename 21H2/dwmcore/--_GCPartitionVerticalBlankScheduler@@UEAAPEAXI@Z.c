/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801ADE00
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800DD6EC (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::`scalar deleting destructor'(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
