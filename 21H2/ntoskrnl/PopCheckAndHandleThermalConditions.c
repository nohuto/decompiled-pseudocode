/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x1403C5528
 * Callers:
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x14038AFC0 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14056FAAC (PopThermalStandbyNotify.c)
 *     PopThermalWriteShutdownToRegistry @ 0x14056FC18 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceThermalStandbyState @ 0x140573340 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x1405737BC (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x140573858 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x140573D10 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140573E3C (PopTraceZoneCr3Tripped.c)
 *     PopIsHibernateSupported @ 0x14066EAA8 (PopIsHibernateSupported.c)
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopCriticalShutdown @ 0x1408E7854 (PopCriticalShutdown.c)
 *     PopUpdateOverThrottledCount @ 0x1408E80C4 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1408EBFA4 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1408EC0A0 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1408F9EB0 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1408F9ED4 (PopSqmThermalHibernate.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

void __fastcall PopCheckAndHandleThermalConditions(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // di
  char v5; // bp
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // bl
  _DWORD v22[4]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v23[2]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v4 = 0;
  v5 = 0;
  memset(v23, 0, 24);
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v4 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v2);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v5 = 1;
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v2);
    PopSqmThermalHibernate(a1);
  }
  else if ( !v4 )
  {
    goto LABEL_4;
  }
  PopAcquirePolicyLock(a1, a2);
  if ( v5 )
  {
    if ( (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
    {
      PopThermalHibernateInitiated = 1;
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
      PopThermalStandbyEndTracking(2LL, v9, v10);
      PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
      v22[2] = 0;
      v22[0] = 3;
      v22[1] = -1073741820;
      v23[0] = 0x8000000001uLL;
      PopExecutePowerAction((unsigned int)v23, 0, (unsigned int)v22, 5, 1);
    }
    else
    {
      v4 = 1;
    }
  }
  if ( v4 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v2, 0x6D546F50u);
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
    if ( !PopThermalCriticalShutdownInitiated )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
      PopThermalStandbyEndTracking(3LL, v15, v16);
      PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
      PopThermalCriticalShutdownInitiated = 1;
      if ( PopThermalCriticalShutdownEnabled )
        PopCriticalShutdown();
    }
  }
  PopReleasePolicyLock(v8, v7);
LABEL_4:
  v6 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v6 )
  {
    *(_BYTE *)(a1 + 73) = v6;
    PopUpdateOverThrottledCount(a1);
  }
  if ( *(_BYTE *)(a1 + 72) != *(_BYTE *)(a1 + 211) )
  {
    PopDiagTraceThermalStandbyState(*(_QWORD *)(a1 + 48), *(unsigned __int8 *)(a1 + 211));
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    v17 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v17;
    if ( v17 )
    {
      if ( ++dword_140C22E94 == 1 )
      {
        byte_140C22E9C = 1;
        ++dword_140C22E98;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140C22E98, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140C22E98, a1);
      --dword_140C22E94;
    }
    if ( dword_140C22E94 )
    {
      v21 = 1;
    }
    else
    {
      v21 = 0;
      PopThermalStandbyEndTracking(0LL, v18, v20);
      PopTraceCr3Mitigated((unsigned int)dword_140C22E98);
      if ( HIBYTE(word_140C22E90) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140C22E90) = 0;
LABEL_39:
        PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
        return;
      }
    }
    if ( !v5 && v21 && (_BYTE)word_140C22E90 && !HIBYTE(word_140C22E90) )
    {
      LOBYTE(v19) = 1;
      PopThermalStandbyNotify(v19);
      word_140C22E90 = 256;
    }
    goto LABEL_39;
  }
}
