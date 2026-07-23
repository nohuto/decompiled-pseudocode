/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14038F428
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14038EC0C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14028C720 (ExpAllocatePoolWithTagFromNode.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402DE650 (KeQueryMaximumProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     ExpSaBinaryArrayInsert @ 0x14038F8AC (ExpSaBinaryArrayInsert.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpSaBinaryArrayRemove @ 0x1405B4EF0 (ExpSaBinaryArrayRemove.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // r15
  POOL_TYPE v5; // r13d
  PVOID result; // rax
  __int64 v7; // rdi
  ULONG_PTR v8; // r14
  char v10; // bl
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r12
  struct _KPRCB *v14; // rax
  USHORT v15; // bx
  ULONG_PTR PoolWithTagFromNode; // rdi
  unsigned int v17; // r12d
  struct _KTHREAD *v18; // rbx
  unsigned __int8 v19; // r15
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 AbEntrySummary; // al
  __int64 v27; // rcx
  int SessionId; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v32; // rdx
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // edx
  __int64 v37; // rcx
  char v38; // [rsp+30h] [rbp-50h]
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-4Ch]
  int v41; // [rsp+3Ch] [rbp-44h] BYREF
  int v42; // [rsp+40h] [rbp-40h]
  int v43; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v44; // [rsp+48h] [rbp-38h]
  int v45; // [rsp+4Ch] [rbp-34h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v38 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  LODWORD(v4) = 0;
  v5 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = ExAllocatePoolWithTag(v5, 0x80uLL, 0x61537845u);
  v7 = 0LL;
  v8 = (ULONG_PTR)result;
  if ( !result )
    return result;
  memset(result, 0, 0x80uLL);
  *(_QWORD *)(v8 + 48) = 512LL;
  *(_QWORD *)(v8 + 56) = v8 + 64;
  *(_QWORD *)(v8 + 16) = a1;
  *(_DWORD *)(v8 + 36) = 512;
  v43 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v17 = -1;
  v42 = 0;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_54;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  _BitScanForward((unsigned int *)&v27, AbEntrySummary);
  v42 = v27;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v27);
  v7 = (__int64)&CurrentThread->LockEntries[v27];
  if ( v7 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4F7C8[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v7 + 40) = SessionId;
    *(_QWORD *)(v7 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_51;
  }
LABEL_54:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_51:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, &v43);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v7, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  v10 = 1;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v11 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8, KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  *(_DWORD *)(v8 + 32) = v11;
  if ( v11 == -1 )
    goto LABEL_69;
  v12 = KeNumberProcessors_0;
  v44 = KeNumberProcessors_0;
  if ( !MaximumProcessorCount )
  {
LABEL_17:
    PoolWithTagFromNode = 0LL;
    goto LABEL_18;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v46 = *(_QWORD *)(v13 + ExSaPageArrays);
    v14 = (unsigned int)v4 >= v12 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v4);
    v15 = v14->ParentNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v5, 0x1000uLL, 0x61537845u, v15 | 0x80000000, 0);
    if ( !PoolWithTagFromNode )
      goto LABEL_68;
LABEL_14:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v46, PoolWithTagFromNode, v15) == -1 )
      goto LABEL_68;
    v10 = 1;
    v13 += 8LL;
    LODWORD(v4) = v4 + 1;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      goto LABEL_17;
    v12 = v44;
  }
  KeQueryNodeActiveAffinity(v15, &Affinity, 0LL);
  if ( v38 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v38 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  PoolWithTagFromNode = (ULONG_PTR)ExAllocatePoolWithTag(v5, 0x1000uLL, 0x61537845u);
  if ( PoolWithTagFromNode )
    goto LABEL_14;
LABEL_68:
  v10 = 0;
LABEL_18:
  if ( v38 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTagFromNode )
    ExFreeHeapPool(PoolWithTagFromNode);
  v17 = -1;
  if ( !v10 )
  {
LABEL_69:
    v32 = *(unsigned int *)(v8 + 32);
    if ( (_DWORD)v32 != -1 )
    {
      if ( (_DWORD)v4 )
      {
        do
        {
          v4 = (unsigned int)(v4 - 1);
          v33 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
          v34 = *(_DWORD *)(v8 + 32);
          _BitScanReverse(&v35, v34);
          v36 = 1 << v35;
          v37 = v35 - 2;
          v45 = v37;
          ExFreeHeapPool(*(_QWORD *)(*(_QWORD *)(v33 + 8 * v37) + 8LL * (v34 ^ v36) + 8));
          ExpSaBinaryArrayRemove(v33, *(unsigned int *)(v8 + 32));
        }
        while ( (_DWORD)v4 );
        v32 = *(unsigned int *)(v8 + 32);
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v32);
    }
    ExFreeHeapPool(v8);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  v41 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v17 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      break;
    v23 = (__int64)&v18->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v17 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
          v41 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (signed __int64)(v23 - (unsigned __int64)v18->LockEntries) / 96;
          if ( v19 == 1 )
            v18->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_39;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v17, 0LL);
LABEL_39:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&ExSaPageGroupDescriptorArrayLock, &v41);
  v21 = v18->SpecialApcDisable++ == -1;
  if ( v21 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v25);
  return (PVOID)v8;
}
