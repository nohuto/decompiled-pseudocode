/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14038E50C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14038E09C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402A92F0 (RtlFindClearBitsAndSetEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9
  bool v15; // zf
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v17; // rdi
  struct _KTHREAD *v18; // rsi
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+88h] [rbp+10h]
  int v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h] BYREF

  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v33 = 0;
  v4 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v32 = 0;
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
  v32 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( !v9 )
  {
LABEL_41:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140C4F908[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v9 + 40) = SessionId;
  *(_QWORD *)(v9 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v33);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12, v11, v13, v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v9, v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v3, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v17 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v3;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v3;
    v17 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  v30 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    v6 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v19 = ++v18->AbAllocationRegionCount;
  v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v21, v20);
    v31 = v21;
    if ( v15 )
      break;
    v22 = (__int64)&v18->LockEntries[v21];
    v20 &= ~(1 << v21);
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v22 + 40) == v6 )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
      {
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
          v30 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v23 = (signed __int64)(v22 - (unsigned __int64)v18->LockEntries) / 96;
          if ( v19 == 1 )
            v18->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_35;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, v4, v6, 0LL);
LABEL_35:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, v4, &v30);
  v15 = v18->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v25, v24, v26, v27);
  return v17;
}
