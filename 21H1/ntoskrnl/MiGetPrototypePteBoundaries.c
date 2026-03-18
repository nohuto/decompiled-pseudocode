/*
 * XREFs of MiGetPrototypePteBoundaries @ 0x1405522BC
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x140559F80 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiObtainProtoBaseFromNode @ 0x1402BCAF0 (MiObtainProtoBaseFromNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPrototypePteBoundaries(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  KIRQL v5; // al
  _QWORD *v6; // r10
  unsigned __int64 v7; // rbx
  _QWORD *v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v5 = ExAcquireSpinLockShared(&dword_140C4CA80);
  v6 = (_QWORD *)qword_140C4CA78;
  v7 = v5;
  while ( v6 )
  {
    v16 = 0LL;
    v9 = MiObtainProtoBaseFromNode(v6, &v16);
    if ( a1 < v9 )
    {
      v6 = (_QWORD *)*v8;
    }
    else
    {
      if ( a1 < v9 + 8 * v16 )
      {
        if ( v8 )
          v3 = MiObtainProtoBaseFromNode(v8, a2);
        break;
      }
      v6 = (_QWORD *)v8[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4CA80);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v3;
}
