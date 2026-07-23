/*
 * XREFs of HalpCreateSecondaryIcEntry @ 0x1404D0BE0
 * Callers:
 *     HalpRegisterSecondaryIcInterface @ 0x1404D1634 (HalpRegisterSecondaryIcInterface.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpCreateSecondaryIcEntry(__int64 a1)
{
  SIZE_T v2; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 *v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v2 = 16 * (*(unsigned __int16 *)(a1 + 20) + 10LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x536C6148u);
  v4 = 0;
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v2);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(v5 + 20) = *(unsigned __int16 *)(a1 + 20);
    *(_OWORD *)(v5 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(v5 + 40) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v5 + 56) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v5 + 72) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v5 + 88) = *(_OWORD *)(a1 + 64);
    *(_QWORD *)(v5 + 104) = *(_QWORD *)(a1 + 80);
    ObfReferenceObjectWithTag(*(PVOID *)(v5 + 48), 0x536C6148u);
    *(_WORD *)(v5 + 120) = 1;
    *(_QWORD *)(v5 + 136) = v5 + 128;
    *(_QWORD *)(v5 + 128) = v5 + 128;
    *(_BYTE *)(v5 + 122) = 6;
    *(_DWORD *)(v5 + 124) = 1;
    v6 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
    v7 = (__int64 *)qword_140C49C08;
    if ( *(__int64 **)qword_140C49C08 != &SecondaryIcList )
      __fastfail(3u);
    *(_QWORD *)v5 = &SecondaryIcList;
    *(_QWORD *)(v5 + 8) = v7;
    *v7 = v5;
    qword_140C49C08 = v5;
    KxReleaseSpinLock(&SecondaryIcListSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
