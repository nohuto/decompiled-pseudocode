/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140316270
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140316150 (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x1405510D0 (MiMoveLargeFreePage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140223EC0 (MiUnlinkNodeLargePageHelper.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPageSizeIndex @ 0x1403EFAC8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, BOOL *a5)
{
  BOOL *v5; // r12
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int8 v15; // si
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int PfnPageSizeIndex; // eax
  BOOL v25; // ecx
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v41; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // rax
  _DWORD *v45; // r9
  int v46; // edx
  unsigned int PfnChannel; // [rsp+30h] [rbp-50h]
  __int64 v48; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h] BYREF
  __int64 v51; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v52[3]; // [rsp+68h] [rbp-18h] BYREF
  int v54; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v55; // [rsp+D0h] [rbp+50h]

  v55 = a3;
  v5 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *((unsigned int *)MiSearchNumaNodeTable(a2) + 2);
  v10 = 48 * a2 - 0x58000000000LL;
  PfnChannel = MiGetPfnChannel(v10, v11, v12);
  v15 = MiLockPageInline(v10, v13, v14);
  v16 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
  if ( v16 != a1 )
  {
LABEL_29:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << (v15 + 1));
          v31 = (v41 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v41;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
    *v5 = 1;
    return 0LL;
  }
  v17 = 4544 * v9;
  v48 = 4544 * v9;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v16 + 16);
    v19 = 1;
    LockHandle.LockQueue.Next = 0LL;
    v20 = v17 + v18;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 4328);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v20 + 4328));
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v10, v21, v22, v23);
    if ( PfnPageSizeIndex != v55 )
    {
      v25 = 1;
      goto LABEL_7;
    }
    v26 = *(_BYTE *)(v10 + 34) & 7;
    if ( v26 <= 1u )
      break;
    v25 = v26 != 5;
LABEL_7:
    v19 = 0;
    *v5 = v25;
    if ( !*(_DWORD *)(v20 + 4284) )
      goto LABEL_43;
    if ( (a4 & 0x10) != 0 )
    {
      v51 = 393479LL;
      v52[1] = v52;
      v52[0] = v52;
      v50 = *(_QWORD *)(v20 + 4288);
      *(_QWORD *)(v20 + 4288) = &v50;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && v15 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v15 + 1));
            v31 = (v30 & v29[5]) == 0;
            v29[5] &= v30;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
      }
      __writecr8(v15);
      KeWaitForGate((__int64)&v51, 18);
    }
    else
    {
      v54 = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && v15 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v32 = -1LL << (v15 + 1);
            v34 = (__int64)v36->SchedulerAssist;
            v37 = ~(unsigned __int16)v32;
            v31 = (v37 & *(_DWORD *)(v34 + 20)) == 0;
            v33 = (unsigned int)v37 & *(_DWORD *)(v34 + 20);
            *(_DWORD *)(v34 + 20) = v33;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v15);
      if ( v15 != 2 )
      {
        *v5 = 0;
        return 0LL;
      }
      v54 = 0;
      while ( *(_DWORD *)(v20 + 4284) )
        KeYieldProcessorEx(&v54, v32, v33, v34);
    }
    v15 = MiLockPageInline(v10, v32, v33);
    v16 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    v17 = v48;
    if ( v16 != a1 )
      goto LABEL_29;
  }
  if ( (unsigned int)MiUnlinkNodeLargePageHelper((_QWORD *)v20, v10, v55, PfnChannel, a4) )
  {
    if ( (a4 & 0x20) != 0 )
      ++*(_DWORD *)(v48 + *(_QWORD *)(a1 + 16) + 4284);
  }
  else
  {
    *v5 = 0;
    v19 = 0;
  }
LABEL_43:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v19 && (a4 & 0x20) != 0 )
    v15 = 2;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v43 = KeGetCurrentIrql();
      if ( v43 <= 0xFu && v15 <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v31 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
  }
  __writecr8(v15);
  return v19;
}
