/*
 * XREFs of MmChangeSectionBackingFile @ 0x1403218A4
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140394A20 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x14067EFC4 (MiShareExistingControlArea.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // esi
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  volatile __int64 *v13; // rcx
  unsigned __int64 v14; // rsi
  void *v15; // rcx
  int v16; // r8d
  volatile LONG *v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  int v26; // eax
  _DWORD *v27; // r8

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4C800);
    v10 = (__int64 *)a2[5];
    v11 = v6;
    if ( v5 )
      v12 = *v10;
    else
      v12 = v10[2];
    if ( !v12 )
    {
      v17 = &dword_140C4C800;
      goto LABEL_18;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v12 + 72, v7, v8, v9) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  if ( (*(_DWORD *)(v12 + 56) & 1) == 0 )
  {
    v13 = (volatile __int64 *)(v12 + 64);
    if ( a1 )
    {
      if ( (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFF0uLL) != a1 )
        goto LABEL_14;
      ObFastReplaceObject(v13, (ULONG_PTR)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v15 = a1;
      goto LABEL_13;
    }
    v14 = *v13 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v14 )
    {
      ObFastReplaceObject(v13, (ULONG_PTR)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v15 = (void *)v14;
LABEL_13:
      ObDereferenceObjectDeferDeleteWithTag(v15, 0x746C6644u);
    }
  }
LABEL_14:
  v16 = *(_DWORD *)(v12 + 56);
  if ( (v16 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v12 + 56) = v16 & 0xFFFFFDFF;
  v17 = (volatile LONG *)(v12 + 72);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(v17);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v27 = v25->SchedulerAssist;
        v23 = (v26 & v27[5]) == 0;
        v27[5] &= v26;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  __writecr8(v11);
  return 0LL;
}
