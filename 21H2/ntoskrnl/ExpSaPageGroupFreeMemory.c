/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x1403946AC
 * Callers:
 *     ExpSaAllocatorFree @ 0x1403944A4 (ExpSaAllocatorFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  bool v13; // zf
  bool v14; // bp
  struct _KTHREAD *v15; // rbx
  unsigned __int8 v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int v23[3]; // [rsp+34h] [rbp-34h] BYREF
  int v24; // [rsp+88h] [rbp+20h] BYREF

  v23[0] = 0;
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
    if ( v3 >= 0xFFFF800000000000uLL && byte_140C4FA08[((v3 >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, v23);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, (_RTL_BALANCED_NODE *)v11, v3);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v5);
  *(_DWORD *)(a1 + 36) += v5;
  v14 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v24 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    v8 = MmGetSessionIdEx((__int64)v15->ApcState.Process);
  --v15->SpecialApcDisable;
  v16 = ++v15->AbAllocationRegionCount;
  v17 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v18, v17);
    if ( v13 )
      break;
    v19 = (__int64)&v15->LockEntries[v18];
    v17 &= ~(1 << v18);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == v8 )
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
          goto LABEL_31;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, v3, v8, 0LL);
LABEL_31:
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v3, (unsigned int *)&v24);
  v13 = v15->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  return v14;
}
