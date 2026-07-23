/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x14053FDB8
 * Callers:
 *     MiInsertChildVads @ 0x1408D6180 (MiInsertChildVads.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1)
{
  _QWORD *v1; // rbx
  int v3; // r12d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  ULONG_PTR v7; // rsi
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rdi
  _QWORD *v10; // r14
  struct _KTHREAD *v11; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v13; // bp
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  v3 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(a1 + 16) = 1LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  do
  {
    v8 = (_QWORD *)*v1;
    if ( v3 >= 0 )
    {
      v9 = 0LL;
      if ( v1[1] )
      {
        v10 = v1 + 2;
        do
        {
          v3 = MiCommitPageTablesForVad(a1, *v10 & 0xFFFFFFFFFFE00000uLL);
          if ( v3 < 0 )
            break;
          ++v9;
          ++v10;
        }
        while ( v9 < v1[1] );
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v8;
  }
  while ( v8 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v20 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v16, v14);
    if ( v15 )
      break;
    v17 = (__int64)&v11->LockEntries[v16];
    v14 &= ~(1 << v16);
    if ( (*(_BYTE *)(v17 + 26) & 1) != 0
      && (*(_DWORD *)(v17 + 32) & 1) == 0
      && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v17 + 40) == SessionId )
    {
      *(_BYTE *)(v17 + 26) &= ~1u;
      if ( *(_QWORD *)(v17 + 32) )
      {
        if ( v17 )
        {
          *(_BYTE *)(v17 + 32) |= 2u;
          if ( *(__int64 *)(v17 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
          v20 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
          *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v17 + 25) &= ~1u;
          *(_QWORD *)(v17 + 32) = 0LL;
          v18 = (signed __int64)(v17 - (unsigned __int64)v11->LockEntries) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v7, SessionId, 0LL);
LABEL_28:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v7, &v20);
  v15 = v11->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v19);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  result = (unsigned int)v3;
  *(_QWORD *)(a1 + 16) = -2LL;
  return result;
}
