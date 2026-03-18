/*
 * XREFs of MiInitializeImageHeaderPage @ 0x140323DAC
 * Callers:
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // bl
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // [rsp+38h] [rbp+10h] BYREF
  int v17; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0;
  v4 = MiMapPageInHyperSpaceWorker(a1, &v16, 0x80000000LL);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  MiUnmapPageInHyperSpaceWorker(v4, 2u, 0x80000000);
  if ( (a2 & 0x1FF) != 0 )
  {
    v10 = 48 * a1 - 0x58000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17, v5, v6, v7);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_BYTE *)(v10 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v8 = v16;
    if ( v16 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = v16;
      v14 = ~(unsigned __int16)(-1LL << (v16 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v8 = v16;
  }
  result = v8;
  __writecr8(v8);
  return result;
}
