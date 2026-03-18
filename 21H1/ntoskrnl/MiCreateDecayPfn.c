/*
 * XREFs of MiCreateDecayPfn @ 0x1402FF368
 * Callers:
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY result; // rax
  ULONG_PTR v1; // rdi
  unsigned __int16 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  char v6; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  result = RtlpInterlockedPopEntrySList(&stru_140C4E8F0);
  v1 = (ULONG_PTR)result;
  if ( result )
  {
    v2 = *(unsigned __int16 **)(qword_140C4E588
                              + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4);
    *(_QWORD *)(v1 + 40) ^= (v3 ^ *(_QWORD *)(v1 + 40)) & 0xFFFFFFFFFLL;
    v5 = (unsigned __int8)MiLockPageInline(v1, v4, v3);
    *(_BYTE *)(v1 + 35) |= 8u;
    v6 = *(_BYTE *)(v1 + 35);
    *(_QWORD *)(v1 + 40) ^= (*(_QWORD *)(v1 + 40) ^ ((unsigned __int64)*v2 << 39)) & 0x1FF8000000000LL;
    *(_BYTE *)(v1 + 35) = v6 & 0xF8 | 5;
    MiInsertPageInList(v1, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    return (PSLIST_ENTRY)v1;
  }
  return result;
}
