/*
 * XREFs of VfAvlCleanupLockContext @ 0x14036F694
 * Callers:
 *     VfTargetDriversAdd @ 0x14036F5AC (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14037040C (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14059C8CC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1409D2FC8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D3038 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409D32BC (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409D333C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D34B0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D36FC (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D37F4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D38A0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D3D84 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D3F54 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D4044 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D42A0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D43D4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D46A0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D47DC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D48A4 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D68D0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1409DE508 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409DE5A4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409DE6CC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409DEE10 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409DF47C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E4F40 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036F77C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
