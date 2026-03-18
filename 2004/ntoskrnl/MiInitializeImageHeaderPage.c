/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1403533CC
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // bl
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // [rsp+38h] [rbp+10h] BYREF
  int v19; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0;
  v6 = MiMapPageInHyperSpaceWorker(a1, &v18, 0x80000000, a4);
  memset((void *)(v6 + a2), 0, 4096 - a2);
  MiUnmapPageInHyperSpaceWorker(v6, 2u, 0x80000000);
  if ( (a2 & 0x1FF) != 0 )
  {
    v12 = 48 * a1 - 0x58000000000LL;
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19, v7, v8, v9);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_BYTE *)(v12 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v10 = v18;
    if ( v18 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = v18;
      v16 = ~(unsigned __int16)(-1LL << (v18 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v10 = v18;
  }
  result = v10;
  __writecr8(v10);
  return result;
}
