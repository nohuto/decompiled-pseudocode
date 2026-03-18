/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x1402F27F8
 * Callers:
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1402F1808 (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x1405550F0 (MiMoveLargeFreePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402312D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, BOOL *a5)
{
  BOOL *v5; // r12
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int8 v11; // si
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int PfnPageSizeIndex; // eax
  BOOL v21; // ecx
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v37; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // rax
  _DWORD *v41; // r9
  int v42; // edx
  unsigned int PfnChannel; // [rsp+30h] [rbp-50h]
  __int64 v44; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v46; // [rsp+58h] [rbp-28h] BYREF
  __int64 v47; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v48[3]; // [rsp+68h] [rbp-18h] BYREF
  int v50; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v51; // [rsp+D0h] [rbp+50h]

  v51 = a3;
  v5 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *((unsigned int *)MiSearchNumaNodeTable(a2) + 2);
  v10 = 48 * a2 - 0x58000000000LL;
  PfnChannel = MiGetPfnChannel(v10);
  v11 = MiLockPageInline(v10);
  v12 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
  if ( v12 != a1 )
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
          v37 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v27 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    *v5 = 1;
    return 0LL;
  }
  v13 = 4544 * v9;
  v44 = 4544 * v9;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v12 + 16);
    v15 = 1;
    LockHandle.LockQueue.Next = 0LL;
    v16 = v13 + v14;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v16 + 4328);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v16 + 4328));
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v10, v17, v18, v19);
    if ( PfnPageSizeIndex != v51 )
    {
      v21 = 1;
      goto LABEL_7;
    }
    v22 = *(_BYTE *)(v10 + 34) & 7;
    if ( v22 <= 1u )
      break;
    v21 = v22 != 5;
LABEL_7:
    v15 = 0;
    *v5 = v21;
    if ( !*(_DWORD *)(v16 + 4284) )
      goto LABEL_43;
    if ( (a4 & 0x10) != 0 )
    {
      v47 = 393479LL;
      v48[1] = v48;
      v48[0] = v48;
      v46 = *(_QWORD *)(v16 + 4288);
      *(_QWORD *)(v16 + 4288) = &v46;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && v11 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v27 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(v11);
      KeWaitForGate(&v47, 18LL);
    }
    else
    {
      v50 = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && v11 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v28 = -1LL << (v11 + 1);
            v30 = (__int64)v32->SchedulerAssist;
            v33 = ~(unsigned __int16)v28;
            v27 = (v33 & *(_DWORD *)(v30 + 20)) == 0;
            v29 = (unsigned int)v33 & *(_DWORD *)(v30 + 20);
            *(_DWORD *)(v30 + 20) = v29;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
      }
      __writecr8(v11);
      if ( v11 != 2 )
      {
        *v5 = 0;
        return 0LL;
      }
      v50 = 0;
      while ( *(_DWORD *)(v16 + 4284) )
        KeYieldProcessorEx(&v50, v28, v29, v30);
    }
    v11 = MiLockPageInline(v10);
    v12 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    v13 = v44;
    if ( v12 != a1 )
      goto LABEL_29;
  }
  if ( (unsigned int)MiUnlinkNodeLargePageHelper((_QWORD *)v16, (__int64 *)v10, v51, PfnChannel, a4) )
  {
    if ( (a4 & 0x20) != 0 )
      ++*(_DWORD *)(v44 + *(_QWORD *)(a1 + 16) + 4284);
  }
  else
  {
    *v5 = 0;
    v15 = 0;
  }
LABEL_43:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v15 && (a4 & 0x20) != 0 )
    v11 = 2;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && v11 <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = v40->SchedulerAssist;
        v42 = ~(unsigned __int16)(-1LL << (v11 + 1));
        v27 = (v42 & v41[5]) == 0;
        v41[5] &= v42;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
  }
  __writecr8(v11);
  return v15;
}
