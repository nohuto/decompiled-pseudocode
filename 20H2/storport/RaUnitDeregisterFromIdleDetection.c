/*
 * XREFs of RaUnitDeregisterFromIdleDetection @ 0x1C001A018
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C001C77C (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00742F0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C00058F0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0005C84 (RaidUnitPoFxIdleComponent.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00061E8 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidIsUnitControlSupported @ 0x1C0006380 (RaidIsUnitControlSupported.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C00135D4 (RaidUnitCancelWaitWakeIrp.c)
 *     RaCallMiniportUnitControl @ 0x1C001859C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

void __fastcall RaUnitDeregisterFromIdleDetection(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  _QWORD *v12; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(char *)(a1 + 449) < 0 )
  {
    if ( *(_QWORD *)(a1 + 24)
      && (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 4) != 0
      && RaidIsUnitControlSupported(a1, 4) )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v14 = 0LL;
      LOWORD(v14) = 1;
      DWORD1(v14) = 4;
      WORD1(v14) = *(_WORD *)(v2 + 56);
      WORD4(v14) = *(_WORD *)(a1 + 96);
      BYTE10(v14) = *(_BYTE *)(a1 + 98);
      RaCallMiniportUnitControl(v2 + 320);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitReenablePendingTimer(a1, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1744) + 88LL), &LockHandle);
    StorPortUnitFlushActivePendingRequestQueue(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD **)(a1 + 1744);
    v6 = v5[12];
    if ( v6 )
    {
      PoUnregisterCoalescingCallback(v6, v3, v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 96LL) = 0LL;
      v5 = *(_QWORD **)(a1 + 1744);
    }
    v7 = (void *)v5[13];
    if ( v7 )
    {
      PoUnregisterPowerSettingCallback(v7);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 104LL) = 0LL;
      v5 = *(_QWORD **)(a1 + 1744);
    }
    v8 = v5[14];
    if ( v8 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v8, v3, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 112LL) = 0LL;
      v5 = *(_QWORD **)(a1 + 1744);
    }
    v9 = v5[15];
    if ( v9 )
    {
      LOBYTE(v3) = 1;
      v10 = ExDeleteTimer(v9, v3, 0LL, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 120LL) = 0LL;
      if ( v10 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 140LL) & 1) != 0 )
          RaidUnitPoFxIdleComponent(a1, 0, 0, 0LL);
      }
    }
    v11 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1736);
    *(_BYTE *)(a1 + 449) &= ~0x80u;
    ExWaitForRundownProtectionReleaseCacheAware(v11);
    v12 = *(_QWORD **)(a1 + 1744);
    *(_QWORD *)(a1 + 1744) = 0LL;
    PoFxUnregisterDevice(*v12);
    ExFreePoolWithTag(v12, 0x4F506152u);
  }
}
