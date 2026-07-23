/*
 * XREFs of PspUnlockQuotaListExclusive @ 0x1403CC6CC
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1406450A0 (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x140903FD8 (PspRemoveQuotaBlock.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockQuotaListExclusive(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+18h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a2);
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
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
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (a2 & 0x7FFFFFFFFFFFFFFCLL)
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
          v14 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
          *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v10 + 25) &= ~1u;
          *(_QWORD *)(v10 + 32) = 0LL;
          v11 = (signed __int64)(v10 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v6 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v11;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a2, &v14);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  return KeLeaveCriticalRegionThread(a1);
}
