/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x140534714
 * Callers:
 *     PspIumFreePartitionPages @ 0x140583E10 (PspIumFreePartitionPages.c)
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1402972D0 (MiPartitionObjectToPartition.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG_PTR **a1, int a2, ULONG_PTR *a3)
{
  __int64 v5; // rdx
  ULONG_PTR *i; // rdi
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf
  char v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  for ( i = MiPartitionObjectToPartition(a1, 1, &v15); a2; --a2 )
  {
    v9 = 48 * *a3 - 0x58000000000LL;
    v10 = (unsigned __int8)MiLockPageInline(v9, v5, v7, SchedulerAssist);
    *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
    *(_QWORD *)(v9 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    *(_WORD *)(v9 + 32) = 0;
    if ( _InterlockedDecrement64((volatile signed __int64 *)i + 54) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)i, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList(*a3, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = -1LL << ((unsigned __int8)v10 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)v5;
          v14 = (v13 & SchedulerAssist[5]) == 0;
          v7 = (unsigned int)v13 & SchedulerAssist[5];
          SchedulerAssist[5] = v7;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    ++a3;
  }
  if ( v15 )
    PsDereferencePartition(i[22]);
}
