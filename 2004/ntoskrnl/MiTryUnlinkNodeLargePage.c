/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140353DE8
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140353B98 (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x140353CC8 (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x140551720 (MiMoveLargeFreePage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402B6B40 (MiUnlinkNodeLargePageHelper.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, BOOL *a5)
{
  BOOL *v5; // r12
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned __int8 v14; // si
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned int v18; // ebx
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int PfnPageSizeIndex; // eax
  BOOL v24; // ecx
  unsigned __int8 v25; // al
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  int v36; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v40; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // rax
  _DWORD *v44; // r9
  int v45; // edx
  unsigned int PfnChannel; // [rsp+30h] [rbp-50h]
  __int64 v47; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v49; // [rsp+58h] [rbp-28h] BYREF
  __int64 v50; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v51[3]; // [rsp+68h] [rbp-18h] BYREF
  int v53; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v54; // [rsp+D0h] [rbp+50h]

  v54 = a3;
  v5 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *((unsigned int *)MiSearchNumaNodeTable(a2) + 2);
  v10 = 48 * a2 - 0x58000000000LL;
  PfnChannel = MiGetPfnChannel(v10);
  v14 = MiLockPageInline(v10, v11, v12, v13);
  v15 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
  if ( v15 != a1 )
  {
LABEL_29:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (v14 + 1));
          v30 = (v40 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v40;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    *v5 = 1;
    return 0LL;
  }
  v16 = 4544 * v9;
  v47 = 4544 * v9;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v15 + 16);
    v18 = 1;
    LockHandle.LockQueue.Next = 0LL;
    v19 = v16 + v17;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v19 + 4328);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v19 + 4328));
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v10, v20, v21, v22);
    if ( PfnPageSizeIndex != v54 )
    {
      v24 = 1;
      goto LABEL_7;
    }
    v25 = *(_BYTE *)(v10 + 34) & 7;
    if ( v25 <= 1u )
      break;
    v24 = v25 != 5;
LABEL_7:
    v18 = 0;
    *v5 = v24;
    if ( !*(_DWORD *)(v19 + 4284) )
      goto LABEL_43;
    if ( (a4 & 0x10) != 0 )
    {
      v50 = 393479LL;
      v51[1] = v51;
      v51[0] = v51;
      v49 = *(_QWORD *)(v19 + 4288);
      *(_QWORD *)(v19 + 4288) = &v49;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && v14 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (v14 + 1));
            v30 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v14);
      KeWaitForGate((__int64)&v50, 0x12u);
    }
    else
    {
      v53 = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && v14 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v31 = -1LL << (v14 + 1);
            v33 = v35->SchedulerAssist;
            v36 = ~(unsigned __int16)v31;
            v30 = (v36 & v33[5]) == 0;
            v32 = (unsigned int)v36 & v33[5];
            v33[5] = v32;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
      }
      __writecr8(v14);
      if ( v14 != 2 )
      {
        *v5 = 0;
        return 0LL;
      }
      v53 = 0;
      while ( *(_DWORD *)(v19 + 4284) )
        KeYieldProcessorEx(&v53, v31, v32, (__int64)v33);
    }
    v14 = MiLockPageInline(v10, v31, v32, v33);
    v15 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    v16 = v47;
    if ( v15 != a1 )
      goto LABEL_29;
  }
  if ( (unsigned int)MiUnlinkNodeLargePageHelper((_QWORD *)v19, v10, v54, PfnChannel, a4) )
  {
    if ( (a4 & 0x20) != 0 )
      ++*(_DWORD *)(v47 + *(_QWORD *)(a1 + 16) + 4284);
  }
  else
  {
    *v5 = 0;
    v18 = 0;
  }
LABEL_43:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v18 && (a4 & 0x20) != 0 )
    v14 = 2;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && v14 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << (v14 + 1));
        v30 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
  }
  __writecr8(v14);
  return v18;
}
