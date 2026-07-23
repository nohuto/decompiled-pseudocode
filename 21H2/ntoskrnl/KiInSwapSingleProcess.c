/*
 * XREFs of KiInSwapSingleProcess @ 0x140213470
 * Callers:
 *     KeReadyThread @ 0x1402659B4 (KeReadyThread.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x1402ABC40 (KiAttachProcess.c)
 * Callees:
 *     KiRequestProcessInSwap @ 0x140213540 (KiRequestProcessInSwap.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInSwapSingleProcess(_KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int8 v6; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v10; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  v4 = a3;
  v6 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
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
