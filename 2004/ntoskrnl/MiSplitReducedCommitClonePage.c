/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x14052B8C4
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201704 (MiProcessCommitIntact.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140345C60 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140345CA8 (MiUnlockProbePacketWorkingSet.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 *a1)
{
  __int64 v2; // rcx
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v6; // rsi
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rsi
  unsigned __int64 valid; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v15; // r8
  __int64 v16; // rsi
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a1;
  v17 = 0LL;
  if ( !MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = (ULONG_PTR *)((((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = a1[10];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 1232, 0LL);
  v8 = MiChargeFullProcessCommitment(a1[10], 1LL);
  if ( v8 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[12], (unsigned __int64)v6, &v17);
    v11 = v17;
    a1[4] = valid;
    if ( (ULONG_PTR *)v11 == v6 )
    {
      v18 = MI_READ_PTE_LOCK_FREE(v11);
      if ( (v18 & 1) != 0 )
      {
        v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18);
        if ( MI_PFN_IS_PROTO(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
          && ((*(_QWORD *)(v13 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v13 + 8) <= 0) )
        {
          CloneAddress = MiLocateCloneAddress(a1[10], *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL);
          if ( CloneAddress )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v15 + 1680) + 360LL) > CloneAddress[12] )
            {
              v8 = MiCopyOnWrite(*a1, v6, -1LL, 0);
              if ( v8 >= 0 )
                v4 = 0;
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v4 )
      MiReturnFullProcessCommitment(a1[10]);
    v16 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 1232));
    KeAbPostRelease(v16 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v8 < 0 )
      MiCopyOnWriteCheckConditions(a1[12], (unsigned int)v8);
    v8 = 0;
  }
  else
  {
    v9 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 1232));
    KeAbPostRelease(v9 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v8;
}
