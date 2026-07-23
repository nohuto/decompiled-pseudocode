/*
 * XREFs of MiExpandPtes @ 0x140300D04
 * Callers:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x14030124C (MiObtainSystemVa.c)
 *     MiSplitBitmapPages @ 0x140301DA4 (MiSplitBitmapPages.c)
 *     MiObtainSessionVa @ 0x140301EC0 (MiObtainSessionVa.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  int v3; // r8d
  int v4; // ebx
  BOOL v5; // r13d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR *v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  char v25; // r10
  volatile signed __int32 *v26; // r8
  unsigned __int64 v27; // rcx
  unsigned int v29; // eax
  ULONG_PTR v30; // r12
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // edx
  unsigned int v33; // r8d
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned __int8 v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  __int64 v45; // rsi
  int v46; // r8d
  unsigned __int64 v47; // rcx
  char v48; // bl
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  int v55; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v56; // [rsp+38h] [rbp-48h]
  int v57; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v58; // [rsp+40h] [rbp-40h]
  unsigned __int64 v59; // [rsp+48h] [rbp-38h]
  unsigned __int64 v60; // [rsp+50h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v62; // [rsp+70h] [rbp-10h]
  struct _KTHREAD *v63; // [rsp+78h] [rbp-8h]
  unsigned __int8 v65; // [rsp+D0h] [rbp+50h]
  unsigned int v66; // [rsp+D8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = *((_DWORD *)a1 + 7);
  v66 = v4;
  v5 = 0;
  v6 = (v3 & 4) != 0 ? 16LL : 1LL;
  v62 = v6;
  if ( a2 >= 0x200 )
    v5 = a1 == &qword_140C4EE80;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = v7 >> 9;
  v59 = v7 / v6;
  if ( (v3 & 2) != 0 )
  {
    v56 = 16;
    v9 = MiObtainSystemVa(v8);
  }
  else
  {
    v56 = 1;
    v9 = MiObtainSessionVa(v8);
  }
  v58 = v9;
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = (v11 - a1[2]) >> 3;
  v60 = v12;
  if ( v5 )
    goto LABEL_22;
  v13 = v12 / v6;
  CurrentThread = KeGetCurrentThread();
  v15 = (ULONG_PTR *)(a1 + 6);
  v63 = CurrentThread;
  v16 = v13;
  v17 = a1[1] + (v13 >> 3);
  if ( (a1[3] & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(*v15, 0LL);
  }
  v18 = MiSplitBitmapPages(v66, v17, v59 + (v16 & 7));
  v19 = *((_DWORD *)a1 + 6);
  v57 = v18;
  if ( (v19 & 2) != 0 )
  {
    if ( v18 == 1 )
    {
      v20 = (v7 + v60) / v62;
      if ( v20 > *a1 )
        *a1 = v20;
      v21 = v16 & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (v16 & 0x3F) == 0 )
        v21 = v16;
      if ( v21 < a1[9] || (v19 & 8) == 0 )
      {
        a1[9] = v21;
        *((_DWORD *)a1 + 6) = v19 | 8;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v34 = (v44 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v44;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v30 = *v15;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v30);
    v55 = 0;
    v31 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
    else
      SessionId = -1;
    --v31->SpecialApcDisable;
    v65 = ++v31->AbAllocationRegionCount;
    v33 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v34 = !_BitScanReverse((unsigned int *)&v35, v33);
      if ( v34 )
        break;
      v36 = (__int64)&v31->LockEntries[v35];
      v33 &= ~(1 << v35);
      if ( (*(_BYTE *)(v36 + 26) & 1) != 0
        && (*(_DWORD *)(v36 + 32) & 1) == 0
        && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v30 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v36 + 40) == SessionId )
      {
        *(_BYTE *)(v36 + 26) &= ~1u;
        if ( *(_QWORD *)(v36 + 32) )
        {
          if ( v36 )
          {
            *(_BYTE *)(v36 + 32) |= 2u;
            if ( *(__int64 *)(v36 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
            v55 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
            *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v36 + 25) &= ~1u;
            *(_QWORD *)(v36 + 32) = 0LL;
            v37 = 1 << ((signed __int64)(v36 - (unsigned __int64)v31->LockEntries) / 96);
            if ( v65 == 1 )
              v31->AbEntrySummary |= v37;
            else
              _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, v37);
            goto LABEL_53;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, SessionId, 0LL);
LABEL_53:
    --v31->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v31, v30, &v55);
    v34 = v31->SpecialApcDisable++ == -1;
    if ( v34 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
      KiCheckForKernelApcDelivery(1LL);
    KiLeaveGuardedRegionUnsafe((__int64)v63, v38, v39, v40);
  }
  if ( v57 )
  {
    v6 = v62;
    v4 = v66;
    v10 = v58;
LABEL_22:
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v11, v11 + 8 * (v7 - 1), v56, v4, 0) )
    {
      _InterlockedExchangeAdd64(a1 + 11, v59);
      _InterlockedExchangeAdd64(a1 + 7, v59);
      if ( (dword_140CFB17C & 2) != 0 && a1 == &qword_140C4EE80 )
      {
        v48 = 2 * v60;
        v49 = qword_140C4EA20 + ((2 * v60) >> 3);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
        if ( !(unsigned int)MiSplitBitmapPages(v66, v49, (v48 & 7) + 2 * v59) )
          dword_140CFB17C &= ~2u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v50 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v34 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(v50);
      }
      if ( v5 || a2 == v7 )
        return v11;
      v23 = (v7 - a2) / v6;
      v24 = (a2 + v60) / v6;
      v25 = v24 & 0x1F;
      v26 = (volatile signed __int32 *)(a1[1] + 4 * (v24 >> 5));
      if ( (v24 & 0x1F) + v23 <= 0x20 )
      {
        if ( v23 == 32 )
        {
          *v26 = 0;
          return v11;
        }
        v29 = ~(((1 << v23) - 1) << v25);
      }
      else
      {
        if ( (v24 & 0x1F) != 0 )
        {
          _InterlockedAnd(v26, ~(((1 << (32 - (v24 & 0x1F))) - 1) << v25));
          v23 -= 32 - (unsigned int)(v24 & 0x1F);
          ++v26;
        }
        if ( v23 >= 0x20 )
        {
          v27 = v23 >> 5;
          v23 += -32LL * (v23 >> 5);
          do
          {
            *v26++ = 0;
            --v27;
          }
          while ( v27 );
        }
        if ( !v23 )
          return v11;
        v29 = -1 << v23;
      }
      _InterlockedAnd(v26, v29);
      return v11;
    }
    if ( v5 )
      v4 = 13;
    v45 = v11 << 25;
    v46 = v4;
    v47 = v10;
    goto LABEL_74;
  }
  v45 = v11 << 25;
  v46 = v66;
  v47 = v58;
LABEL_74:
  MiReturnSystemVa(v47, (__int64)((v7 << 28) + v45) >> 16, v46);
  return 0LL;
}
