/*
 * XREFs of PspSystemThreadStartup @ 0x1403265A0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 */

__int64 __fastcall PspSystemThreadStartup(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v9; // zf

  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (((unsigned __int8)*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) ^ 1) & 3) == 3 )
    a1(a2);
  LOBYTE(v5) = 1;
  return PspTerminateThreadByPointer(CurrentThread, 0LL, v5);
}
