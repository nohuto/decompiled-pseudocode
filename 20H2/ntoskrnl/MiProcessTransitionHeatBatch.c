/*
 * XREFs of MiProcessTransitionHeatBatch @ 0x14055E32C
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140201A20 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiNotifyPageHeat @ 0x14055E2F4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v3; // rbx
  ULONG_PTR v4; // rdi
  __int64 v5; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int *i; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  _QWORD *v16; // r8
  int v18; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v18 = 0;
  v3 = KeGetCurrentThread();
  --v3->SpecialApcDisable;
  if ( ++v3->AbAllocationRegionCount != 1 )
  {
    v4 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0x10u);
    goto LABEL_16;
  }
  LOBYTE(v5) = v3->AbEntrySummary;
  if ( (_BYTE)v5 )
    goto LABEL_7;
  if ( v3->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    LOBYTE(v5) = v3->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_7:
    v7 = v5;
    _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
    v3->AbEntrySummary = v7 & ~(1 << v5);
    v4 = (ULONG_PTR)&v3->LockEntries[v5];
    goto LABEL_8;
  }
  v4 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion((__int64)v3, (__int64)&qword_140C50CC0);
LABEL_8:
  if ( !v4 )
    goto LABEL_3;
  if ( (unsigned __int64)&qword_140C50CC0 >= 0xFFFF800000000000uLL
    && byte_140C4F848[(((unsigned __int64)&qword_140C50CC0 >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v4 + 40) = SessionId;
  *(_QWORD *)(v4 + 32) = (unsigned __int64)&qword_140C50CC0 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_16:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&qword_140C50CC0, &v18);
  v10 = v3->SpecialApcDisable++ == -1;
  if ( v10 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(v9);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50CC0, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&qword_140C50CC0) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1);
        goto LABEL_36;
      }
      v12 = *(_QWORD *)i >> 12;
      v13 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v14 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v13 <<= 9;
          v12 >>= 9;
          LODWORD(v14) = v14 - 1;
        }
        while ( (_DWORD)v14 );
      }
      v15 = v13 + v12;
      if ( v12 < v13 + v12 )
        break;
LABEL_33:
      ;
    }
    v16 = (_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL);
    while ( v12 <= 0xFFFFFFFFFLL && ((*v16 >> 50) & 1) != 0 )
    {
      ++v12;
      v16 += 6;
      if ( v12 >= v15 )
        goto LABEL_33;
    }
LABEL_36:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C50CC0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C50CC0);
    KeAbPostRelease((ULONG_PTR)&qword_140C50CC0);
  }
  else if ( v4 )
  {
    KeAbPostReleaseEx((ULONG_PTR)&qword_140C50CC0, v4);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
