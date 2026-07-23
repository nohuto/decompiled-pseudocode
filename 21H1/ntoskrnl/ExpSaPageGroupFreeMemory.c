/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x1403910BC
 * Callers:
 *     ExpSaAllocatorFree @ 0x140390EB4 (ExpSaAllocatorFree.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     RtlClearBitsEx @ 0x1402AA000 (RtlClearBitsEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v5; // r12
  unsigned int v8; // r15d
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbp
  int SessionId; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // r9
  bool v17; // zf
  bool v18; // bp
  struct _KTHREAD *v19; // rbx
  unsigned __int8 v20; // r14
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  $C774EFD68449142D8271B1EC1EB7FB26 *v28; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD v31[3]; // [rsp+34h] [rbp-34h] BYREF
  int v32; // [rsp+88h] [rbp+20h] BYREF

  v31[0] = 0;
  v3 = a1 + 24;
  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 24, KeGetCurrentIrql(), 0LL);
  v8 = -1;
  LOBYTE(v9) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v9 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v11 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, a1 + 24);
      goto LABEL_37;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  v10 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  CurrentThread->AbEntrySummary = v10 & ~(1 << v9);
  v11 = (__int64)&CurrentThread->LockEntries[v9];
  if ( v11 )
  {
    if ( v3 >= 0xFFFF800000000000uLL && byte_140C4F908[((v3 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = v3 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_37:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, v31);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13, v15, v16);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v11, v3);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v5);
  *(_DWORD *)(a1 + 36) += v5;
  v18 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v32 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    v8 = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v20 = ++v19->AbAllocationRegionCount;
  v21 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v22, v21);
    if ( v17 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v21 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v8 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
          v32 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (signed __int64)(v23 - (unsigned __int64)v19->LockEntries) / 96;
          if ( v20 == 1 )
            v19->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_31;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v3, v8, 0LL);
LABEL_31:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, v3, &v32);
  v17 = v19->SpecialApcDisable++ == -1;
  if ( v17 )
  {
    v28 = &v19->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v28->ApcState.ApcListHead[0].Flink != v28 )
      KiCheckForKernelApcDelivery((__int64)v28, v25, v26, v27);
  }
  return v18;
}
