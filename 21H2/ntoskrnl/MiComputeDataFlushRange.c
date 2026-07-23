/*
 * XREFs of MiComputeDataFlushRange @ 0x140320010
 * Callers:
 *     MiComputeFlushRange @ 0x140262830 (MiComputeFlushRange.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 * Callees:
 *     MiFindLastSubsection @ 0x14021E97C (MiFindLastSubsection.c)
 *     MiReferenceSubsection @ 0x1403202AC (MiReferenceSubsection.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1403621D0 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeDataFlushRange(__int64 a1, unsigned __int8 a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 SubsectionNode; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 LastSubsection; // rsi
  unsigned __int64 v18; // r13
  int v19; // r15d
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 result; // rax
  volatile LONG *v24; // rcx
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  _DWORD *v36; // r8
  int v37; // eax

  v8 = a2;
  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v24 = (volatile LONG *)(a1 + 72);
LABEL_19:
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
    if ( !KiIrqlFlags )
      goto LABEL_20;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_20;
    if ( (unsigned __int8)v8 > 0xFu )
      goto LABEL_20;
    if ( CurrentIrql < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
    v30 = (v29 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v29;
    if ( !v30 )
      goto LABEL_20;
LABEL_58:
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_20:
    __writecr8(v8);
    return 0LL;
  }
  v10 = 0LL;
  v11 = a1 + 128;
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_17:
    LastSubsection = MiFindLastSubsection(a1, 1);
    v18 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
    goto LABEL_7;
  }
  v12 = *a3 >> 12;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v11 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_25:
    v24 = (volatile LONG *)(v9 + 72);
    goto LABEL_19;
  }
  v14 = v12
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v15 = (unsigned __int64)(*a3 + a4 - 1) >> 12,
        v16 = MiLocateSubsectionNode(v9, *a3 + a4 - 1, 1LL),
        (LastSubsection = v16) == 0) )
  {
    a1 = v9;
    goto LABEL_17;
  }
  v18 = v15 - (*(unsigned int *)(v16 + 36) | ((unsigned __int64)(*(_WORD *)(v16 + 32) & 0xFFC0) << 26));
LABEL_7:
  if ( !*(_DWORD *)(v11 + 104) || (int)MiReferenceSubsection(v11, 0LL) <= 1 )
  {
    v19 = *(_DWORD *)(v11 + 44) - v14;
    if ( v11 == LastSubsection )
    {
LABEL_27:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( !KiIrqlFlags )
        goto LABEL_20;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_20;
      v35 = KeGetCurrentIrql();
      if ( v35 > 0xFu )
        goto LABEL_20;
      if ( (unsigned __int8)v8 > 0xFu )
        goto LABEL_20;
      if ( v35 < 2u )
        goto LABEL_20;
      CurrentPrcb = KeGetCurrentPrcb();
      v36 = CurrentPrcb->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v30 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( !v30 )
        goto LABEL_20;
      goto LABEL_58;
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_25;
      if ( *(_DWORD *)(v11 + 104) && (int)MiReferenceSubsection(v11, 0LL) > 1 )
      {
        v20 = *(_QWORD *)(v11 + 8);
        goto LABEL_10;
      }
      v19 += *(_DWORD *)(v11 + 44);
      if ( v11 == LastSubsection )
        goto LABEL_27;
    }
  }
  v19 = 0;
  v20 = *(_QWORD *)(v11 + 8) + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection, 0LL) <= 1 )
  {
    v25 = *(_QWORD *)(v11 + 16);
    if ( v25 == LastSubsection )
      goto LABEL_23;
    do
    {
      if ( *(_DWORD *)(v25 + 104) && *(_QWORD *)(v25 + 8) )
        v10 = v25;
      v25 = *(_QWORD *)(v25 + 16);
    }
    while ( v25 != LastSubsection );
    if ( !v10 )
LABEL_23:
      LastSubsection = v11;
    else
      LastSubsection = v10;
    MiReferenceSubsection(LastSubsection, 0LL);
    v18 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
  }
  ++*(_QWORD *)(v9 + 40);
  v21 = MiBuildWakeList(v9, 4LL);
  MiRemoveUnusedSegment(v9);
  if ( a5 == 1 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v30 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v8);
  MiReleaseControlAreaWaiters(v21);
  v22 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v20;
  *(_QWORD *)(a6 + 16) = v22 + 8 * v18;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v11;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = v19;
  return result;
}
