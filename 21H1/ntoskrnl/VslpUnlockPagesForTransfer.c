/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140390BD4
 * Callers:
 *     VslValidateSecureImagePages @ 0x140390A80 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x1404F68F4 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x1404F6A90 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1404F6ADC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404F6F94 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404F7120 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7630 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404F77DC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404F7B80 (VslRetrieveMailbox.c)
 *     VslpSkStopProfiling @ 0x1404F866C (VslpSkStopProfiling.c)
 *     VslCreateSecureImageSection @ 0x1404F8940 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404F8A40 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1404F8E60 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1404F9100 (VslTransferSecureImageVersionResource.c)
 *     VslCapturePgoData @ 0x14088AA00 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088AB40 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x14088AD40 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088B000 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088B464 (VslGetOnDemandDebugChallenge.c)
 *     VslInitializeEnclave @ 0x14088B754 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14088B97C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088BA78 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14088BEB8 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x14088C518 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x14088C7B8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
