/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140393C04
 * Callers:
 *     VslValidateSecureImagePages @ 0x140393AB0 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x1404FA7D4 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x1404FA970 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1404FA9BC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404FAE74 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FB000 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FB510 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FB6BC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404FBA60 (VslRetrieveMailbox.c)
 *     VslpSkStopProfiling @ 0x1404FC54C (VslpSkStopProfiling.c)
 *     VslCreateSecureImageSection @ 0x1404FC820 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FC920 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FCD40 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FCFE0 (VslTransferSecureImageVersionResource.c)
 *     VslCapturePgoData @ 0x140891870 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x1408919B0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140891BB0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140891E70 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x1408922D4 (VslGetOnDemandDebugChallenge.c)
 *     VslInitializeEnclave @ 0x1408925C4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x1408927EC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x1408928E8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140892A08 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140892D28 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x140893388 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140893628 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  struct _MDL *v2; // rbx
  struct _MDL *v3; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  if ( ((_DWORD)a1[8] & 8) != 0 )
  {
    v2 = (struct _MDL *)*a1;
    while ( v2 )
    {
      if ( (v2->MdlFlags & 2) != 0 )
        MmUnlockPages(v2);
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
