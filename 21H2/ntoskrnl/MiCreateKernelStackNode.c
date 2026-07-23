/*
 * XREFs of MiCreateKernelStackNode @ 0x140535F88
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiCreateKernelStackNode(_WORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  _QWORD *v7; // rdx
  bool v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  result = MiAllocatePool(64, 0x30uLL, 0x734B694Du);
  v5 = result;
  if ( result )
  {
    result[3] = *a2 - 1LL;
    result[4] = a2[1];
    *((_WORD *)result + 20) = *a1;
    v6 = ExAcquireSpinLockExclusive(&dword_140C4EC20);
    v7 = (_QWORD *)qword_140C4EC18;
    v8 = 0;
    v9 = v6;
    if ( qword_140C4EC18 )
    {
      v10 = v5[3];
      while ( 1 )
      {
        if ( v10 > v7[3] || v10 >= v7[4] )
        {
          v11 = (_QWORD *)v7[1];
          if ( !v11 )
          {
            v8 = 1;
            break;
          }
        }
        else
        {
          v11 = (_QWORD *)*v7;
          if ( !*v7 )
            break;
        }
        v7 = v11;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4EC18, (unsigned __int64)v7, v8, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC20);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    return v5;
  }
  return result;
}
