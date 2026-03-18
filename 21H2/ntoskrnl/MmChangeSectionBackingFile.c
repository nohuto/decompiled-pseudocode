/*
 * XREFs of MmChangeSectionBackingFile @ 0x1402483DC
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140248390 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x1406FE8F4 (MiShareExistingControlArea.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // esi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rsi
  void *v10; // rcx
  int v11; // r8d
  volatile LONG *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    if ( v5 )
      v7 = *(_QWORD *)a2[5];
    else
      v7 = *(_QWORD *)(a2[5] + 16LL);
    if ( !v7 )
    {
      v12 = &dword_140C4F100;
      goto LABEL_18;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( (*(_DWORD *)(v7 + 56) & 1) == 0 )
  {
    v8 = (_QWORD *)(v7 + 64);
    if ( a1 )
    {
      if ( (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFF0uLL) != a1 )
        goto LABEL_14;
      ObFastReplaceObject(v8, a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = a1;
      goto LABEL_13;
    }
    v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 )
    {
      ObFastReplaceObject(v8, a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = (void *)v9;
LABEL_13:
      ObDereferenceObjectDeferDelete(v10);
    }
  }
LABEL_14:
  v11 = *(_DWORD *)(v7 + 56);
  if ( (v11 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v7 + 56) = v11 & 0xFFFFFDFF;
  v12 = (volatile LONG *)(v7 + 72);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v22 = v20->SchedulerAssist;
        v18 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v6);
  return 0LL;
}
