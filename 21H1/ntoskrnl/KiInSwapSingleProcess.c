/*
 * XREFs of KiInSwapSingleProcess @ 0x1402EF380
 * Callers:
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x14032FD8C (KeReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiRequestProcessInSwap @ 0x1402EF450 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = v5;
      KiSwapThread(a1, (__int64)CurrentPrcb, 0LL);
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
