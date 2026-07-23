/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14039156C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x1403910FC (ExpSaAllocatorAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402D7390 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r15
  ULONG_PTR v4; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // r12d
  unsigned __int8 AbEntrySummary; // cl
  __int64 v8; // rax
  __int64 v9; // rsi
  int SessionId; // eax
  __int64 v11; // rcx
  bool v12; // zf
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rsi
  unsigned __int8 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]
  int v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v27 = 0;
  v4 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v26 = 0;
  v6 = -1;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v9 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4);
      goto LABEL_41;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v8, AbEntrySummary);
  v26 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( !v9 )
  {
LABEL_41:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140C4F848[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v9 + 40) = SessionId;
  *(_QWORD *)(v9 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v27);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v9, v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v3, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v14 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v3;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v3;
    v14 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  v24 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    v6 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  v16 = ++v15->AbAllocationRegionCount;
  v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v18, v17);
    v25 = v18;
    if ( v12 )
      break;
    v19 = (__int64)&v15->LockEntries[v18];
    v17 &= ~(1 << v18);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == v6 )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
      {
        if ( v19 )
        {
          *(_BYTE *)(v19 + 32) |= 2u;
          if ( *(__int64 *)(v19 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
          v24 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
          *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v19 + 25) &= ~1u;
          *(_QWORD *)(v19 + 32) = 0LL;
          v20 = (signed __int64)(v19 - (unsigned __int64)v15->LockEntries) / 96;
          if ( v16 == 1 )
            v15->AbEntrySummary |= 1 << v20;
          else
            _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v20);
          goto LABEL_35;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, v4, v6, 0LL);
LABEL_35:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v4, &v24);
  v12 = v15->SpecialApcDisable++ == -1;
  if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v21);
  return v14;
}
