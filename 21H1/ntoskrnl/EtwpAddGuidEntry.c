/*
 * XREFs of EtwpAddGuidEntry @ 0x14067F4C8
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405F6270 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpRegisterProvider @ 0x14074B530 (EtwpRegisterProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x1405F6224 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x14067F65C (EtwpAllocGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x1406DE9BC (EtwpFreeGuidEntry.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rbp
  __int64 *GuidEntryByGuid; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // r15
  volatile signed __int64 *v11; // rbp
  _QWORD *i; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rax
  __int64 **v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // r8

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 == EtwpHostSiloState
    || (GuidEntryByGuid = EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, v3)) != 0LL
    || (GuidEntryByGuid = (__int64 *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
    CurrentThread = KeGetCurrentThread();
    v10 = (_QWORD *)(v8 + 16 * v3);
    --CurrentThread->KernelApcDisable;
    v11 = (volatile signed __int64 *)(v8 + 48);
    ExAcquirePushLockExclusiveEx(v8 + 48, 0LL);
    for ( i = (_QWORD *)*v10; ; i = (_QWORD *)*i )
    {
      if ( i == v10 )
        goto LABEL_9;
      v13 = *(_QWORD *)a2 - i[5];
      if ( *(_QWORD *)a2 == i[5] )
        v13 = *((_QWORD *)a2 + 1) - i[6];
      if ( !v13 && EtwpReferenceGuidEntry((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      --v7[4];
      EtwpFreeGuidEntry(v7);
      v7 = 0LL;
    }
    else
    {
LABEL_9:
      v14 = (_QWORD *)*v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_28;
      *v7 = v14;
      i = v7;
      v7[1] = v10;
      v14[1] = v7;
      *v10 = v7;
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
    }
    if ( !GuidEntryByGuid )
      return i;
    if ( !v7 )
    {
      EtwpUnreferenceGuidEntry(GuidEntryByGuid);
      return i;
    }
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    GuidEntryByGuid[52] = (__int64)KeGetCurrentThread();
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 51), 0LL);
    v18 = (__int64 **)(GuidEntryByGuid + 2);
    i[52] = KeGetCurrentThread();
    v19 = i + 2;
    i[50] = GuidEntryByGuid;
    v20 = GuidEntryByGuid[2];
    if ( *(__int64 **)(v20 + 8) == GuidEntryByGuid + 2 )
    {
      i[3] = v18;
      *v19 = v20;
      *(_QWORD *)(v20 + 8) = v19;
      *v18 = v19;
      i[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(i + 51), 0LL);
      KeLeaveCriticalRegion();
      GuidEntryByGuid[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      KeLeaveCriticalRegion();
      return i;
    }
LABEL_28:
    __fastfail(3u);
  }
  --v7[4];
  EtwpFreeGuidEntry(v7);
  return 0LL;
}
