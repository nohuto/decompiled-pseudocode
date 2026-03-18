/*
 * XREFs of EtwpAddGuidEntry @ 0x1406369BC
 * Callers:
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14066BC00 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x14074F950 (EtwpRegisterProvider.c)
 * Callees:
 *     KeEnterCriticalRegion @ 0x140205E40 (KeEnterCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     Feature_Servicing_2104_31612686__private_IsEnabled @ 0x1403F28E8 (Feature_Servicing_2104_31612686__private_IsEnabled.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x140636DE0 (EtwpAllocGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14066E1D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x14066E2C4 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14070189C (EtwpFreeGuidEntry.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  ULONG_PTR GuidEntryByGuid; // rbp
  _QWORD *v7; // rdi
  __int64 v9; // r9
  __int64 v10; // r15
  _QWORD *v11; // r14
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  struct _KTHREAD *v15; // rax
  volatile signed __int64 *v16; // r15
  _QWORD *i; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v22; // r15
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 != EtwpHostSiloState )
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3);
    if ( !GuidEntryByGuid )
    {
      GuidEntryByGuid = EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3, v9);
      if ( !GuidEntryByGuid )
      {
        --v7[4];
        EtwpFreeGuidEntry(v7);
        return 0LL;
      }
    }
  }
  v10 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  v11 = (_QWORD *)(v10 + 16 * v3);
  if ( !(unsigned int)Feature_Servicing_2104_31612686__private_IsEnabled() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v22 = (volatile signed __int64 *)(v10 + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v22, 0LL);
    for ( i = (_QWORD *)*v11; ; i = (_QWORD *)*i )
    {
      if ( i == v11 )
        goto LABEL_43;
      if ( *(_QWORD *)a2 == i[5] && *((_QWORD *)a2 + 1) == i[6] && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v22);
      KeAbPostRelease((ULONG_PTR)v22);
      KeLeaveCriticalRegion();
      --v7[4];
      EtwpFreeGuidEntry(v7);
      v7 = 0LL;
    }
    else
    {
LABEL_43:
      v23 = (_QWORD *)*v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_53;
      *v7 = v23;
      i = v7;
      v7[1] = v11;
      v23[1] = v7;
      *v11 = v7;
      if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v22);
      KeAbPostRelease((ULONG_PTR)v22);
      KeLeaveCriticalRegion();
    }
    if ( !GuidEntryByGuid )
      return i;
    if ( !v7 )
    {
      EtwpUnreferenceGuidEntry(GuidEntryByGuid);
      return i;
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(GuidEntryByGuid + 408, 0LL);
    *(_QWORD *)(GuidEntryByGuid + 416) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 51), 0LL);
    v24 = (_QWORD *)(GuidEntryByGuid + 16);
    i[52] = KeGetCurrentThread();
    v25 = i + 2;
    i[50] = GuidEntryByGuid;
    v26 = *(_QWORD *)(GuidEntryByGuid + 16);
    if ( *(_QWORD *)(v26 + 8) == GuidEntryByGuid + 16 )
    {
      i[3] = v24;
      *v25 = v26;
      *(_QWORD *)(v26 + 8) = v25;
      *v24 = v25;
      i[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(i + 51), 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(GuidEntryByGuid + 416) = 0LL;
      ExReleasePushLockEx(GuidEntryByGuid + 408, 0LL);
      KeLeaveCriticalRegion();
      return i;
    }
LABEL_53:
    __fastfail(3u);
  }
  if ( GuidEntryByGuid )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(GuidEntryByGuid + 408, 0LL);
    v12 = (_QWORD *)(GuidEntryByGuid + 16);
    *(_QWORD *)(GuidEntryByGuid + 416) = KeGetCurrentThread();
    v13 = v7 + 2;
    v7[50] = GuidEntryByGuid;
    v14 = *(_QWORD *)(GuidEntryByGuid + 16);
    if ( *(_QWORD *)(v14 + 8) != GuidEntryByGuid + 16 )
      goto LABEL_53;
    *v13 = v14;
    v7[3] = v12;
    *(_QWORD *)(v14 + 8) = v13;
    *v12 = v13;
  }
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = (volatile signed __int64 *)(v10 + 48);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v16, 0LL);
  for ( i = (_QWORD *)*v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
      goto LABEL_24;
    if ( *(_QWORD *)a2 == i[5] && *((_QWORD *)a2 + 1) == i[6] && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
      break;
  }
  if ( !i )
  {
LABEL_24:
    v20 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) == v11 )
    {
      *v7 = v20;
      i = v7;
      v7[1] = v11;
      *(_QWORD *)(v20 + 8) = v7;
      *v11 = v7;
      v7 = 0LL;
      if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      KeLeaveCriticalRegion();
      goto LABEL_28;
    }
    goto LABEL_53;
  }
  if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  KeAbPostRelease((ULONG_PTR)v16);
  KeLeaveCriticalRegion();
  if ( !GuidEntryByGuid )
    goto LABEL_31;
  v18 = v7[2];
  if ( *(_QWORD **)(v18 + 8) != v7 + 2 )
    goto LABEL_53;
  v19 = (_QWORD *)v7[3];
  if ( (_QWORD *)*v19 != v7 + 2 )
    goto LABEL_53;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  v7[50] = 0LL;
LABEL_28:
  if ( !GuidEntryByGuid )
    goto LABEL_31;
  *(_QWORD *)(GuidEntryByGuid + 416) = 0LL;
  ExReleasePushLockEx(GuidEntryByGuid + 408, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_31:
    if ( v7 )
    {
      --v7[4];
      EtwpFreeGuidEntry(v7);
    }
  }
  return i;
}
