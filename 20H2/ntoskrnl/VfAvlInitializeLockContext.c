/*
 * XREFs of VfAvlInitializeLockContext @ 0x1405A0BA4
 * Callers:
 *     VfDevObjIsDeviceRemoved @ 0x1409D8FE8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D9058 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409D92DC (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409D935C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D94D0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D971C (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D9814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D98C0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D9DA4 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D9F74 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409DA064 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409DA2C0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409DA3F4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409DA51C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409DA6C0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409DA7FC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409DA8C4 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409DC8F0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1409E4528 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E45C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E46EC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E4E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E5210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E549C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409EAF60 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
