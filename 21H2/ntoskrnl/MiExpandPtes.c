/*
 * XREFs of MiExpandPtes @ 0x140231448
 * Callers:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 *     MiSplitBitmapPages @ 0x1402322A0 (MiSplitBitmapPages.c)
 *     MiObtainSessionVa @ 0x140232364 (MiObtainSessionVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  int v3; // r8d
  unsigned int v4; // ebx
  BOOL v5; // r13d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR *v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  int v17; // eax
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  char v24; // r10
  volatile signed __int32 *v25; // r8
  unsigned __int64 v26; // rcx
  unsigned int v28; // eax
  ULONG_PTR v29; // r12
  struct _KTHREAD *v30; // rbx
  unsigned int SessionId; // edx
  unsigned int v32; // r8d
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rdi
  unsigned __int8 v36; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rbx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  int v50; // [rsp+38h] [rbp-48h]
  int v51; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v52; // [rsp+40h] [rbp-40h]
  unsigned __int64 v53; // [rsp+48h] [rbp-38h]
  __int64 v54; // [rsp+50h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v56; // [rsp+70h] [rbp-10h]
  struct _KTHREAD *v57; // [rsp+78h] [rbp-8h]
  unsigned __int8 v59; // [rsp+D0h] [rbp+50h]
  unsigned int v60; // [rsp+D8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = *((_DWORD *)a1 + 7);
  v60 = v4;
  v5 = 0;
  v6 = (v3 & 4) != 0 ? 16LL : 1LL;
  v56 = v6;
  if ( a2 >= 0x200 )
    v5 = a1 == &qword_140C4EF80;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = v7 >> 9;
  v53 = v7 / v6;
  if ( (v3 & 2) != 0 )
  {
    v50 = 16;
    v9 = MiObtainSystemVa(v8);
  }
  else
  {
    v50 = 1;
    v9 = MiObtainSessionVa(v8);
  }
  v52 = v9;
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = (v11 - a1[2]) >> 3;
  if ( v5 )
    goto LABEL_22;
  v12 = ((v11 - a1[2]) >> 3) / v6;
  CurrentThread = KeGetCurrentThread();
  v14 = (ULONG_PTR *)(a1 + 6);
  v57 = CurrentThread;
  v15 = v12;
  v16 = a1[1] + (v12 >> 3);
  if ( (a1[3] & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(*v14, 0LL);
  }
  v17 = MiSplitBitmapPages(v60, v16, v53 + (v15 & 7));
  v18 = *((_DWORD *)a1 + 6);
  v51 = v17;
  if ( (v18 & 2) != 0 )
  {
    if ( v17 == 1 )
    {
      v19 = (v7 + v54) / v56;
      if ( v19 > *a1 )
        *a1 = v19;
      v20 = v15 & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (v15 & 0x3F) == 0 )
        v20 = v15;
      if ( v20 < a1[9] || (v18 & 8) == 0 )
      {
        a1[9] = v20;
        *((_DWORD *)a1 + 6) = v18 | 8;
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
          v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v29 = *v14;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v29);
    v30 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
      SessionId = MmGetSessionIdEx(v30->ApcState.Process);
    else
      SessionId = -1;
    --v30->SpecialApcDisable;
    v59 = ++v30->AbAllocationRegionCount;
    v32 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v33 = !_BitScanReverse((unsigned int *)&v34, v32);
      if ( v33 )
        break;
      v35 = (__int64)&v30->LockEntries[v34];
      v32 &= ~(1 << v34);
      if ( (*(_BYTE *)(v35 + 26) & 1) != 0
        && (*(_DWORD *)(v35 + 32) & 1) == 0
        && (*(_QWORD *)(v35 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v29 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v35 + 40) == SessionId )
      {
        *(_BYTE *)(v35 + 26) &= ~1u;
        if ( *(_QWORD *)(v35 + 32) )
        {
          if ( v35 )
          {
            *(_BYTE *)(v35 + 32) |= 2u;
            if ( *(__int64 *)(v35 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35);
            *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v35 + 25) &= ~1u;
            *(_QWORD *)(v35 + 32) = 0LL;
            v36 = 1 << ((signed __int64)(v35 - (unsigned __int64)v30->LockEntries) / 96);
            if ( v59 == 1 )
              v30->AbEntrySummary |= v36;
            else
              _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, v36);
            goto LABEL_53;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v30, v29, SessionId, 0LL);
LABEL_53:
    --v30->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v30);
    v33 = v30->SpecialApcDisable++ == -1;
    if ( v33 && ($C459BD0D405E8E46662177FB3D0A143F *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(v57);
  }
  if ( v51 )
  {
    v6 = v56;
    v4 = v60;
    v10 = v52;
LABEL_22:
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v11, (int)v11 + 8 * ((int)v7 - 1), v50, v4, 0) )
    {
      _InterlockedExchangeAdd64(a1 + 11, v53);
      _InterlockedExchangeAdd64(a1 + 7, v53);
      if ( (dword_140CFB17C & 2) != 0 && a1 == &qword_140C4EF80 )
      {
        v44 = qword_140C4EB20 + ((unsigned __int64)(2 * v54) >> 3);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
        if ( !(unsigned int)MiSplitBitmapPages(v60, v44, ((2 * (_BYTE)v54) & 7) + 2 * v53) )
          dword_140CFB17C &= ~2u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v45 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v33 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
          }
        }
        __writecr8(v45);
      }
      if ( v5 || a2 == v7 )
        return v11;
      v22 = (v7 - a2) / v6;
      v23 = (a2 + v54) / v6;
      v24 = v23 & 0x1F;
      v25 = (volatile signed __int32 *)(a1[1] + 4 * (v23 >> 5));
      if ( (v23 & 0x1F) + v22 <= 0x20 )
      {
        if ( v22 == 32 )
        {
          *v25 = 0;
          return v11;
        }
        v28 = ~(((1 << v22) - 1) << v24);
      }
      else
      {
        if ( (v23 & 0x1F) != 0 )
        {
          _InterlockedAnd(v25, ~(((1 << (32 - (v23 & 0x1F))) - 1) << v24));
          v22 -= 32 - (unsigned int)(v23 & 0x1F);
          ++v25;
        }
        if ( v22 >= 0x20 )
        {
          v26 = v22 >> 5;
          v22 += -32LL * (v22 >> 5);
          do
          {
            *v25++ = 0;
            --v26;
          }
          while ( v26 );
        }
        if ( !v22 )
          return v11;
        v28 = -1 << v22;
      }
      _InterlockedAnd(v25, v28);
      return v11;
    }
    if ( v5 )
      v4 = 13;
    v41 = v11 << 25;
    v42 = v4;
    v43 = v10;
    goto LABEL_74;
  }
  v41 = v11 << 25;
  v42 = v60;
  v43 = v52;
LABEL_74:
  MiReturnSystemVa(v43, (__int64)((v7 << 28) + v41) >> 16, v42, 0LL);
  return 0LL;
}
