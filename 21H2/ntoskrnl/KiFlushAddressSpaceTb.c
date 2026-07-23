/*
 * XREFs of KiFlushAddressSpaceTb @ 0x1403902FC
 * Callers:
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403B7260 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1402EEEC8 (KxSetTimeStampBusy.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x1403903E0 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlFlushAddressSpaceTb @ 0x14039053C (HvlFlushAddressSpaceTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404FAFE4 (HvlpSlowFlushAddressSpaceTb.c)
 */

__int64 __fastcall KiFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r8
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v4 = a3;
  if ( a1 || a2 || !a4 )
    return HvlFlushAddressSpaceTb(a1, a2, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    LOBYTE(v6) = v4;
    if ( (HvlEnlightenments & 0x80u) == 0 )
      HvlpSlowFlushAddressSpaceTb(0LL, 0LL, v6);
    else
      HvlpFastFlushAddressSpaceTb(0LL, 0LL, v6);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
