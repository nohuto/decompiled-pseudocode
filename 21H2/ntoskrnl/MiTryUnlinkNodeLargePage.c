/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x14029195C
 * Callers:
 *     MiLargeFreePageToMdl @ 0x14029167C (MiLargeFreePageToMdl.c)
 *     MiDemoteLargeFreePage @ 0x1402917AC (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x140556BC0 (MiMoveLargeFreePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140318F30 (MiUnlinkNodeLargePageHelper.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1, ULONG_PTR a2, int a3, char a4, BOOL *a5)
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
  int PfnPageSizeIndex; // eax
  BOOL v22; // ecx
  unsigned __int8 v23; // al
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  int v34; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v38; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rax
  _DWORD *v42; // r9
  int v43; // edx
  int PfnChannel; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int64 v47; // [rsp+58h] [rbp-28h] BYREF
  __int64 v48; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v49[3]; // [rsp+68h] [rbp-18h] BYREF
  int v51; // [rsp+C8h] [rbp+48h] BYREF
  int v52; // [rsp+D0h] [rbp+50h]

  v52 = a3;
  v5 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(unsigned int *)(MiSearchNumaNodeTable(a2) + 8);
  v10 = 48 * a2 - 0x58000000000LL;
  PfnChannel = MiGetPfnChannel(v10, v11, v12);
  v15 = MiLockPageInline(v10, v13, v14);
  v16 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
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
          v38 = ~(unsigned __int16)(-1LL << (v15 + 1));
          v28 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
    *v5 = 1;
    return 0LL;
  }
  v17 = 4544 * v9;
  v45 = 4544 * v9;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v16 + 16);
    v19 = 1;
    LockHandle.LockQueue.Next = 0LL;
    v20 = v17 + v18;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, v20 + 4328, v16);
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v10);
    if ( PfnPageSizeIndex != v52 )
    {
      v22 = 1;
      goto LABEL_7;
    }
    v23 = *(_BYTE *)(v10 + 34) & 7;
    if ( v23 <= 1u )
      break;
    v22 = v23 != 5;
LABEL_7:
    v19 = 0;
    *v5 = v22;
    if ( !*(_DWORD *)(v20 + 4284) )
      goto LABEL_43;
    if ( (a4 & 0x10) != 0 )
    {
      v48 = 393479LL;
      v49[1] = v49;
      v49[0] = v49;
      v47 = *(_QWORD *)(v20 + 4288);
      *(_QWORD *)(v20 + 4288) = &v47;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && v15 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (v15 + 1));
            v28 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      __writecr8(v15);
      KeWaitForGate(&v48, 18LL);
    }
    else
    {
      v51 = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && v15 <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v29 = -1LL << (v15 + 1);
            v31 = (__int64)v33->SchedulerAssist;
            v34 = ~(unsigned __int16)v29;
            v28 = (v34 & *(_DWORD *)(v31 + 20)) == 0;
            v30 = (unsigned int)v34 & *(_DWORD *)(v31 + 20);
            *(_DWORD *)(v31 + 20) = v30;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      __writecr8(v15);
      if ( v15 != 2 )
      {
        *v5 = 0;
        return 0LL;
      }
      v51 = 0;
      while ( *(_DWORD *)(v20 + 4284) )
        KeYieldProcessorEx(&v51, v29, v30, v31);
    }
    v15 = MiLockPageInline(v10, v29, v30);
    v16 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    v17 = v45;
    if ( v16 != a1 )
      goto LABEL_29;
  }
  if ( (unsigned int)MiUnlinkNodeLargePageHelper(v20, v10, v52, PfnChannel, a4) )
  {
    if ( (a4 & 0x20) != 0 )
      ++*(_DWORD *)(v45 + *(_QWORD *)(a1 + 16) + 4284);
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
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && v15 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (v15 + 1));
        v28 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(v15);
  return v19;
}
