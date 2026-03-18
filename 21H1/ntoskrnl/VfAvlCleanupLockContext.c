/*
 * XREFs of VfAvlCleanupLockContext @ 0x14036EA64
 * Callers:
 *     VfTargetDriversAdd @ 0x14036E97C (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14036F7DC (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14059C1DC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1409D2F68 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D2FD8 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409D325C (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409D32DC (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D3450 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D369C (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D3794 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D3840 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D3D24 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D3EF4 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D3FE4 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D4240 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D4374 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D449C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D4640 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D477C (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D4844 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D6870 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1409DE4A8 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409DE544 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE66C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEDB0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF190 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF41C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E4EE0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036EB4C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
    LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  }
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = KiIrqlFlags;
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = (v1 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v1;
          if ( v6 )
            LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return v1;
}
