/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x140391F38
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryNodeActiveAffinity @ 0x1402942D0 (KeQueryNodeActiveAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140346ED0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ExpSaBinaryArrayInsert @ 0x140392334 (ExpSaBinaryArrayInsert.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA6C4 (ExpSaBinaryArrayRemove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  __int64 v4; // r15
  POOL_TYPE v5; // r13d
  PVOID result; // rax
  __int64 v7; // rdi
  ULONG_PTR v8; // r14
  char v9; // bl
  __int64 v10; // r12
  unsigned int v11; // ecx
  ULONG_PTR PoolWithTagFromNode; // rdi
  unsigned int v13; // r12d
  struct _KTHREAD *v14; // rbx
  unsigned __int8 v15; // r15
  unsigned int v16; // edx
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int8 AbEntrySummary; // al
  __int64 v22; // rcx
  int SessionId; // eax
  int v25; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *v28; // rax
  USHORT v29; // bx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  int v35; // edx
  __int64 v36; // rcx
  char v37; // [rsp+30h] [rbp-50h]
  ULONG MaximumProcessorCount; // [rsp+34h] [rbp-4Ch]
  int v40; // [rsp+3Ch] [rbp-44h] BYREF
  int v41; // [rsp+40h] [rbp-40h]
  unsigned int v42; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v43; // [rsp+48h] [rbp-38h]
  int v44; // [rsp+4Ch] [rbp-34h]
  __int64 v45; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v37 = 0;
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
  v42 = 0;
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
  v13 = -1;
  v41 = 0;
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
  _BitScanForward((unsigned int *)&v22, AbEntrySummary);
  v41 = v22;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v22);
  v7 = (__int64)&CurrentThread->LockEntries[v22];
  if ( v7 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140C4FA08[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, &v42);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock,
      (_RTL_BALANCED_NODE *)v7,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  v9 = 1;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v25 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v8, KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  *(_DWORD *)(v8 + 32) = v25;
  if ( v25 == -1 )
    goto LABEL_71;
  v11 = KeNumberProcessors_0;
  v43 = KeNumberProcessors_0;
  if ( !MaximumProcessorCount )
  {
LABEL_6:
    PoolWithTagFromNode = 0LL;
    goto LABEL_67;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v45 = *(_QWORD *)(v10 + ExSaPageArrays);
    v28 = (unsigned int)v4 >= v11 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v4);
    v29 = v28->ParentNode->Affinity.Reserved[0];
    if ( a2 )
      break;
    PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(v5, 0x1000uLL, 0x61537845u, v29 | 0x80000000, 0);
    if ( !PoolWithTagFromNode )
      goto LABEL_66;
LABEL_3:
    if ( (unsigned int)ExpSaBinaryArrayInsert(v45, PoolWithTagFromNode, v29) == -1 )
      goto LABEL_66;
    v9 = 1;
    v10 += 8LL;
    LODWORD(v4) = v4 + 1;
    if ( (unsigned int)v4 >= MaximumProcessorCount )
      goto LABEL_6;
    v11 = v43;
  }
  KeQueryNodeActiveAffinity(v29, &Affinity, 0LL);
  if ( v37 )
  {
    p_PreviousAffinity = 0LL;
  }
  else
  {
    v37 = 1;
    p_PreviousAffinity = &PreviousAffinity;
  }
  KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
  PoolWithTagFromNode = (ULONG_PTR)ExAllocatePoolWithTag(v5, 0x1000uLL, 0x61537845u);
  if ( PoolWithTagFromNode )
    goto LABEL_3;
LABEL_66:
  v9 = 0;
LABEL_67:
  if ( v37 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( PoolWithTagFromNode )
    ExFreeHeapPool(PoolWithTagFromNode);
  v13 = -1;
  if ( !v9 )
  {
LABEL_71:
    v31 = *(unsigned int *)(v8 + 32);
    if ( (_DWORD)v31 != -1 )
    {
      if ( (_DWORD)v4 )
      {
        do
        {
          v4 = (unsigned int)(v4 - 1);
          v32 = *(_QWORD *)(ExSaPageArrays + 8 * v4);
          v33 = *(_DWORD *)(v8 + 32);
          _BitScanReverse(&v34, v33);
          v35 = 1 << v34;
          v36 = v34 - 2;
          v44 = v36;
          ExFreeHeapPool(*(_QWORD *)(*(_QWORD *)(v32 + 8 * v36) + 8LL * (v33 ^ v35) + 8));
          ExpSaBinaryArrayRemove(v32, *(unsigned int *)(v8 + 32));
        }
        while ( (_DWORD)v4 );
        v31 = *(unsigned int *)(v8 + 32);
      }
      ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, v31);
    }
    ExFreeHeapPool(v8);
    v8 = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExSaPageGroupDescriptorArrayLock);
  v40 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v13 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  --v14->SpecialApcDisable;
  v15 = ++v14->AbAllocationRegionCount;
  v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v18, v16);
    if ( v17 )
      break;
    v19 = (__int64)&v14->LockEntries[v18];
    v16 &= ~(1 << v18);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == v13 )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
      {
        if ( v19 )
        {
          *(_BYTE *)(v19 + 32) |= 2u;
          if ( *(__int64 *)(v19 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
          v40 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
          *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v19 + 25) &= ~1u;
          *(_QWORD *)(v19 + 32) = 0LL;
          v20 = (signed __int64)(v19 - (unsigned __int64)v14->LockEntries) / 96;
          if ( v15 == 1 )
            v14->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v13, 0LL);
LABEL_24:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&ExSaPageGroupDescriptorArrayLock, (unsigned int *)&v40);
  v17 = v14->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return (PVOID)v8;
}
