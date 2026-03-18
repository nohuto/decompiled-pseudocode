/*
 * XREFs of KiInSwapSingleProcess @ 0x14021158C
 * Callers:
 *     KeReadyThread @ 0x140293184 (KeReadyThread.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x140346E50 (KiAttachProcess.c)
 * Callees:
 *     KiRequestProcessInSwap @ 0x14021162C (KiRequestProcessInSwap.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInSwapSingleProcess(_KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v10; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v4 = a3;
  v6 = 1;
  KiAcquireKobjectLockSafe(a2);
  if ( (*(_DWORD *)(a2 + 840) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a1 == CurrentPrcb->CurrentThread )
    {
      a1->WaitReason = 23;
      a1->WaitIrql = v4;
      KiSwapThread(a1, CurrentPrcb, 0LL);
      return v6;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        SchedulerAssist = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
  }
  __writecr8(v4);
  return v6;
}
