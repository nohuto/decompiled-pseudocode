/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x140530D94
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiLockProbePacketWorkingSet @ 0x1402B7AB8 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402B7B00 (MiUnlockProbePacketWorkingSet.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 *a1)
{
  __int64 v2; // rcx
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a1;
  v23 = 0LL;
  if ( !MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = (ULONG_PTR *)((((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = a1[10];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 1232, 0LL);
  v9 = MiChargeFullProcessCommitment(a1[10], 1LL);
  if ( v9 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1, v8, v10, v11);
    valid = MiLockLowestValidPageTable(a1[12], (unsigned __int64)v6, &v23);
    v17 = v23;
    a1[4] = valid;
    if ( (ULONG_PTR *)v17 == v6 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(v17);
      if ( (v24 & 1) != 0 )
      {
        v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v24);
        if ( MI_PFN_IS_PROTO(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL)
          && ((*(_QWORD *)(v19 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v19 + 8) <= 0) )
        {
          CloneAddress = MiLocateCloneAddress(a1[10], *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL);
          if ( CloneAddress )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v21 + 1680) + 360LL) > CloneAddress[12] )
            {
              v9 = MiCopyOnWrite(*a1, v6, -1LL, 0);
              if ( v9 >= 0 )
                v4 = 0;
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v4 )
      MiReturnFullProcessCommitment(a1[10]);
    v22 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22 + 1232);
    KeAbPostRelease(v22 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v9 < 0 )
      MiCopyOnWriteCheckConditions(a1[12], (unsigned int)v9);
    v9 = 0;
  }
  else
  {
    v12 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12 + 1232);
    KeAbPostRelease(v12 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  MiLockProbePacketWorkingSet((__int64)a1, v13, v14, v15);
  return (unsigned int)v9;
}
