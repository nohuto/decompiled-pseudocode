/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x14055FDFC
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x14028AEE0 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiNotifyPageHeat @ 0x14055FDC4 (MiNotifyPageHeat.c)
 */

char __fastcall MiProcessTransitionHeatBatch(unsigned int *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v6; // rbx
  ULONG_PTR v7; // rdi
  __int64 v8; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v10; // cl
  int SessionId; // eax
  __int64 v12; // rcx
  bool v13; // zf
  unsigned int *i; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  _QWORD *v19; // r8
  int v21; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v21 = 0;
  v6 = KeGetCurrentThread();
  --v6->SpecialApcDisable;
  if ( ++v6->AbAllocationRegionCount != 1 )
  {
    v7 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v6->116 + 1, 0x10u);
    goto LABEL_16;
  }
  LOBYTE(v8) = v6->AbEntrySummary;
  if ( (_BYTE)v8 )
    goto LABEL_7;
  if ( v6->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v6->AbOrphanedEntrySummary;
    v6->AbOrphanedEntrySummary = 0;
    LOBYTE(v8) = v6->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_7:
    v10 = v8;
    _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8);
    v6->AbEntrySummary = v10 & ~(1 << v8);
    v7 = (ULONG_PTR)&v6->LockEntries[v8];
    goto LABEL_8;
  }
  v7 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion((__int64)v6, (__int64)&qword_140C50E40);
LABEL_8:
  if ( !v7 )
    goto LABEL_3;
  if ( (unsigned __int64)&qword_140C50E40 >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)&qword_140C50E40 >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = (unsigned __int64)&qword_140C50E40 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&qword_140C50E40, (__int64)&v21, a4);
  v13 = v6->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v12);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50E40, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_140C50E40) )
  {
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1);
        goto LABEL_36;
      }
      v15 = *(_QWORD *)i >> 12;
      v16 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v17 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v16 <<= 9;
          v15 >>= 9;
          LODWORD(v17) = v17 - 1;
        }
        while ( (_DWORD)v17 );
      }
      v18 = v16 + v15;
      if ( v15 < v16 + v15 )
        break;
LABEL_33:
      ;
    }
    v19 = (_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL);
    while ( v15 <= 0xFFFFFFFFFLL && ((*v19 >> 50) & 1) != 0 )
    {
      ++v15;
      v19 += 6;
      if ( v15 >= v18 )
        goto LABEL_33;
    }
LABEL_36:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50E40, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C50E40);
    KeAbPostRelease((ULONG_PTR)&qword_140C50E40);
  }
  else if ( v7 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_140C50E40, v7);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
