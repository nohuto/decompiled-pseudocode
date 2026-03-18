/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x14052B274
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201704 (MiProcessCommitIntact.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140307E60 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // r14d
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v8; // rsi
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 valid; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF
  __int64 v27; // [rsp+58h] [rbp+10h] BYREF

  v2 = *a1;
  v26 = 0LL;
  if ( !MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1, v3, v4);
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v8 = (ULONG_PTR *)((((unsigned __int64)*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = a1[10];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v9 + 1232, 0LL);
  v10 = MiChargeFullProcessCommitment(a1[10], 1LL);
  if ( v10 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[12], (unsigned __int64)v8, &v26);
    v18 = v26;
    a1[4] = valid;
    if ( (ULONG_PTR *)v18 == v8 )
    {
      v27 = MI_READ_PTE_LOCK_FREE(v18);
      if ( (v27 & 1) != 0 )
      {
        v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27);
        if ( MI_PFN_IS_PROTO(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
        {
          v16 = 0x1000000000LL;
          if ( (*(_QWORD *)(v20 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v20 + 8) <= 0 )
          {
            CloneAddress = MiLocateCloneAddress(a1[10], *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1680) + 360LL) > CloneAddress[12] )
              {
                v10 = MiCopyOnWrite(*a1, v8, 0xFFFFFFFFFFFFFFFFuLL, 0);
                if ( v10 >= 0 )
                  v6 = 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1, v16, v17);
    if ( v6 )
      MiReturnFullProcessCommitment(a1[10], 1LL);
    v22 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22 + 1232);
    KeAbPostRelease(v22 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v23, v24, v25);
    if ( v10 < 0 )
      MiCopyOnWriteCheckConditions(a1[12], (unsigned int)v10);
    v10 = 0;
  }
  else
  {
    v11 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11 + 1232);
    KeAbPostRelease(v11 + 1232);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v10;
}
