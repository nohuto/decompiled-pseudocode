/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C0004100
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalMoveList @ 0x1C0002C10 (ACPIInternalMoveList.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C0004570 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessQueueList @ 0x1C0004780 (ACPIBuildProcessQueueList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0004808 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIPowerScheduleDpc @ 0x1C0008120 (ACPIPowerScheduleDpc.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BBB4 (ACPIBuildSynchronizationRequestInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  int v5; // r9d
  __int64 v6; // rbx
  char v7; // bp
  __int64 v8; // rsi
  unsigned __int32 v9; // eax
  __int64 (__fastcall *v10)(PSLIST_ENTRY); // rdx
  signed __int32 v11; // edi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int32 v16; // eax
  __int64 (__fastcall *v17)(PSLIST_ENTRY); // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int32 v20; // eax
  void (__fastcall *v21)(__int64); // rdx
  __int64 v22; // rdi
  signed __int32 v23; // ebx
  signed __int32 v24; // ebx
  char v25; // bp
  __int64 v26; // rsi
  unsigned __int32 v27; // eax
  void (__fastcall *v28)(__int64); // rdx
  signed __int32 v29; // ebx
  __int64 v30; // rsi
  unsigned __int32 v31; // eax
  void (__fastcall *v32)(__int64); // rdx
  signed __int32 v33; // ebx
  __int64 v34; // rsi
  unsigned __int32 v35; // eax
  void (__fastcall *v36)(__int64); // rdx
  signed __int32 v37; // ebx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_14;
  do
  {
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
      ACPIBuildProcessQueueList();
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v6 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList )
    {
      v12 = AcpiBuildOperationRegionList;
      while ( (__int64 *)v12 != &AcpiBuildOperationRegionList )
      {
        v34 = *(_QWORD *)v12;
        v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 1, 1);
        if ( v35 >= 4 )
          goto LABEL_85;
        v36 = (void (__fastcall *)(__int64))*(&AcpiBuildOperationRegionDispatch + v35);
        if ( v36 )
        {
          if ( v35 != 2 )
            *(_DWORD *)(v12 + 28) = v35;
          v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 1, v35);
          v36(v12);
          if ( (v37 & 0xFFFFFFFD) != 0 )
            continue;
        }
        v12 = v34;
      }
      v13 = AcpiBuildPowerResourceList;
      if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
        goto LABEL_21;
      v25 = 1;
      while ( 1 )
      {
        v26 = *(_QWORD *)v13;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 1, 1);
        if ( v27 >= 7 )
          goto LABEL_85;
        v28 = (void (__fastcall *)(__int64))*(&AcpiBuildPowerResourceDispatch + v27);
        if ( v28 )
        {
          if ( v27 != 2 )
            *(_DWORD *)(v13 + 28) = v27;
          v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 1, v27);
          v28(v13);
          if ( (v29 & 0xFFFFFFFD) != 0 )
            goto LABEL_58;
        }
        else
        {
          v25 = 0;
        }
        v13 = v26;
LABEL_58:
        if ( (__int64 *)v13 == &AcpiBuildPowerResourceList )
        {
          if ( v25 )
          {
LABEL_21:
            v14 = AcpiBuildDelayedDependencyList;
            if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
            {
              do
              {
                v15 = *(_QWORD *)v14;
                v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 1, 1);
                if ( v16 >= 5 )
                  goto LABEL_85;
                v17 = AcpiBuildDelayedDependencyDispatch[v16];
                if ( v17 )
                {
                  if ( v16 != 2 )
                    *(_DWORD *)(v14 + 28) = v16;
                  v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 1, v16);
                  v17((PSLIST_ENTRY)v14);
                  if ( (v24 & 0xFFFFFFFD) != 0 )
                    continue;
                }
                v14 = v15;
              }
              while ( (__int64 *)v14 != &AcpiBuildDelayedDependencyList );
              if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
                && (AcpiOverrideAttributes & 0x80000) != 0 )
              {
                ACPIBuildSynchronizationRequestInternal(
                  RootDeviceExtension,
                  (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
                  RootDeviceExtension,
                  v5,
                  0);
              }
            }
            v18 = AcpiBuildDeviceList;
            if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
            {
              while ( 1 )
              {
                v19 = *(_QWORD *)v18;
                v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 24), 1, 1);
                if ( v20 >= 0x22 )
                  break;
                v21 = (void (__fastcall *)(__int64))*(&AcpiBuildDeviceDispatch + v20);
                if ( !v21 )
                  goto LABEL_30;
                if ( v20 != 2 )
                  *(_DWORD *)(v18 + 28) = v20;
                v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 24), 1, v20);
                v21(v18);
                if ( (v23 & 0xFFFFFFFD) == 0 )
LABEL_30:
                  v18 = v19;
                if ( (__int64 *)v18 == &AcpiBuildDeviceList )
                  goto LABEL_32;
              }
LABEL_85:
              KeBugCheckEx(0xA3u, 1uLL, 0x10211FuLL, 0LL, 0LL);
            }
LABEL_32:
            v22 = AcpiBuildThermalZoneList;
            while ( (__int64 *)v22 != &AcpiBuildThermalZoneList )
            {
              v30 = *(_QWORD *)v22;
              v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 24), 1, 1);
              if ( v31 >= 8 )
                goto LABEL_85;
              v32 = (void (__fastcall *)(__int64))*(&AcpiBuildThermalZoneDispatch + v31);
              if ( !v32 )
                goto LABEL_68;
              if ( v31 != 2 )
                *(_DWORD *)(v22 + 28) = v31;
              v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 24), 1, v31);
              v32(v22);
              if ( (v33 & 0xFFFFFFFD) == 0 )
LABEL_68:
                v22 = v30;
            }
            if ( (__int64 *)AcpiBuildDeviceList == &AcpiBuildDeviceList
              && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
              && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
              && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
              && (__int64 *)AcpiBuildThermalZoneList == &AcpiBuildThermalZoneList )
            {
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
              if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
              {
                ACPIInternalMoveList(&AcpiPowerDelayedQueueList, (__int64)&AcpiPowerQueueList);
                ACPIPowerScheduleDpc();
              }
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
            }
            if ( AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
              ACPIBuildProcessSynchronizationList();
            if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
              ACPIBuildProcessSpecialSynchronizationList();
          }
LABEL_12:
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          goto LABEL_13;
        }
      }
    }
    v7 = 1;
    do
    {
      v8 = *(_QWORD *)v6;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 1);
      if ( v9 >= 0xA )
        goto LABEL_85;
      v10 = AcpiBuildRunMethodDispatch[v9];
      if ( !v10 )
      {
        v7 = 0;
LABEL_9:
        v6 = v8;
        continue;
      }
      if ( v9 != 2 )
        *(_DWORD *)(v6 + 28) = v9;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, v9);
      v10((PSLIST_ENTRY)v6);
      if ( (v11 & 0xFFFFFFFD) == 0 )
        goto LABEL_9;
    }
    while ( (__int64 *)v6 != &AcpiBuildRunMethodList );
    if ( !v7 )
      goto LABEL_12;
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    AcpiBuildDpcFlags |= 2u;
LABEL_13:
    v4 = AcpiBuildDpcFlags;
  }
  while ( (AcpiBuildDpcFlags & 2) != 0 );
LABEL_14:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
