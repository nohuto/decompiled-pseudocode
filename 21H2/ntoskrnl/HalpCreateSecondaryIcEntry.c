/*
 * XREFs of HalpCreateSecondaryIcEntry @ 0x14051CFB0
 * Callers:
 *     HalpRegisterSecondaryIcInterface @ 0x14051D9E4 (HalpRegisterSecondaryIcInterface.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpCreateSecondaryIcEntry(__int64 a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 *v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  Pool2 = ExAllocatePool2(64LL, 16 * (*(unsigned __int16 *)(a1 + 20) + 10LL), 845963592LL);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 20) = *(unsigned __int16 *)(a1 + 20);
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 56) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(Pool2 + 72) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(Pool2 + 88) = *(_OWORD *)(a1 + 64);
    *(_QWORD *)(Pool2 + 104) = *(_QWORD *)(a1 + 80);
    ObfReferenceObjectWithTag(*(PVOID *)(Pool2 + 48), 0x326C6148u);
    *(_WORD *)(v4 + 120) = 1;
    *(_QWORD *)(v4 + 136) = v4 + 128;
    *(_QWORD *)(v4 + 128) = v4 + 128;
    *(_BYTE *)(v4 + 122) = 6;
    *(_DWORD *)(v4 + 124) = 1;
    v5 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
    v6 = (__int64 *)qword_140C4B0C8;
    if ( *(__int64 **)qword_140C4B0C8 != &SecondaryIcList )
      __fastfail(3u);
    *(_QWORD *)v4 = &SecondaryIcList;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    qword_140C4B0C8 = v4;
    KxReleaseSpinLock(&SecondaryIcListSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
