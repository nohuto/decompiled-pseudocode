/*
 * XREFs of MiDeleteDirectMapFixupPfn @ 0x140554534
 * Callers:
 *     MiFreeRelocations @ 0x14076B358 (MiFreeRelocations.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDeleteDirectMapFixupPfn(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  char v7; // dl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v5 = (volatile signed __int64 *)(a1 + 24);
  v6 = (unsigned __int8)MiLockPageInline(a1, a2, a3, a4);
  v7 = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v7;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
  _InterlockedAnd64(v5, 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
