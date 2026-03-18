/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x14039C670
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140212860 (ExIsResourceAcquiredExclusiveLite.c)
 * Callees:
 *     ExpFindFastOwnerEntryForThread @ 0x14039D384 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeldExclusive(ULONG_PTR BugCheckParameter2)
{
  __int16 v1; // ax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v6; // bl
  bool v7; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v1 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v1 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( (v1 & 0x80u) == 0 )
    return 0;
  v6 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v6 + 1)) & 4;
  }
  v7 = ExpFindFastOwnerEntryForThread(KeGetCurrentThread(), BugCheckParameter2, 0LL, 0LL) != 0;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && v6 <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v7;
}
