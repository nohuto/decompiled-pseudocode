/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x140530FD4
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiLockProbePacketWorkingSet @ 0x140235C98 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
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
      ExfTryToWakePushLock(v16 + 1232);
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
      ExfTryToWakePushLock(v9 + 1232);
    KeAbPostRelease(v9 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v8;
}
