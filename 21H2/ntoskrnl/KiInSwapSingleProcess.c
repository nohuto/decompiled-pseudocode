/*
 * XREFs of KiInSwapSingleProcess @ 0x14029BAA0
 * Callers:
 *     KiAttachProcess @ 0x140207340 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x140277A14 (KeReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRequestProcessInSwap @ 0x14029BB70 (KiRequestProcessInSwap.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInSwapSingleProcess(_KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int8 v7; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // rax
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0;
  v5 = (unsigned __int8)a3;
  v7 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
      KeYieldProcessorEx(&v15, a2, a3, a4);
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  if ( (*(_DWORD *)(a2 + 840) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a1 == CurrentPrcb->CurrentThread )
    {
      a1->WaitReason = 23;
      a1->WaitIrql = v5;
      KiSwapThread(a1, CurrentPrcb, 0LL);
      return v7;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v7 = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        SchedulerAssist = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(v5);
  return v7;
}
