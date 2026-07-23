/*
 * XREFs of MmChangeSectionBackingFile @ 0x140241634
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140394FE0 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // esi
  KIRQL v6; // al
  __int64 *v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rsi
  void *v12; // rcx
  int v13; // r8d
  volatile LONG *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
    v7 = (__int64 *)a2[5];
    v8 = v6;
    if ( v5 )
      v9 = *v7;
    else
      v9 = v7[2];
    if ( !v9 )
    {
      v14 = &dword_140C4C9C0;
      goto LABEL_18;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v9 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  if ( (*(_DWORD *)(v9 + 56) & 1) == 0 )
  {
    v10 = (_QWORD *)(v9 + 64);
    if ( a1 )
    {
      if ( (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFF0uLL) != a1 )
        goto LABEL_14;
      ObFastReplaceObject(v10, a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v12 = a1;
      goto LABEL_13;
    }
    v11 = *v10 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 )
    {
      ObFastReplaceObject(v10, a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v12 = (void *)v11;
LABEL_13:
      ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
    }
  }
LABEL_14:
  v13 = *(_DWORD *)(v9 + 56);
  if ( (v13 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v9 + 56) = v13 & 0xFFFFFDFF;
  v14 = (volatile LONG *)(v9 + 72);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v24 = v22->SchedulerAssist;
        v20 = (v23 & v24[5]) == 0;
        v24[5] &= v23;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v8);
  return 0LL;
}
