/*
 * XREFs of KeRaiseUserException @ 0x14056E010
 * Callers:
 *     ExHandleLogBadReference @ 0x14025032C (ExHandleLogBadReference.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x14025E30C (KiSetupForInstrumentationReturn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v4; // r10
  __int64 TrapFrame; // rcx
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 1;
  if ( !CurrentIrql )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  TrapFrame = (__int64)CurrentThread->TrapFrame;
  if ( TrapFrame )
  {
    if ( (*(_BYTE *)(TrapFrame + 368) & 1) != 0 )
    {
      *((_DWORD *)CurrentThread->Teb + 176) = a1;
      *(_WORD *)(TrapFrame + 368) = 51;
      *(_QWORD *)(TrapFrame + 360) = qword_140D071A0;
      if ( *(_BYTE *)(TrapFrame + 43) != 2 )
        KiSetupForInstrumentationReturn(TrapFrame);
    }
  }
  if ( CurrentIrql < v4 )
  {
    if ( KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & v4) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (v4 + CurrentIrql));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return a1;
}
