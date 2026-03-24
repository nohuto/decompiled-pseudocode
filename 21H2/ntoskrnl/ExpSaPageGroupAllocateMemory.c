/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x140391A3C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x1403915CC (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsAndSetEx @ 0x1402793D0 (RtlFindClearBitsAndSetEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v5; // r15
  ULONG_PTR v6; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v8; // r12d
  unsigned __int8 AbEntrySummary; // cl
  __int64 v10; // rax
  __int64 v11; // rsi
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 ClearBitsAndSet; // rax
  __int64 v16; // rdi
  struct _KTHREAD *v17; // rsi
  __int64 v18; // r9
  unsigned __int8 AbAllocationRegionCount; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v27; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+88h] [rbp+10h]
  int v29; // [rsp+90h] [rbp+18h]
  int v30; // [rsp+98h] [rbp+20h] BYREF

  v5 = a2;
  if ( *(_DWORD *)(a1 + 36) < a2 )
    return -1LL;
  v30 = 0;
  v6 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v29 = 0;
  v8 = -1;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v6);
      goto LABEL_41;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v10, AbEntrySummary);
  v29 = v10;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
  v11 = (__int64)&CurrentThread->LockEntries[v10];
  if ( !v11 )
  {
LABEL_41:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v6 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v6 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v11 + 40) = SessionId;
  *(_QWORD *)(v11 + 32) = v6 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v6, (__int64)&v30, a4);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v11, v6);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *(_DWORD *)(a1 + 36) < (unsigned int)v5
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(a1 + 48), v5, *(unsigned int *)(a1 + 44)),
        ClearBitsAndSet == -1LL) )
  {
    v16 = -1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 36) -= v5;
    *(_DWORD *)(a1 + 44) = ClearBitsAndSet + v5;
    v16 = 16 * (ClearBitsAndSet & 0x1FF | ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  v27 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
    v8 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  ++v17->AbAllocationRegionCount;
  v18 = 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v21, v20);
    v28 = v21;
    if ( v14 )
      break;
    v22 = (__int64)&v17->LockEntries[v21];
    v20 &= ~(1 << v21);
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v22 + 40) == v8 )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
      {
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree(v22);
          v27 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v23 = (signed __int64)(v22 - (unsigned __int64)v17->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v17->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_35;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, v6, v8, 0LL);
LABEL_35:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v6, (__int64)&v27, (_DWORD *)v18);
  v14 = v17->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v24);
  return v16;
}
