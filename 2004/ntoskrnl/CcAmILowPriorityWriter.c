/*
 * XREFs of CcAmILowPriorityWriter @ 0x1402C4C38
 * Callers:
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

bool __fastcall CcAmILowPriorityWriter(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 Partition; // rbx
  unsigned __int64 v5; // rsi
  bool v6; // bp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v17; // rcx
  int v19; // [rsp+70h] [rbp+18h] BYREF

  Partition = CcGetPartition(a1, a2, a3, a4);
  v5 = Partition + 952;
  ExAcquirePushLockExclusiveEx(Partition + 952, 0LL);
  v6 = *(_QWORD *)(Partition + 928) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Partition + 952), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v9 = ++CurrentThread->AbAllocationRegionCount;
  v10 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    if ( v11 )
      break;
    v13 = (__int64)&CurrentThread->LockEntries[v12];
    v10 &= ~(1 << v12);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
      {
        if ( v13 )
        {
          *(_BYTE *)(v13 + 32) |= 2u;
          if ( *(__int64 *)(v13 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
          v14 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
          v15 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
          *(_BYTE *)(v13 + 25) &= ~1u;
          v19 = v14;
          *(_DWORD *)(v13 + 88) = v15;
          *(_QWORD *)(v13 + 32) = 0LL;
          v16 = (signed __int64)(v13 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v9 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v19);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 )
  {
    v17 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != v17 )
      KiCheckForKernelApcDelivery((__int64)v17);
  }
  return v6;
}
