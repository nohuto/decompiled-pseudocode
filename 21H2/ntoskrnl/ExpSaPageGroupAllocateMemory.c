/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x140391B8C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlFindClearBitsAndSetEx @ 0x140267370 (RtlFindClearBitsAndSetEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  bool v11; // zf
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rsi
  unsigned __int8 v15; // r14
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v22; // [rsp+80h] [rbp+8h] BYREF
  int v23; // [rsp+88h] [rbp+10h]
  int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h] BYREF

  v3 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v25 = 0;
  v4 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v24 = 0;
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
  v24 = v8;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
  v9 = (__int64)&CurrentThread->LockEntries[v8];
  if ( !v9 )
  {
LABEL_41:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140C4FA08[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v9 + 40) = SessionId;
  *(_QWORD *)(v9 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v25);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, (_RTL_BALANCED_NODE *)v9, v4);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v3
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v3, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v13 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v3;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v3;
    v13 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  v22 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    v6 = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  --v14->SpecialApcDisable;
  v15 = ++v14->AbAllocationRegionCount;
  v16 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v17, v16);
    v23 = v17;
    if ( v11 )
      break;
    v18 = (__int64)&v14->LockEntries[v17];
    v16 &= ~(1 << v17);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v18 + 40) == v6 )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
      {
        if ( v18 )
        {
          *(_BYTE *)(v18 + 32) |= 2u;
          if ( *(__int64 *)(v18 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
          v22 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
          *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v18 + 25) &= ~1u;
          *(_QWORD *)(v18 + 32) = 0LL;
          v19 = (signed __int64)(v18 - (unsigned __int64)v14->LockEntries) / 96;
          if ( v15 == 1 )
            v14->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_35;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, v4, v6, 0LL);
LABEL_35:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, v4, (unsigned int *)&v22);
  v11 = v14->SpecialApcDisable++ == -1;
  if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return v13;
}
