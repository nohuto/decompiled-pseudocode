/*
 * XREFs of CcAmILowPriorityWriter @ 0x14030FF54
 * Callers:
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

bool __fastcall CcAmILowPriorityWriter(_QWORD *a1)
{
  __int64 Partition; // rbx
  unsigned __int64 v2; // rsi
  bool v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v14; // rcx
  int v16; // [rsp+70h] [rbp+18h] BYREF

  Partition = CcGetPartition(a1);
  v2 = Partition + 952;
  ExAcquirePushLockExclusiveEx(Partition + 952, 0LL);
  v3 = *(_QWORD *)(Partition + 928) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Partition + 952), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      break;
    v10 = (__int64)&CurrentThread->LockEntries[v9];
    v7 &= ~(1 << v9);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
      {
        if ( v10 )
        {
          *(_BYTE *)(v10 + 32) |= 2u;
          if ( *(__int64 *)(v10 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
          v11 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
          v12 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
          *(_BYTE *)(v10 + 25) &= ~1u;
          v16 = v11;
          *(_DWORD *)(v10 + 88) = v12;
          *(_QWORD *)(v10 + 32) = 0LL;
          v13 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v6 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v16);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    v14 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v14->ApcState.ApcListHead[0].Flink != v14 )
      KiCheckForKernelApcDelivery((__int64)v14);
  }
  return v3;
}
