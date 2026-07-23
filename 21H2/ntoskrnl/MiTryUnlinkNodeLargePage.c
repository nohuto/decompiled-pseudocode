/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x14020F8CC
 * Callers:
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x14020F71C (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x140556E00 (MiMoveLargeFreePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1, ULONG_PTR a2, int a3, char a4, BOOL *a5)
{
  BOOL *v5; // r12
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int8 v11; // si
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // r13
  int PfnPageSizeIndex; // eax
  BOOL v19; // ecx
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // rax
  _DWORD *v37; // r9
  int v38; // edx
  int PfnChannel; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v42; // [rsp+58h] [rbp-28h] BYREF
  __int64 v43; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v44[3]; // [rsp+68h] [rbp-18h] BYREF
  int v46; // [rsp+C8h] [rbp+48h] BYREF
  int v47; // [rsp+D0h] [rbp+50h]

  v47 = a3;
  v5 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(unsigned int *)(MiSearchNumaNodeTable(a2) + 8);
  v10 = 48 * a2 - 0x58000000000LL;
  PfnChannel = MiGetPfnChannel(v10);
  v11 = MiLockPageInline(v10);
  v13 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
  if ( v13 != a1 )
  {
LABEL_29:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v25 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    *v5 = 1;
    return 0LL;
  }
  v14 = 4544 * v9;
  v40 = 4544 * v9;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v13 + 16);
    v16 = 1;
    LockHandle.LockQueue.Next = 0LL;
    v17 = v14 + v15;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v17 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, v17 + 4328, v13, v12);
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v10);
    if ( PfnPageSizeIndex != v47 )
    {
      v19 = 1;
      goto LABEL_7;
    }
    v20 = *(_BYTE *)(v10 + 34) & 7;
    if ( v20 <= 1u )
      break;
    v19 = v20 != 5;
LABEL_7:
    v16 = 0;
    *v5 = v19;
    if ( !*(_DWORD *)(v17 + 4284) )
      goto LABEL_43;
    if ( (a4 & 0x10) != 0 )
    {
      v43 = 393479LL;
      v44[1] = v44;
      v44[0] = v44;
      v42 = *(_QWORD *)(v17 + 4288);
      *(_QWORD *)(v17 + 4288) = &v42;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && v11 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(v11);
      KeWaitForGate(&v43, 18LL);
    }
    else
    {
      v46 = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && v11 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v25 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v11);
      if ( v11 != 2 )
      {
        *v5 = 0;
        return 0LL;
      }
      v46 = 0;
      while ( *(_DWORD *)(v17 + 4284) )
        KeYieldProcessorEx(&v46);
    }
    v11 = MiLockPageInline(v10);
    v13 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    v14 = v40;
    if ( v13 != a1 )
      goto LABEL_29;
  }
  if ( (unsigned int)MiUnlinkNodeLargePageHelper(v17, v10, v47, PfnChannel, a4) )
  {
    if ( (a4 & 0x20) != 0 )
      ++*(_DWORD *)(v40 + *(_QWORD *)(a1 + 16) + 4284);
  }
  else
  {
    *v5 = 0;
    v16 = 0;
  }
LABEL_43:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v16 && (a4 & 0x20) != 0 )
    v11 = 2;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && v11 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (v11 + 1));
        v25 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v11);
  return v16;
}
