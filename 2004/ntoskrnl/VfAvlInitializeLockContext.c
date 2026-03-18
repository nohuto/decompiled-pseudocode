/*
 * XREFs of VfAvlInitializeLockContext @ 0x14059D104
 * Callers:
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
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
