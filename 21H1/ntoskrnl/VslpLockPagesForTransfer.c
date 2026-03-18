/*
 * XREFs of VslpLockPagesForTransfer @ 0x140390C28
 * Callers:
 *     VslValidateSecureImagePages @ 0x140390A80 (VslValidateSecureImagePages.c)
 *     VslAllocatePool @ 0x1404F6458 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x1404F68F4 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1404F6ADC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404F6F94 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404F7120 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7630 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404F77DC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404F7B80 (VslRetrieveMailbox.c)
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
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14088BEB8 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x14088C518 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x14088C7B8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14023A430 (MmBuildMdlForNonPagedPool.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     VslpLockMdlForTransfer @ 0x140390DAC (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, ULONG a3, int a4, unsigned int a5)
{
  ULONG v5; // r15d
  struct _MDL *v6; // r12
  struct _MDL *v8; // rbx
  unsigned int v9; // esi
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // r14
  int v12; // esi
  struct _MDL *Next; // r14
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v8 = 0LL;
  if ( (a5 & 3) != 0 && ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
  {
    v12 = -1073741811;
LABEL_16:
    while ( v8 )
    {
      Next = v8->Next;
      v8->Next = 0LL;
      if ( (v8->MdlFlags & 2) != 0 )
        MmUnlockPages(v8);
      ExFreePoolWithTag(v8, 0);
      v8 = Next;
    }
    return (unsigned int)v12;
  }
  else
  {
    v11 = 0LL;
    do
    {
      v15 = (((unsigned __int16)v6 & 0xFFF) + (unsigned __int64)v5 + 4095) >> 12;
      v9 = 8 * v15 + 48;
      if ( (a5 & 1) != 0 )
        v9 = 4096;
      if ( (a5 & 4) != 0 )
        v9 = (v9 + 4095) & 0xFFFFF000;
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x54736D56u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v8 = v11;
        v12 = -1073741670;
        goto LABEL_16;
      }
      PoolWithTag->Next = 0LL;
      PoolWithTag->Size = 8 * (v15 + 6);
      PoolWithTag->MdlFlags = 0;
      PoolWithTag->StartVa = (PVOID)((unsigned __int64)v6 & 0xFFFFFFFFFFFFF000uLL);
      PoolWithTag->ByteOffset = (unsigned __int16)v6 & 0xFFF;
      PoolWithTag->ByteCount = v5;
      if ( (a5 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(PoolWithTag);
      }
      else if ( v5 )
      {
        MiProbeAndLockPages(PoolWithTag, 0, a4 != 0);
      }
      v8->Next = v11;
      v11 = v8;
      v6 = v8;
      v5 = v9;
    }
    while ( v9 > 0x1000 );
    v12 = VslpLockMdlForTransfer(a1, v8, a5);
    if ( v12 < 0 )
      goto LABEL_16;
    *(_DWORD *)(a1 + 64) |= 8u;
    return 0LL;
  }
}
