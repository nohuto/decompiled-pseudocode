/*
 * XREFs of MiGetPageForWriteCluster @ 0x14038781C
 * Callers:
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 * Callees:
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiCheckPteForWriteCluster @ 0x140387944 (MiCheckPteForWriteCluster.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForWriteCluster(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        _DWORD *a7)
{
  int v7; // esi
  ULONG_PTR v10; // rax
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v7 = 0;
  *a7 = 1;
  v10 = MiCheckPteForWriteCluster();
  v11 = v10;
  if ( v10 )
  {
    *a7 = MiReferencePageForModifiedWrite(v10, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
          SchedulerAssist[5] &= 0xFFFF0001;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(0LL);
    if ( *a7 )
      goto LABEL_8;
  }
  else if ( (unsigned int)*a6 <= 0x1F )
  {
    if ( qword_140C4DF80 )
    {
      if ( (a3 & 0x10) == 0 )
        a3 &= ~qword_140C4DF80;
    }
    if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
    {
      v11 = qword_140C4EDA0;
      v7 = *a6 + 1;
LABEL_8:
      *a6 = v7;
      return (v11 + 0x58000000000LL) / 48;
    }
  }
  return -1LL;
}
