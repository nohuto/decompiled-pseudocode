/*
 * XREFs of _RtlpUnWaitCriticalSection@4 @ 0x4B34ABA0
 * Callers:
 *     <none>
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

char __stdcall RtlpUnWaitCriticalSection(int a1)
{
  HANDLE v1; // esi
  signed __int32 v2; // ecx
  int v3; // eax
  HANDLE EventHandle; // [esp+Ch] [ebp-4h] BYREF

  v1 = *(HANDLE *)(a1 + 16);
  if ( !v1 )
  {
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
    v1 = (HANDLE)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), v2, 0);
    if ( v1 )
    {
      if ( EventHandle != (HANDLE)-1 )
        NtClose(EventHandle);
      EventHandle = v1;
    }
    else
    {
      v1 = EventHandle;
    }
  }
  if ( v1 == (HANDLE)-1 )
  {
    _InterlockedOr((volatile signed __int32 *)&EventHandle, 0);
    LOBYTE(v3) = RtlpWakeByAddress(a1 + 4, 0, 0);
  }
  else
  {
    v3 = NtSetEvent(v1, 0);
    if ( v3 < 0 )
      RtlRaiseStatus(v3);
  }
  return v3;
}
