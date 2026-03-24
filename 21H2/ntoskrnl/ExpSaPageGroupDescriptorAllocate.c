/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x140391DE8
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x1403915CC (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeGetPrcb @ 0x140228E30 (KeGetPrcb.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14027B730 (KeQueryMaximumProcessorCountEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KeQueryNodeActiveAffinity @ 0x1402E2F80 (KeQueryNodeActiveAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402EB390 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402EB4F0 (KeSetSystemGroupAffinityThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14033C180 (ExpAllocatePoolWithTagFromNode.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExpSaBinaryArrayInsert @ 0x1403921E4 (ExpSaBinaryArrayInsert.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA494 (ExpSaBinaryArrayRemove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // r15
  POOL_TYPE v5; // r13d
  PVOID result; // rax
  __int64 v7; // rdi
  ULONG_PTR v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  char v12; // bl
  __int64 v13; // r12
  unsigned int v14; // ecx
  ULONG_PTR PoolWithTagFromNode; // rdi
  unsigned int v16; // r12d
  struct _KTHREAD *v17; // rbx
  __int64 v18; // r9
  unsigned __int8 AbAllocationRegionCount; // r15
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 AbEntrySummary; // al
  __int64 v27; // rcx
  int SessionId; // eax
  int v30; // eax
  _DWORD *v31; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *v34; // rax
  USHORT v35; // bx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v37; // rdx
  __int64 v38; // rbx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  int v41; // edx
  __int64 v42; // rcx
  char v43; // [rsp+30h] [rbp-50h]
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-4Ch]
  int v46; // [rsp+3Ch] [rbp-44h] BYREF
  int v47; // [rsp+40h] [rbp-40h]
  int v48; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v49; // [rsp+48h] [rbp-38h]
  int v50; // [rsp+4Ch] [rbp-34h]
  __int64 v51; // [rsp+50h] [rbp-30h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v43 = 0;
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
  v48 = 0;
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
  v16 = -1;
  v47 = 0;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_45;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  _BitScanForward((unsigned int *)&v27, AbEntrySummary);
  v47 = v27;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v27);
  v7 = (__int64)&CurrentThread->LockEntries[v27];
  if ( v7 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4F9C8[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v7 + 40) = SessionId;
    *(_QWORD *)(v7 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_36;
  }
LABEL_45:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_36:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)&v48, v31);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v7, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  v12 = 1;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v30 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8, KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  *(_DWORD *)(v8 + 32) = v30;
  if ( v30 == -1 )
    goto LABEL_71;
  v14 = KeNumberProcessors_0;
  v49 = KeNumberProcessors_0;
  if ( !MaximumProcessorCount )
  {
LABEL_6:
    PoolWithTagFromNode = 0LL;
    goto LABEL_67;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v51 = *(_QWORD *)(v13 + ExSaPageArrays);
    v34 = (unsigned int)v4 >= v14 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v4);
    v35 = v34->ParentNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v5, 0x1000uLL, 0x61537845u, v35 | 0x80000000, 0);
    if ( !PoolWithTagFromNode )
      goto LABEL_66;
LABEL_3:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v51, PoolWithTagFromNode, v35) == -1 )
      goto LABEL_66;
    v12 = 1;
    v13 += 8LL;
    LODWORD(v4) = v4 + 1;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      goto LABEL_6;
    v14 = v49;
  }
  KeQueryNodeActiveAffinity(v35, &Affinity, 0LL);
  if ( v43 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v43 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  PoolWithTagFromNode = (ULONG_PTR)ExAllocatePoolWithTag(v5, 0x1000uLL, 0x61537845u);
  if ( PoolWithTagFromNode )
    goto LABEL_3;
LABEL_66:
  v12 = 0;
LABEL_67:
  if ( v43 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTagFromNode )
    ExFreeHeapPool(PoolWithTagFromNode, v9, v10, v11);
  v16 = -1;
  if ( !v12 )
  {
LABEL_71:
    v37 = *(unsigned int *)(v8 + 32);
    if ( (_DWORD)v37 != -1 )
    {
      if ( (_DWORD)v4 )
      {
        do
        {
          v4 = (unsigned int)(v4 - 1);
          v38 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
          v39 = *(_DWORD *)(v8 + 32);
          _BitScanReverse(&v40, v39);
          v41 = 1 << v40;
          v42 = v40 - 2;
          v50 = v42;
          ExFreeHeapPool(*(_QWORD *)(*(_QWORD *)(v38 + 8 * v42) + 8LL * (v39 ^ v41) + 8), v39 ^ v41, v10, v11);
          ExpSaBinaryArrayRemove(v38, *(unsigned int *)(v8 + 32));
        }
        while ( (_DWORD)v4 );
        v37 = *(unsigned int *)(v8 + 32);
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v37);
    }
    ExFreeHeapPool(v8, v37, v10, v11);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v46 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v16 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  ++v17->AbAllocationRegionCount;
  v18 = 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      break;
    v23 = (__int64)&v17->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v16 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree(v23);
          v46 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (signed __int64)(v23 - (unsigned __int64)v17->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v17->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v16, 0LL);
LABEL_24:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)&v46, (_DWORD *)v18);
  v21 = v17->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v25);
  return (PVOID)v8;
}
