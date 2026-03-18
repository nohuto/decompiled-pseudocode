/*
 * XREFs of MiUpdatePageFileList @ 0x1403BF258
 * Callers:
 *     MiIncreaseCommitLimits @ 0x1403BEF58 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x1407B2360 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x1408D2CCC (MiDeletePagefile.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  if ( !*(_QWORD *)(a1 + 56) )
    return;
  v4 = (unsigned __int64 *)(a1 + 256);
  v5 = ExAcquireSpinLockExclusive(&dword_140C4EB38);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4EB30, v4);
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v7 = 0;
  v8 = (_QWORD *)qword_140C4EB30;
  if ( !qword_140C4EB30 )
    goto LABEL_4;
  while ( v6 < *(v8 - 25) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_10:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_10;
  v7 = 1;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4EB30, (unsigned __int64)v8, v7, v4);
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EB38);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
}
