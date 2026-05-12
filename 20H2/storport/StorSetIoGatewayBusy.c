/*
 * XREFs of StorSetIoGatewayBusy @ 0x1C004E1CC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     Feature_Servicing_2205c_38617647__private_IsEnabled @ 0x1C001E278 (Feature_Servicing_2205c_38617647__private_IsEnabled.c)
 *     StorSetIoGatewayNotBusy @ 0x1C004E2F0 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall StorSetIoGatewayBusy(KSPIN_LOCK *SpinLock, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v2 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*((_DWORD *)SpinLock + 10) )
    {
      v5 = *((_DWORD *)SpinLock + 48);
      if ( v5 )
      {
        if ( a2 <= v5 )
          v2 = v5 - a2;
        *((_DWORD *)SpinLock + 8) = v2;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
        *((_DWORD *)SpinLock + 10) = 1;
        if ( (unsigned int)Feature_Servicing_2205c_38617647__private_IsEnabled()
          && !*((_DWORD *)SpinLock + 48)
          && *((_DWORD *)SpinLock + 10) == 1 )
        {
          ++GatewayBusyStateRaceConditionCount;
          StorSetIoGatewayNotBusy(SpinLock);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
}
