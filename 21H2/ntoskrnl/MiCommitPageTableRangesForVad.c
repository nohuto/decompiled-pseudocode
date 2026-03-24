/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x14054528C
 * Callers:
 *     MiInsertChildVads @ 0x1408D9780 (MiInsertChildVads.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  _DWORD *v14; // r9
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+78h] [rbp+10h] BYREF

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
          v3 = MiCommitPageTablesForVad(
                 a1,
                 *v10 & 0xFFFFFFFFFFE00000uLL,
                 (*v10 & 0xFFFFFFFFFFE00000uLL) + ((*v10 & 0x1FFFFFLL) << 21) + 0x1FFFFF);
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
    ExfTryToWakePushLock(v7);
  v21 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = (_DWORD *)(v7 & 0x7FFFFFFFFFFFFFFCLL);
  v15 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v15);
    if ( v16 )
      break;
    v18 = (__int64)&v11->LockEntries[v17];
    v15 &= ~(1 << v17);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v14
      && *(_DWORD *)(v18 + 40) == SessionId )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
      {
        if ( v18 )
        {
          *(_BYTE *)(v18 + 32) |= 2u;
          if ( *(__int64 *)(v18 + 32) < 0 )
            KiAbEntryRemoveFromTree(v18);
          v21 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
          *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v18 + 25) &= ~1u;
          *(_QWORD *)(v18 + 32) = 0LL;
          v19 = (signed __int64)(v18 - (unsigned __int64)v11->LockEntries) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v19);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v7, (__int64)&v21, v14);
  v16 = v11->SpecialApcDisable++ == -1;
  if ( v16 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v20);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  result = (unsigned int)v3;
  *(_QWORD *)(a1 + 16) = -2LL;
  return result;
}
