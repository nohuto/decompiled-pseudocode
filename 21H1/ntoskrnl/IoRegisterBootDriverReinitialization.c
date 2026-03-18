/*
 * XREFs of IoRegisterBootDriverReinitialization @ 0x1407B0FE0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x1403C4EF0 (IopInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRegisterBootDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *PoolWithTag; // rax

  if ( IopBootDriverReinitCompleted != 1 )
  {
    ObfReferenceObject(DriverObject);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69526F49u);
    if ( PoolWithTag )
    {
      DriverObject->Flags |= 0x20u;
      PoolWithTag[2] = DriverObject;
      PoolWithTag[3] = DriverReinitializationRoutine;
      PoolWithTag[4] = Context;
      IopInterlockedInsertTailList((__int64)&IopBootDriverReinitializeQueueHead, PoolWithTag);
    }
    else
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)DriverObject);
    }
  }
}
