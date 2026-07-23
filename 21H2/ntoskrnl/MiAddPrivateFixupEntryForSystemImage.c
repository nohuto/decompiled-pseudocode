/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1403A5A28
 * Callers:
 *     MiGetSystemAddressForImage @ 0x14075EA6C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInitializePrivateFixupBitmap @ 0x1406EBBF0 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA938 (MiCreateSessionDriverProtos.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(_DWORD *a1, unsigned __int64 a2)
{
  PVOID Pool; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  Pool = MiAllocatePool(
           64,
           8
         * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
          + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
          + 2LL),
           0x69536D4Du);
  if ( !Pool )
    return 0LL;
  v5 = MiAllocatePool(64, 0x38uLL, 0x6946694Du);
  v6 = Pool;
  if ( !v5 )
  {
LABEL_7:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(Pool, a1);
  v5[5] = Pool;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = a2 + (unsigned int)((*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) - 1);
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1
    && (a1[14] & 0x800) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = Pool;
    goto LABEL_7;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_140C4CD24);
  v8 = (_QWORD *)qword_140C4CD08;
  if ( *(__int64 **)qword_140C4CD08 != &qword_140C4CD00 )
    __fastfail(3u);
  *v5 = &qword_140C4CD00;
  v5[1] = v8;
  *v8 = v5;
  qword_140C4CD08 = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4CD24);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return 1LL;
}
