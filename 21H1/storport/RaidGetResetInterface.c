/*
 * XREFs of RaidGetResetInterface @ 0x1C0043BB4
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     RaidQueryResetInterface @ 0x1C00441A4 (RaidQueryResetInterface.c)
 */

__int64 __fastcall RaidGetResetInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rdi
  __int64 v5; // rax
  _OWORD *Pool; // rbx
  int ResetInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *(_DWORD *)DeviceExtension )
    return 3221225485LL;
  if ( DeviceExtension && (v5 = DeviceExtension[688]) != 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else if ( KeGetCurrentIrql() )
  {
    return 3221225800LL;
  }
  else
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x38uLL, 0x504F6152u, (__int64)DeviceObject);
    if ( Pool )
    {
      *Pool = 0LL;
      Pool[1] = 0LL;
      Pool[2] = 0LL;
      *((_QWORD *)Pool + 6) = 0LL;
      ResetInterface = RaidQueryResetInterface(DeviceObject);
      if ( ResetInterface < 0 )
      {
        ExFreePoolWithTag(Pool, 0x504F6152u);
      }
      else
      {
        *a2 = Pool;
        if ( DeviceExtension )
          DeviceExtension[688] = Pool;
      }
      return (unsigned int)ResetInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
