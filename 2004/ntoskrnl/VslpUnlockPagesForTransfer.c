/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140391744
 * Callers:
 *     VslValidateSecureImagePages @ 0x1403915F0 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x1404F6F44 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x1404F70E0 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1404F712C (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404F75E4 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404F7770 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7C80 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404F7E2C (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404F81D0 (VslRetrieveMailbox.c)
 *     VslpSkStopProfiling @ 0x1404F8CBC (VslpSkStopProfiling.c)
 *     VslCreateSecureImageSection @ 0x1404F8F90 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404F9090 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1404F94B0 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1404F9750 (VslTransferSecureImageVersionResource.c)
 *     VslCapturePgoData @ 0x14088BD20 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088BE60 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x14088C060 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088C320 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088C784 (VslGetOnDemandDebugChallenge.c)
 *     VslInitializeEnclave @ 0x14088CA74 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14088CC9C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088CD98 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14088D1D8 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x14088D838 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x14088DAD8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A4F53C (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
