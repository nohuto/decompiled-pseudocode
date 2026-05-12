/*
 * XREFs of StorPortUnitIdleState @ 0x1C0041890
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006350 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0006380 (RaidIsUnitControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0013168 (StorUpdateCrashDumpPowerReady.c)
 *     RaidGetStorPoFxComponent @ 0x1C001329C (RaidGetStorPoFxComponent.c)
 *     RaidAdapterIsRegisteredForIdleDetection @ 0x1C002D184 (RaidAdapterIsRegisteredForIdleDetection.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D41C (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pquuuqq_EtwWriteTransfer @ 0x1C003DA04 (McTemplateK0pquuuqq_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003FB78 (RaidUnitSendPoFxIdleStateToMiniport.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // esi
  char *StorPoFxComponent; // rax
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
      McTemplateK0pquuuqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24),
        &EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1744),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2,
        a3);
    if ( a3 )
    {
      v8 = *(_QWORD *)(a1 + 1744);
      *(_QWORD *)(a1 + 2008) = MEMORY[0xFFFFF78000000008];
      v9 = *(_DWORD *)(v8 + 32);
      if ( *(char *)(*(_QWORD *)(a1 + 24) + 108LL) >= 0 )
        v10 = v9 & 0xFFFFFFBF;
      else
        v10 = v9 | 0x40;
      *(_DWORD *)(v8 + 32) = v10;
    }
    else
    {
      ++*(_DWORD *)(a1 + 2060);
      if ( *(_QWORD *)(a1 + 2008) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x40) != 0 || *(char *)(*(_QWORD *)(a1 + 24) + 108LL) < 0 )
        {
          v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 2008);
          *(_QWORD *)(a1 + 2016) += v7 / 0x2710;
          if ( v7 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 2068);
        }
        *(_QWORD *)(a1 + 2008) = 0LL;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 16LL) = a3;
    if ( *(_DWORD *)(a1 + 920) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v11 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*(_QWORD *)(a1 + 1744) + 8LL), a2);
      if ( StorPoFxComponent && *(_DWORD *)StorPoFxComponent == 2 )
        v11 = *((_DWORD *)StorPoFxComponent + 8);
      if ( StorageD3InModernStandbyEnabled )
        v11 = 1;
      if ( a3 <= v11
        && RaidAdapterIsRegisteredForIdleDetection(*(_QWORD *)(a1 + 24))
        && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3360), 1, 0)
        && !RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL) )
      {
        v13 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
        v14 = *(_QWORD *)(a1 + 24);
        if ( *(int *)(v14 + 292) > 1 )
        {
          *(_BYTE *)(a1 + 1912) = 1;
          *(_DWORD *)(a1 + 1916) = a3;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v14 + 5072), (PSLIST_ENTRY)(a1 + 1936));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( !StorEtwLoggingEnabled || (byte_1C0069841 & 1) == 0 )
            goto LABEL_53;
          v16 = (const EVENT_DESCRIPTOR *)&EventUnitIdleStateQueued;
LABEL_52:
          v18 = *(_QWORD *)(a1 + 24);
          LODWORD(v24) = a3;
          LODWORD(v23) = a2;
          LOBYTE(v22) = *(_BYTE *)(a1 + 98);
          LOBYTE(v21) = *(_BYTE *)(a1 + 97);
          LOBYTE(v20) = *(_BYTE *)(a1 + 96);
          LODWORD(v19) = *(_DWORD *)(v18 + 56);
          McTemplateK0pquuuqq_EtwWriteTransfer(v18, v16, v15, **(_QWORD **)(a1 + 1744), v19, v20, v21, v22, v23, v24);
LABEL_53:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
          return;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      RaidUnitSendPoFxIdleStateToMiniport(a1);
      if ( a3 > v11 && RaidAdapterIsRegisteredForIdleDetection(*(_QWORD *)(a1 + 24)) )
      {
LABEL_42:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3360), 0, 1) == 1 )
          RaidAdapterPoFxIdleComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
      }
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 24);
      if ( *(char *)(v17 + 110) < 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x1000) != 0
        && RaidAdapterIsRegisteredForIdleDetection(v17) )
      {
        if ( !a3 )
        {
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3360), 1, 0) )
            RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
          goto LABEL_46;
        }
        goto LABEL_42;
      }
    }
LABEL_46:
    if ( *(_DWORD *)(a1 + 920) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**(_QWORD **)(a1 + 1744), a2);
    if ( !StorEtwLoggingEnabled || (byte_1C0069841 & 1) == 0 )
      goto LABEL_53;
    v16 = (const EVENT_DESCRIPTOR *)&EventUnitIdleStateStop;
    goto LABEL_52;
  }
}
