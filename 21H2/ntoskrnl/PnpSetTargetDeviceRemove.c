/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x14076729C
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x14065FA0C (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14084F060 (PiDevCfgProcessDeviceCallback.c)
 * Callees:
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1407673E8 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpAllocateCriticalMemory @ 0x140767730 (PnpAllocateCriticalMemory.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
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
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  __int64 v17; // rcx
  unsigned int v18; // ebp
  _QWORD *CriticalMemory; // rax
  _QWORD *v20; // rbx

  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v17 = *(_QWORD *)(Object[39] + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) + 194;
  CriticalMemory = (_QWORD *)PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, 256LL, v18, 1265659472LL);
  v20 = CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  PnpInitializeTargetDeviceRemoveEvent(CriticalMemory, v18, Object, a3, a4, a5, a6, a7, a8, (__int64)a11, a12, a13);
  v20[4] = 0LL;
  v20[5] = 0LL;
  if ( a14 )
  {
    *a14 = v20;
    ++*((_DWORD *)v20 + 16);
  }
  return PnpInsertEventInQueue(v20);
}
