/*
 * XREFs of MiExpandPtes @ 0x1402531D4
 * Callers:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x1402518F4 (MiObtainSystemVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiSplitBitmapPages @ 0x140320B3C (MiSplitBitmapPages.c)
 *     MiObtainSessionVa @ 0x1403247C0 (MiObtainSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  int v3; // r8d
  int v4; // ebx
  BOOL v5; // r13d
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR *v16; // r12
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  int v19; // eax
  int v20; // r8d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  char v26; // r10
  volatile signed __int32 *v27; // r8
  unsigned __int64 v28; // rcx
  unsigned int v30; // eax
  ULONG_PTR v31; // r12
  struct _KTHREAD *v32; // rbx
  unsigned int SessionId; // edx
  unsigned int v34; // r8d
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned __int8 v38; // al
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  __int64 v46; // rsi
  int v47; // r8d
  unsigned __int64 v48; // rcx
  char v49; // bl
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  int v56; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v57; // [rsp+38h] [rbp-48h]
  int v58; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v59; // [rsp+40h] [rbp-40h]
  unsigned __int64 v60; // [rsp+48h] [rbp-38h]
  unsigned __int64 v61; // [rsp+50h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-10h]
  struct _KTHREAD *v64; // [rsp+78h] [rbp-8h]
  unsigned __int8 v66; // [rsp+D0h] [rbp+50h]
  unsigned int v67; // [rsp+D8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = *((_DWORD *)a1 + 7);
  v67 = v4;
  v5 = 0;
  v6 = (v3 & 4) != 0 ? 16LL : 1LL;
  v63 = v6;
  if ( a2 >= 0x200 )
    v5 = a1 == &qword_140C4EDC0;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = v7 >> 9;
  v60 = v7 / v6;
  if ( (v3 & 2) != 0 )
  {
    v57 = 16;
    v9 = v4;
    if ( v5 )
      v9 = 13;
    v10 = MiObtainSystemVa(v8, v9);
  }
  else
  {
    v57 = 1;
    v10 = MiObtainSessionVa(v8, v7 % v6);
  }
  v59 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (v12 - a1[2]) >> 3;
  v61 = v13;
  if ( v5 )
    goto LABEL_24;
  v14 = v13 / v6;
  CurrentThread = KeGetCurrentThread();
  v16 = (ULONG_PTR *)(a1 + 6);
  v64 = CurrentThread;
  v17 = v14;
  v18 = a1[1] + (v14 >> 3);
  if ( (a1[3] & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(*v16, 0LL);
  }
  v19 = MiSplitBitmapPages(v67, v18, v60 + (v17 & 7));
  v20 = *((_DWORD *)a1 + 6);
  v58 = v19;
  if ( (v20 & 2) != 0 )
  {
    if ( v19 == 1 )
    {
      v21 = (v7 + v61) / v63;
      if ( v21 > *a1 )
        *a1 = v21;
      v22 = v17 & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (v17 & 0x3F) == 0 )
        v22 = v17;
      if ( v22 < a1[9] || (v20 & 8) == 0 )
      {
        a1[9] = v22;
        *((_DWORD *)a1 + 6) = v20 | 8;
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
          v45 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v35 = (v45 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v45;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    v31 = *v16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31);
    v56 = 0;
    v32 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v32->ApcState.Process);
    else
      SessionId = -1;
    --v32->SpecialApcDisable;
    v66 = ++v32->AbAllocationRegionCount;
    v34 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v35 = !_BitScanReverse((unsigned int *)&v36, v34);
      if ( v35 )
        break;
      v37 = (__int64)&v32->LockEntries[v36];
      v34 &= ~(1 << v36);
      if ( (*(_BYTE *)(v37 + 26) & 1) != 0
        && (*(_DWORD *)(v37 + 32) & 1) == 0
        && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v31 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v37 + 40) == SessionId )
      {
        *(_BYTE *)(v37 + 26) &= ~1u;
        if ( *(_QWORD *)(v37 + 32) )
        {
          if ( v37 )
          {
            *(_BYTE *)(v37 + 32) |= 2u;
            if ( *(__int64 *)(v37 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v37);
            v56 = *(_DWORD *)(v37 + 88) & 0x1FFFF;
            *(_DWORD *)(v37 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v37 + 25) &= ~1u;
            *(_QWORD *)(v37 + 32) = 0LL;
            v38 = 1 << ((signed __int64)(v37 - (unsigned __int64)v32->LockEntries) / 96);
            if ( v66 == 1 )
              v32->AbEntrySummary |= v38;
            else
              _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, v38);
            goto LABEL_55;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v32, v31, SessionId, 0LL);
LABEL_55:
    --v32->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v32, v31, &v56);
    v35 = v32->SpecialApcDisable++ == -1;
    if ( v35 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
      KiCheckForKernelApcDelivery(1LL, v39, v40, v41);
    KiLeaveGuardedRegionUnsafe((__int64)v64);
  }
  if ( v58 )
  {
    v6 = v63;
    v4 = v67;
    v11 = v59;
LABEL_24:
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v12, v12 + 8 * (v7 - 1), v57, v4, 0) )
    {
      _InterlockedExchangeAdd64(a1 + 11, v60);
      _InterlockedExchangeAdd64(a1 + 7, v60);
      if ( (dword_140CFB17C & 2) != 0 && a1 == &qword_140C4EDC0 )
      {
        v49 = 2 * v61;
        v50 = qword_140C4E960 + ((2 * v61) >> 3);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
        if ( !(unsigned int)MiSplitBitmapPages(v67, v50, (v49 & 7) + 2 * v60) )
          dword_140CFB17C &= ~2u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v51 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = v53->SchedulerAssist;
              v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v35 = (v55 & v54[5]) == 0;
              v54[5] &= v55;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
        }
        __writecr8(v51);
      }
      if ( v5 || a2 == v7 )
        return v12;
      v24 = (v7 - a2) / v6;
      v25 = (a2 + v61) / v6;
      v26 = v25 & 0x1F;
      v27 = (volatile signed __int32 *)(a1[1] + 4 * (v25 >> 5));
      if ( (v25 & 0x1F) + v24 <= 0x20 )
      {
        if ( v24 == 32 )
        {
          *v27 = 0;
          return v12;
        }
        v30 = ~(((1 << v24) - 1) << v26);
      }
      else
      {
        if ( (v25 & 0x1F) != 0 )
        {
          _InterlockedAnd(v27, ~(((1 << (32 - (v25 & 0x1F))) - 1) << v26));
          v24 -= 32 - (unsigned int)(v25 & 0x1F);
          ++v27;
        }
        if ( v24 >= 0x20 )
        {
          v28 = v24 >> 5;
          v24 += -32LL * (v24 >> 5);
          do
          {
            *v27++ = 0;
            --v28;
          }
          while ( v28 );
        }
        if ( !v24 )
          return v12;
        v30 = -1 << v24;
      }
      _InterlockedAnd(v27, v30);
      return v12;
    }
    if ( v5 )
      v4 = 13;
    v46 = v12 << 25;
    v47 = v4;
    v48 = v11;
    goto LABEL_76;
  }
  v46 = v12 << 25;
  v47 = v67;
  v48 = v59;
LABEL_76:
  MiReturnSystemVa(v48, (__int64)((v7 << 28) + v46) >> 16, v47);
  return 0LL;
}
