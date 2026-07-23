/*
 * XREFs of PfLockExclusiveRelease @ 0x1403D0240
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406B3034 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall PfLockExclusiveRelease(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // [rsp+60h] [rbp+18h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v5);
    if ( v6 )
      break;
    v8 = (__int64)&CurrentThread->LockEntries[v7];
    v5 &= ~(1 << v7);
    if ( (*(_BYTE *)(v8 + 26) & 1) != 0
      && (*(_DWORD *)(v8 + 32) & 1) == 0
      && (*(_QWORD *)(v8 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v8 + 40) == SessionId )
    {
      *(_BYTE *)(v8 + 26) &= ~1u;
      if ( *(_QWORD *)(v8 + 32) )
      {
        if ( v8 )
        {
          *(_BYTE *)(v8 + 32) |= 2u;
          if ( *(__int64 *)(v8 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v8);
          v10 = *(_DWORD *)(v8 + 88) & 0x1FFFF;
          *(_DWORD *)(v8 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v8 + 25) &= ~1u;
          *(_QWORD *)(v8 + 32) = 0LL;
          v9 = (signed __int64)(v8 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v4 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v9;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int *)&v10);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
}
