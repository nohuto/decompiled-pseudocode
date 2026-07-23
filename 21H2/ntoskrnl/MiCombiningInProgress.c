/*
 * XREFs of MiCombiningInProgress @ 0x140366E68
 * Callers:
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 **v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 **v15; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140C4E580);
  if ( a3 != 1 )
  {
    v14 = *a2;
    v15 = (unsigned __int64 **)a2[1];
    if ( *(unsigned __int64 **)(*a2 + 8) == a2 && *v15 == a2 )
    {
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4E588, a2 + 2);
      --*((_DWORD *)a1 + 16);
      if ( dword_140C4E584 == 1 )
        MiFlushEntireTbDueToAttributeChange();
      --dword_140C4E584;
      goto LABEL_16;
    }
LABEL_26:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_140C4E584;
  if ( !dword_140C4E598 )
  {
    dword_140C4E598 = 1;
    qword_140C4E590 = _InterlockedIncrement64(&PsNextSecurityDomain);
  }
  CurrentThread = KeGetCurrentThread();
  memset(a2, 0, 0x50uLL);
  v9 = (unsigned __int64 **)(v3 + 6456);
  a2[5] = (unsigned __int64)CurrentThread;
  v10 = *(_QWORD *)(v3 + 6456);
  if ( *(_QWORD *)(v10 + 8) != v3 + 6456 )
    goto LABEL_26;
  *a2 = v10;
  v11 = 0;
  a2[1] = (unsigned __int64)v9;
  *(_QWORD *)(v10 + 8) = a2;
  *v9 = a2;
  v12 = (_QWORD *)qword_140C4E588;
  if ( !qword_140C4E588 )
    goto LABEL_19;
  while ( (unsigned __int64)CurrentThread < v12[3] )
  {
    v13 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_19;
LABEL_8:
    v12 = v13;
  }
  v13 = (_QWORD *)v12[1];
  if ( v13 )
    goto LABEL_8;
  v11 = 1;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4E588, (unsigned __int64)v12, v11, a2 + 2);
LABEL_16:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E580);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
