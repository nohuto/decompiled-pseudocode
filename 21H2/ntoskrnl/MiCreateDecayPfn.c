/*
 * XREFs of MiCreateDecayPfn @ 0x14022D038
 * Callers:
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rdi
  unsigned __int16 *v2; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  char v5; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  result = RtlpInterlockedPopEntrySList(&ListHead);
  v1 = result;
  if ( result )
  {
    v2 = *(unsigned __int16 **)(qword_140C4E688
                              + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4LL);
    *((_QWORD *)&v1[2].Next + 1) ^= (v3 ^ *((_QWORD *)&v1[2].Next + 1)) & 0xFFFFFFFFFLL;
    v4 = (unsigned __int8)MiLockPageInline(v1);
    BYTE3(v1[2].Next) |= 8u;
    v5 = BYTE3(v1[2].Next);
    *((_QWORD *)&v1[2].Next + 1) ^= (*((_QWORD *)&v1[2].Next + 1) ^ ((unsigned __int64)*v2 << 39)) & 0x1FF8000000000LL;
    BYTE3(v1[2].Next) = v5 & 0xF8 | 5;
    MiInsertPageInList(v1, 4LL);
    _InterlockedAnd64((volatile signed __int64 *)&v1[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    return v1;
  }
  return result;
}
