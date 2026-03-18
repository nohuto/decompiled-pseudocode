/*
 * XREFs of EtwpAddGuidEntry @ 0x14071A098
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpRegisterProvider @ 0x14075E530 (EtwpRegisterProvider.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x140227360 (KeEnterCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F4A40 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405F4B34 (EtwpReferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1406D4F8C (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x14071A318 (EtwpAllocGuidEntry.c)
 */

__int64 *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbp
  __int64 *GuidEntryByGuid; // rsi
  __int64 v7; // rdi
  __int64 v9; // r14
  __int64 *v10; // r15
  __int64 **v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbp
  __int64 *i; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 *v19; // rax

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 != EtwpHostSiloState )
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, v3);
    if ( !GuidEntryByGuid )
    {
      GuidEntryByGuid = (__int64 *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3);
      if ( !GuidEntryByGuid )
      {
        --*(_QWORD *)(v7 + 32);
        EtwpFreeGuidEntry((char *)v7);
        return 0LL;
      }
    }
  }
  v9 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  v10 = (__int64 *)(v9 + 16 * v3);
  if ( GuidEntryByGuid )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    v11 = (__int64 **)(GuidEntryByGuid + 2);
    GuidEntryByGuid[52] = (__int64)KeGetCurrentThread();
    v12 = (__int64 *)(v7 + 16);
    *(_QWORD *)(v7 + 400) = GuidEntryByGuid;
    v13 = GuidEntryByGuid[2];
    if ( *(__int64 **)(v13 + 8) != GuidEntryByGuid + 2 )
      goto LABEL_33;
    *v12 = v13;
    *(_QWORD *)(v7 + 24) = v11;
    *(_QWORD *)(v13 + 8) = v12;
    *v11 = v12;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)(v9 + 48);
  ExAcquirePushLockExclusiveEx(v9 + 48, 0LL);
  for ( i = (__int64 *)*v10; ; i = (__int64 *)*i )
  {
    if ( i == v10 )
      goto LABEL_23;
    if ( *(_QWORD *)a2 == i[5] && *((_QWORD *)a2 + 1) == i[6] && EtwpReferenceGuidEntry((ULONG_PTR)i) )
      break;
  }
  if ( i )
  {
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegion();
    if ( !GuidEntryByGuid )
      goto LABEL_30;
    v17 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v17 + 8) == v7 + 16 )
    {
      v18 = *(_QWORD **)(v7 + 24);
      if ( *v18 == v7 + 16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v7 + 400) = 0LL;
        goto LABEL_27;
      }
    }
LABEL_33:
    __fastfail(3u);
  }
LABEL_23:
  v19 = (__int64 *)*v10;
  if ( *(__int64 **)(*v10 + 8) != v10 )
    goto LABEL_33;
  *(_QWORD *)v7 = v19;
  i = (__int64 *)v7;
  *(_QWORD *)(v7 + 8) = v10;
  v19[1] = v7;
  *v10 = v7;
  v7 = 0LL;
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegion();
LABEL_27:
  if ( !GuidEntryByGuid )
    goto LABEL_30;
  GuidEntryByGuid[52] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_30:
    if ( v7 )
    {
      --*(_QWORD *)(v7 + 32);
      EtwpFreeGuidEntry((char *)v7);
    }
  }
  return i;
}
