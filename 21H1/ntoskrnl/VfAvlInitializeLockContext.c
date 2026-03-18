/*
 * XREFs of VfAvlInitializeLockContext @ 0x14059CA14
 * Callers:
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
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
