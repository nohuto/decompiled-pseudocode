/*
 * XREFs of EtwpAddGuidEntry @ 0x1406BAE90
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1406BB110 (EtwpAllocGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1406BCEEC (EtwpFreeGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbp
  _QWORD *GuidEntryByGuid; // rsi
  _QWORD *v7; // rdi
  __int64 v9; // r14
  _QWORD *v10; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbp
  _QWORD *i; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rax

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 != EtwpHostSiloState )
  {
    GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3);
    if ( !GuidEntryByGuid )
    {
      GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3);
      if ( !GuidEntryByGuid )
      {
        --v7[4];
        EtwpFreeGuidEntry(v7);
        return 0LL;
      }
    }
  }
  v9 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
  v10 = (_QWORD *)(v9 + 16 * v3);
  if ( GuidEntryByGuid )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    v11 = GuidEntryByGuid + 2;
    GuidEntryByGuid[52] = KeGetCurrentThread();
    v12 = v7 + 2;
    v7[50] = GuidEntryByGuid;
    v13 = GuidEntryByGuid[2];
    if ( *(_QWORD **)(v13 + 8) != GuidEntryByGuid + 2 )
      goto LABEL_33;
    *v12 = v13;
    v7[3] = v11;
    *(_QWORD *)(v13 + 8) = v12;
    *v11 = v12;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)(v9 + 48);
  ExAcquirePushLockExclusiveEx(v9 + 48, 0LL);
  for ( i = (_QWORD *)*v10; ; i = (_QWORD *)*i )
  {
    if ( i == v10 )
      goto LABEL_23;
    if ( *(_QWORD *)a2 == i[5] && *((_QWORD *)a2 + 1) == i[6] && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
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
    v17 = v7[2];
    if ( *(_QWORD **)(v17 + 8) == v7 + 2 )
    {
      v18 = (_QWORD *)v7[3];
      if ( (_QWORD *)*v18 == v7 + 2 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v7[50] = 0LL;
        goto LABEL_27;
      }
    }
LABEL_33:
    __fastfail(3u);
  }
LABEL_23:
  v19 = (_QWORD *)*v10;
  if ( *(_QWORD **)(*v10 + 8LL) != v10 )
    goto LABEL_33;
  *v7 = v19;
  i = v7;
  v7[1] = v10;
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
      --v7[4];
      EtwpFreeGuidEntry(v7);
    }
  }
  return i;
}
