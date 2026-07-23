/*
 * XREFs of IopFindDiskIoAttribution @ 0x1402DB0D0
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402DAFC4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1402DB040 (IoRecordIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     IopDiskIoAttributionTreeCompare @ 0x140310B28 (IopDiskIoAttributionTreeCompare.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  unsigned __int64 v1; // rbp
  KIRQL v2; // al
  __int64 v3; // r8
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rsi
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v5 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 && IopDiskIoAttributionTree.Root )
    Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
  v6 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    do
    {
      v7 = IopDiskIoAttributionTreeCompare(&v15, Root, v3);
      if ( v7 >= 0 )
      {
        if ( v7 <= 0 )
          break;
        v8 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v8 = *(_QWORD *)Root;
      }
      if ( v6 && v8 )
        Root ^= v8;
      else
        Root = v8;
    }
    while ( Root );
    if ( Root )
    {
      v1 = Root;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Root + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v1;
}
