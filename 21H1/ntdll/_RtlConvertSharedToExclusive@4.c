/*
 * XREFs of _RtlConvertSharedToExclusive@4 @ 0x4B34A510
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNonNegativeDecrement@4 @ 0x4B2EA910 (_RtlpNonNegativeDecrement@4.c)
 *     _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0 (_RtlAcquireResourceExclusive@8.c)
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __cdecl RtlConvertSharedToExclusive(PRTL_RESOURCE Resource)
{
  LONG *p_NumberOfActive; // edx
  LONG NumberOfActive; // edi
  LONG v3; // eax
  int v4; // eax
  int v5; // eax
  LONG PreviousCount; // [esp+Ch] [ebp-4h] BYREF

  p_NumberOfActive = &Resource->NumberOfActive;
  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive >= 0 )
  {
    if ( NumberOfActive == 1 && _InterlockedCompareExchange(p_NumberOfActive, -1, 1) == 1 )
    {
      Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
      return;
    }
    if ( *p_NumberOfActive >= 0 )
    {
      if ( _InterlockedDecrement(p_NumberOfActive) )
      {
LABEL_17:
        RtlAcquireResourceExclusive(Resource, 1u);
        return;
      }
    }
    else
    {
      if ( *p_NumberOfActive == -1 )
        Resource->ExclusiveOwnerThread = 0;
      if ( _InterlockedIncrement(p_NumberOfActive) )
        goto LABEL_17;
      if ( Resource->NumberOfWaitingShared )
      {
        v3 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v3 )
        {
          v4 = NtReleaseSemaphore(Resource->SharedSemaphore, v3, &PreviousCount);
          if ( v4 < 0 )
            RtlRaiseStatus(v4);
        }
      }
    }
    if ( RtlpNonNegativeDecrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive) )
    {
      v5 = NtReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v5 < 0 )
        RtlRaiseStatus(v5);
    }
    goto LABEL_17;
  }
}
