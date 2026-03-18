/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x140741FC0
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x14072B3D0 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRequestDeviceRemoval @ 0x140742898 (PnpRequestDeviceRemoval.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407B9B80 (PiDevCfgProcessDeviceCallback.c)
 *     IopQueueDeviceResetEvent @ 0x1408A337C (IopQueueDeviceResetEvent.c)
 *     IopRetryDeviceRemovalForReset @ 0x1408A3400 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     PnpInsertEventInQueue @ 0x14064AECC (PnpInsertEventInQueue.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x140742128 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpAllocateCriticalMemory @ 0x140742468 (PnpAllocateCriticalMemory.c)
 */

__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v15; // rcx
  unsigned int v18; // ebp
  void *CriticalMemory; // rax
  __int64 v20; // rbx

  v15 = 0LL;
  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v15 = *(_QWORD *)(Object[39] + 40LL);
  v18 = *(unsigned __int16 *)(v15 + 40) + 194;
  CriticalMemory = (void *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 1LL, v18, 1265659472LL);
  v20 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  memset(CriticalMemory, 0, v18);
  PnpInitializeTargetDeviceRemoveEvent((void *)v20, v18, Object, a3, a4, a5, a6, a7, a8, (__int64)a11, a12, a13);
  *(_QWORD *)(v20 + 32) = a9;
  *(_QWORD *)(v20 + 40) = a10;
  if ( a14 )
  {
    *a14 = v20;
    ++*(_DWORD *)(v20 + 64);
  }
  return PnpInsertEventInQueue(v20);
}
