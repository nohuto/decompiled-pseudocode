/*
 * XREFs of MiCombiningInProgress @ 0x140366A08
 * Callers:
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v23; // zf

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140C4E3C0);
  if ( a3 != 1 )
  {
    v14 = *a2;
    v15 = (unsigned __int64 **)a2[1];
    if ( *(unsigned __int64 **)(*a2 + 8) == a2 && *v15 == a2 )
    {
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4E3C8, a2 + 2);
      --*((_DWORD *)a1 + 16);
      if ( dword_140C4E3C4 == 1 )
        MiFlushEntireTbDueToAttributeChange(v17, v16, v18, v19);
      --dword_140C4E3C4;
      goto LABEL_16;
    }
LABEL_26:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_140C4E3C4;
  if ( !dword_140C4E3D8 )
  {
    dword_140C4E3D8 = 1;
    qword_140C4E3D0 = _InterlockedIncrement64(&PsNextSecurityDomain);
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
  v12 = (_QWORD *)qword_140C4E3C8;
  if ( !qword_140C4E3C8 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4E3C8, (unsigned __int64)v12, v11, a2 + 2);
LABEL_16:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E3C0);
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
        v23 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v23 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
