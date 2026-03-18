/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x1403D33C4
 * Callers:
 *     PopThermalWorker @ 0x140850980 (PopThermalWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x14038B428 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405D0668 (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1405D0870 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStateChange @ 0x1405D36DC (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x1405D3D68 (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x1405D3E04 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D44DC (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D4604 (PopTraceZoneCr3Tripped.c)
 *     PopIsHibernateSupported @ 0x1408111A0 (PopIsHibernateSupported.c)
 *     PopUpdateOverThrottledCount @ 0x140990924 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140993810 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140993904 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1409A040C (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1409A0430 (PopSqmThermalHibernate.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // r14
  char v3; // si
  bool v4; // bp
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char IsHibernateSupported; // bl
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // bl

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
    PopAcquirePolicyLock(v7, v6);
    IsHibernateSupported = PopIsHibernateSupported(&PopCapabilities);
    if ( !IsHibernateSupported )
      v3 = 1;
    PopReleasePolicyLock(v9, v8);
    v4 = IsHibernateSupported != 0;
    if ( !v3 )
      goto LABEL_20;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_4;
  }
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
  v12 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v13 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v13 = 0LL;
  v14 = a1 + 128;
  if ( *(_BYTE *)(a1 + 228) )
    v14 = 0LL;
  PopThermalWriteShutdownToRegistry((v13 + 128) & -(__int64)(v13 != 0), v14, -v13);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x6D546F50u);
LABEL_20:
  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
  if ( v4 )
    LOBYTE(word_140C22211) = 1;
  if ( v3 )
    byte_140C22213 = 1;
  PopReleaseRwLock((ULONG_PTR)&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  if ( *(_BYTE *)(a1 + 72) != *(_BYTE *)(a1 + 211) )
  {
    PopDiagTraceThermalStateChange(
      *(_QWORD *)(a1 + 48),
      *(unsigned __int8 *)(a1 + 211),
      POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    v15 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v15;
    if ( v15 )
    {
      if ( ++dword_140C22074 == 1 )
      {
        byte_140C2207C = 1;
        ++dword_140C22078;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140C22078, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140C22078, a1);
      --dword_140C22074;
    }
    if ( dword_140C22074 )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      PopThermalStandbyEndTracking(0LL, v16, v18);
      PopTraceCr3Mitigated((unsigned int)dword_140C22078);
      if ( HIBYTE(word_140C22070) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140C22070) = 0;
LABEL_37:
        PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
        return;
      }
    }
    if ( !v4 && v19 && (_BYTE)word_140C22070 && !HIBYTE(word_140C22070) )
    {
      LOBYTE(v17) = 1;
      PopThermalStandbyNotify(v17);
      word_140C22070 = 256;
    }
    goto LABEL_37;
  }
}
