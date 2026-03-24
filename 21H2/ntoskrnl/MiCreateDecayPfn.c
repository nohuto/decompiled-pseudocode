/*
 * XREFs of MiCreateDecayPfn @ 0x1402AECD8
 * Callers:
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiCreateDecayPfn()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rdi
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

  result = RtlpInterlockedPopEntrySList(&stru_140C4E9B0);
  v1 = result;
  if ( result )
  {
    v2 = *(unsigned __int16 **)(qword_140C4E648
                              + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]);
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4LL);
    *((_QWORD *)&v1[2].Next + 1) ^= (v3 ^ *((_QWORD *)&v1[2].Next + 1)) & 0xFFFFFFFFFLL;
    v5 = (unsigned __int8)MiLockPageInline(v1, v4, v3);
    BYTE3(v1[2].Next) |= 8u;
    v6 = BYTE3(v1[2].Next);
    *((_QWORD *)&v1[2].Next + 1) ^= (*((_QWORD *)&v1[2].Next + 1) ^ ((unsigned __int64)*v2 << 39)) & 0x1FF8000000000LL;
    BYTE3(v1[2].Next) = v6 & 0xF8 | 5;
    MiInsertPageInList(v1, 4LL);
    _InterlockedAnd64((volatile signed __int64 *)&v1[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
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
    return v1;
  }
  return result;
}
