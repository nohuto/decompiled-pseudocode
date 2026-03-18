/*
 * XREFs of VslpLockPagesForTransfer @ 0x140393C58
 * Callers:
 *     VslValidateSecureImagePages @ 0x140393AB0 (VslValidateSecureImagePages.c)
 *     VslAllocatePool @ 0x1404FA338 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x1404FA7D4 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1404FA9BC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404FAE74 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FB000 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FB510 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FB6BC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404FBA60 (VslRetrieveMailbox.c)
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
 *     VslObtainHotPatchUndoTable @ 0x140892A08 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140892D28 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x140893388 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140893628 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140254270 (MmBuildMdlForNonPagedPool.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     VslpLockMdlForTransfer @ 0x140393DDC (VslpLockMdlForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
        MiProbeAndLockPages((__int64)PoolWithTag, 0, a4 != 0);
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
