/*
 * XREFs of EtwpAddGuidEntry @ 0x140792A4C
 * Callers:
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140792A4C (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140796798 (EtwpFindOrCreateGuidEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     EtwpFreeGuidEntry @ 0x1406D708C (EtwpFreeGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x140792A4C (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x140792BF0 (EtwpAllocGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1407968D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140796BF4 (EtwpReferenceGuidEntry.c)
 */

__int64 *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *GuidEntryByGuid; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 *v9; // r15
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // r14
  __int64 *i; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rdx

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 == EtwpHostSiloState
    || (GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL
    || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
    v9 = (__int64 *)(v8 + 16 * v3);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v17 = GuidEntryByGuid + 2;
      GuidEntryByGuid[52] = KeGetCurrentThread();
      v18 = (_QWORD *)(v7 + 16);
      *(_QWORD *)(v7 + 400) = GuidEntryByGuid;
      v19 = GuidEntryByGuid[2];
      if ( *(_QWORD **)(v19 + 8) != GuidEntryByGuid + 2 )
        goto LABEL_32;
      *v18 = v19;
      *(_QWORD *)(v7 + 24) = v17;
      *(_QWORD *)(v19 + 8) = v18;
      *v17 = v18;
    }
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = (volatile signed __int64 *)(v8 + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
    for ( i = (__int64 *)*v9; ; i = (__int64 *)*i )
    {
      if ( i == v9 )
        goto LABEL_10;
      v13 = *(_QWORD *)a2 - i[5];
      if ( *(_QWORD *)a2 == i[5] )
        v13 = *((_QWORD *)a2 + 1) - i[6];
      if ( !v13 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      if ( !GuidEntryByGuid )
        goto LABEL_20;
      v20 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(v20 + 8) == v7 + 16 )
      {
        v21 = *(_QWORD **)(v7 + 24);
        if ( *v21 == v7 + 16 )
        {
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *(_QWORD *)(v7 + 400) = 0LL;
LABEL_30:
          GuidEntryByGuid[52] = 0LL;
          ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
          KeLeaveCriticalRegion();
          if ( !v7 )
            return i;
          EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_20:
          --*(_QWORD *)(v7 + 32);
          EtwpFreeGuidEntry((char *)v7);
          return i;
        }
      }
    }
    else
    {
LABEL_10:
      v14 = (__int64 *)*v9;
      if ( *(__int64 **)(*v9 + 8) == v9 )
      {
        *(_QWORD *)v7 = v14;
        i = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v9;
        v14[1] = v7;
        *v9 = v7;
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegion();
        v7 = 0LL;
        if ( !GuidEntryByGuid )
          return i;
        goto LABEL_30;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  --*(_QWORD *)(v7 + 32);
  EtwpFreeGuidEntry((char *)v7);
  return 0LL;
}
