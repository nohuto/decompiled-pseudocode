/*
 * XREFs of VslpLockPagesForTransfer @ 0x140391798
 * Callers:
 *     VslValidateSecureImagePages @ 0x1403915F0 (VslValidateSecureImagePages.c)
 *     VslAllocatePool @ 0x1404F6AA8 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x1404F6F44 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1404F712C (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404F75E4 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404F7770 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404F7C80 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404F7E2C (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404F81D0 (VslRetrieveMailbox.c)
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
 *     VslObtainHotPatchUndoTable @ 0x14088CEB8 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14088D1D8 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x14088D838 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x14088DAD8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A4F53C (VslConnectSwInterrupt.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402CD260 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x14039191C (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
