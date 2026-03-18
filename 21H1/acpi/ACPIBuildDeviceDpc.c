/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C001CB70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessSynchronizationList @ 0x1C00198E4 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIPowerScheduleDpc @ 0x1C001CB1C (ACPIPowerScheduleDpc.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001D094 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C690 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalMoveList @ 0x1C0031668 (ACPIInternalMoveList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int32 v13; // eax
  void (__fastcall *v14)(__int64); // rdx
  __int64 v15; // rdi
  signed __int32 v16; // edi
  char v17; // bp
  __int64 v18; // rsi
  unsigned __int32 v19; // eax
  __int64 (__fastcall *v20)(PSLIST_ENTRY); // rdx
  int v21; // ebx
  signed __int32 v22; // ebx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r8
  char v27; // bp
  __int64 v28; // rsi
  unsigned __int32 v29; // eax
  void (__fastcall *v30)(__int64); // rdx
  signed __int32 v31; // ebx
  __int64 v32; // rsi
  unsigned __int32 v33; // eax
  __int64 (__fastcall *v34)(PSLIST_ENTRY); // rdx
  signed __int32 v35; // ebx
  __int64 v36; // rsi
  unsigned __int32 v37; // eax
  void (__fastcall *v38)(__int64); // rdx
  signed __int32 v39; // ebx
  __int64 v40; // rsi
  unsigned __int32 v41; // eax
  void (__fastcall *v42)(__int64); // rdx
  signed __int32 v43; // ebx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_20;
  do
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v23 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          if ( v23[1] != v5
            || (v24 = *(__int64 ***)(v5 + 8), *v24 != (__int64 *)v5)
            || (*v24 = v23, v23[1] = (__int64)v24,
                            v25 = *(_QWORD *)(v5 + 128),
                            v26 = *(__int64 **)(v25 + 8),
                            *v26 != v25) )
          {
            __fastfail(3u);
          }
          *(_QWORD *)v5 = v25;
          *(_QWORD *)(v5 + 8) = v26;
          *v26 = v5;
          *(_QWORD *)(v25 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v23;
      }
      while ( v23 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v7 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList )
    {
      v17 = 1;
      while ( 1 )
      {
        v18 = *(_QWORD *)v7;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, 1);
        if ( v19 >= 0xA )
          goto LABEL_93;
        v20 = AcpiBuildRunMethodDispatch[v19];
        if ( v20 )
        {
          if ( v19 != 2 )
            *(_DWORD *)(v7 + 28) = v19;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, v19);
          v20((PSLIST_ENTRY)v7);
          if ( (v22 & 0xFFFFFFFD) != 0 )
            goto LABEL_30;
        }
        else
        {
          v17 = 0;
        }
        v7 = v18;
LABEL_30:
        if ( (__int64 *)v7 == &AcpiBuildRunMethodList )
        {
          if ( v17 )
            v21 = 0;
          else
            v21 = 259;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          if ( v21 != 259 )
            AcpiBuildDpcFlags |= 2u;
          goto LABEL_19;
        }
      }
    }
    v8 = AcpiBuildOperationRegionList;
    while ( (__int64 *)v8 != &AcpiBuildOperationRegionList )
    {
      v40 = *(_QWORD *)v8;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 1, 1);
      if ( v41 >= 4 )
        goto LABEL_93;
      v42 = (void (__fastcall *)(__int64))*(&AcpiBuildOperationRegionDispatch + v41);
      if ( v42 )
      {
        if ( v41 != 2 )
          *(_DWORD *)(v8 + 28) = v41;
        v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 1, v41);
        v42(v8);
        if ( (v43 & 0xFFFFFFFD) != 0 )
          continue;
      }
      v8 = v40;
    }
    v9 = AcpiBuildPowerResourceList;
    if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
      goto LABEL_6;
    v27 = 1;
    do
    {
      v28 = *(_QWORD *)v9;
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 1, 1);
      if ( v29 >= 7 )
        goto LABEL_93;
      v30 = (void (__fastcall *)(__int64))*(&AcpiBuildPowerResourceDispatch + v29);
      if ( !v30 )
      {
        v27 = 0;
LABEL_61:
        v9 = v28;
        continue;
      }
      if ( v29 != 2 )
        *(_DWORD *)(v9 + 28) = v29;
      v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 1, v29);
      v30(v9);
      if ( (v31 & 0xFFFFFFFD) == 0 )
        goto LABEL_61;
    }
    while ( (__int64 *)v9 != &AcpiBuildPowerResourceList );
    if ( v27 )
    {
LABEL_6:
      v10 = AcpiBuildDelayedDependencyList;
      if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
      {
        do
        {
          v32 = *(_QWORD *)v10;
          v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, 1);
          if ( v33 >= 5 )
            goto LABEL_93;
          v34 = AcpiBuildDelayedDependencyDispatch[v33];
          if ( v34 )
          {
            if ( v33 != 2 )
              *(_DWORD *)(v10 + 28) = v33;
            v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, v33);
            v34((PSLIST_ENTRY)v10);
            if ( (v35 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v10 = v32;
        }
        while ( (__int64 *)v10 != &AcpiBuildDelayedDependencyList );
        if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
          && (AcpiOverrideAttributes & 0x80000) != 0 )
        {
          ACPIBuildSynchronizationRequestInternal(
            RootDeviceExtension,
            (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
            RootDeviceExtension,
            v6,
            0);
        }
      }
      v11 = AcpiBuildDeviceList;
      if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)v11;
          v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 1, 1);
          if ( v13 >= 0x22 )
            break;
          v14 = (void (__fastcall *)(__int64))*(&AcpiBuildDeviceDispatch + v13);
          if ( !v14 )
            goto LABEL_10;
          if ( v13 != 2 )
            *(_DWORD *)(v11 + 28) = v13;
          v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 1, v13);
          v14(v11);
          if ( (v16 & 0xFFFFFFFD) == 0 )
LABEL_10:
            v11 = v12;
          if ( (__int64 *)v11 == &AcpiBuildDeviceList )
            goto LABEL_12;
        }
LABEL_93:
        KeBugCheckEx(0xA3u, 1uLL, 0x102131uLL, 0LL, 0LL);
      }
LABEL_12:
      v15 = AcpiBuildThermalZoneList;
      while ( (__int64 *)v15 != &AcpiBuildThermalZoneList )
      {
        v36 = *(_QWORD *)v15;
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 24), 1, 1);
        if ( v37 >= 8 )
          goto LABEL_93;
        v38 = (void (__fastcall *)(__int64))*(&AcpiBuildThermalZoneDispatch + v37);
        if ( !v38 )
          goto LABEL_81;
        if ( v37 != 2 )
          *(_DWORD *)(v15 + 28) = v37;
        v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 24), 1, v37);
        v38(v15);
        if ( (v39 & 0xFFFFFFFD) == 0 )
LABEL_81:
          v15 = v36;
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
          ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
          ACPIPowerScheduleDpc();
        }
        KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      }
      if ( AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
        ACPIBuildProcessSynchronizationList();
      if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
        ACPIBuildProcessSpecialSynchronizationList();
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
LABEL_19:
    v4 = AcpiBuildDpcFlags;
  }
  while ( (AcpiBuildDpcFlags & 2) != 0 );
LABEL_20:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
