/*
 * XREFs of IopAllocateRelationList @ 0x140732DE8
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140730CCC (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140731638 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x140731BE8 (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14089F180 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x140732E44 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x140732EAC (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x140732FD8 (PnpAllocateCriticalMemory.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 1LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
