/*
 * XREFs of _RtlpCreateDeferredCriticalSectionEvent@4 @ 0x4B2DFE90
 * Callers:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 */

HANDLE __thiscall RtlpCreateDeferredCriticalSectionEvent(volatile signed __int32 *this)
{
  signed __int32 v2; // ecx
  signed __int32 v3; // esi
  HANDLE result; // eax
  HANDLE EventHandle; // [esp+4h] [ebp-4h] BYREF

  v2 = -1;
  EventHandle = (HANDLE)-1;
  if ( RtlpForceCSToUseEvents )
  {
    if ( NtCreateEvent(&EventHandle, 0x100003u, 0, SynchronizationEvent, 0) >= 0 )
    {
      v2 = (signed __int32)EventHandle;
    }
    else
    {
      v2 = -1;
      EventHandle = (HANDLE)-1;
    }
  }
  v3 = _InterlockedCompareExchange(this + 4, v2, 0);
  result = EventHandle;
  if ( v3 )
  {
    if ( EventHandle != (HANDLE)-1 )
      NtClose(EventHandle);
    return (HANDLE)v3;
  }
  return result;
}
