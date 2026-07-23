/*
 * XREFs of EtwInitializeSiloState @ 0x1407AB4A4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140202C10 (ExFreeCacheAwareRundownProtection.c)
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1403603C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeMutex @ 0x140360900 (KeInitializeMutex.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403BBF3C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403BC1A4 (EtwpReadPerSiloConfigParameters.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405D9A90 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSubscribeWnfStateChange @ 0x1406D3EE0 (ExSubscribeWnfStateChange.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AB860 (EtwpInitializeAutoLoggers.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwInitializeSiloState(struct _LIST_ENTRY *a1)
{
  char *PoolWithTag; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  ULONG MaximumProcessorCount; // ebx
  unsigned int v6; // ebp
  PVOID v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _WORD *v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // ebx
  char *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  bool IsHostSilo; // bl
  struct _LIST_ENTRY *v24; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // r8
  unsigned int i; // r9d
  __int64 v29; // rbx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x1220uLL, 0x61777445u);
  v3 = 0;
  v4 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag + 8, 0, 0x1218uLL);
  *(_QWORD *)v4 = a1;
  *(_QWORD *)(v4 + 8) = PsGetServerSiloGlobals((__int64)a1);
  EtwpReadPerSiloConfigParameters(v4);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = MaximumProcessorCount * (24 * *(_DWORD *)(v4 + 16) + 64);
  v7 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x61777445u);
  *(_QWORD *)(v4 + 4136) = v7;
  if ( !v7 )
    goto LABEL_29;
  memset(v7, 0, v6);
  v8 = MaximumProcessorCount;
  v9 = *(_QWORD *)(v4 + 4136) + ((unsigned __int64)MaximumProcessorCount << 6);
  if ( MaximumProcessorCount )
  {
    v10 = 0LL;
    do
    {
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4136)) = v9;
      v10 += 64LL;
      v11 = v9 + 8LL * *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4136) - 56) = v11;
      v12 = v11 + 8LL * *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4136) - 48) = v12;
      v9 = v12 + 8LL * *(unsigned int *)(v4 + 16);
      --v8;
    }
    while ( v8 );
  }
  v13 = (_WORD *)(v4 + 4048);
  *(_WORD *)(v4 + 4048) = 3;
  v14 = (_QWORD *)(v4 + 464);
  v15 = 64LL;
  do
  {
    v14[6] = 0LL;
    v16 = v14;
    v17 = 3LL;
    do
    {
      v16[1] = v16;
      *v16 = v16;
      v16 += 2;
      --v17;
    }
    while ( v17 );
    v14 += 7;
    --v15;
  }
  while ( v15 );
  v18 = (unsigned int)(8 * *(_DWORD *)(v4 + 16));
  v19 = 16 * *(_DWORD *)(v4 + 16);
  v20 = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v19, 0x61777445u);
  *(_QWORD *)(v4 + 448) = v20;
  if ( !v20 )
  {
LABEL_29:
    v30 = *(void **)(v4 + 4136);
    if ( v30 )
      ExFreePoolWithTag(v30, 0x61777445u);
    v31 = *(void **)(v4 + 448);
    if ( v31 )
      ExFreePoolWithTag(v31, 0x61777445u);
    v32 = *(void **)(v4 + 4192);
    if ( v32 )
      ExFreePoolWithTag(v32, 0x61777445u);
    ExFreePoolWithTag((PVOID)v4, 0x61777445u);
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(v4 + 456) = &v20[v18];
  memset(v20, 0, v19);
  v21 = 0LL;
  if ( *(_DWORD *)(v4 + 16) )
  {
    while ( 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 456) + 8 * v21) = 1LL;
      *(_QWORD *)(*(_QWORD *)(v4 + 448) + 8 * v21) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(*(_QWORD *)(v4 + 448) + 8 * v21) )
        break;
      v21 = (unsigned int)(v21 + 1);
      if ( (unsigned int)v21 >= *(_DWORD *)(v4 + 16) )
        goto LABEL_14;
    }
    if ( (_DWORD)v21 )
    {
      v29 = 0LL;
      do
      {
        ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v4 + 448) + v29));
        v29 += 8LL;
        --v21;
      }
      while ( v21 );
    }
    goto LABEL_29;
  }
LABEL_14:
  *(_QWORD *)(v4 + 416) = v4;
  *(_QWORD *)(v4 + 432) = 0LL;
  *(GUID *)(v4 + 64) = SecurityProviderGuid;
  KeInitializeMutex((PRKMUTEX)(v4 + 4584), 0);
  *((_QWORD *)PsGetServerSiloGlobals((__int64)a1) + 108) = v4;
  IsHostSilo = PsIsHostSilo(v22);
  if ( IsHostSilo )
  {
    qword_140C10DD8 = *(_QWORD *)(v4 + 456);
    EtwpHostSiloState = v4;
    qword_140C10DE0 = v4;
    ExSubscribeWnfStateChange(
      v4 + 4144,
      (__int64)&WNF_CONT_RESTORE_FROM_SNAPSHOT_COMPLETE,
      1,
      0,
      (__int64)EtwpContainerResumeWnfCallback,
      0LL);
  }
  v24 = PsAttachSiloToCurrentThread(a1);
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4152),
    (PVOID *)(v4 + 4192),
    (_WORD *)(v4 + 4200),
    (_DWORD *)(v4 + 4204),
    (_QWORD *)(v4 + 4184),
    (GUID *)(v4 + 4168));
  if ( IsHostSilo )
    qword_140D587C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwpInitializeAutoLoggers();
  if ( IsHostSilo )
    qword_140D587D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 432, 0LL);
  v26 = v4 + 156;
  *(_QWORD *)(v4 + 440) = KeGetCurrentThread();
  for ( i = 0; i < 8; ++i )
  {
    if ( *v13 )
    {
      *(_WORD *)(v26 + 2) = *v13;
      *(_DWORD *)(v26 - 4) = 1;
      *(_BYTE *)v26 = -1;
      *(_QWORD *)(v26 + 12) = -1LL;
      *(_QWORD *)(v26 + 20) = 0LL;
      *(_DWORD *)(v26 + 4) = 64;
      *(_BYTE *)(v4 + 4064) |= 1 << i;
    }
    ++v13;
    v26 += 32LL;
  }
  *(_QWORD *)(v4 + 440) = 0LL;
  ExReleasePushLockEx(v4 + 432, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v4 + 4096) = 0LL;
  *(_QWORD *)(v4 + 4080) = 0LL;
  *(_QWORD *)(v4 + 4088) = 0LL;
  return v3;
}
