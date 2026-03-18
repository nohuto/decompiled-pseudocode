/*
 * XREFs of RtlSetAllBits @ 0x14025D340
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14025CFD4 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14025DC3C (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiBuildMdlForMappedFileFault @ 0x14029C170 (MiBuildMdlForMappedFileFault.c)
 *     MiExtendPagingFileMaximum @ 0x140541590 (MiExtendPagingFileMaximum.c)
 *     MiCaptureImageExceptionValues @ 0x1407575AC (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x140758F7C (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1407B25E0 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1408B0EE0 (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x1408CFE78 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x1409308A8 (SmcStoreResize.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 *     VfThunkInit @ 0x140A4DBCC (VfThunkInit.c)
 *     MiCreateBootSlabEntries @ 0x140A4DF80 (MiCreateBootSlabEntries.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A6450C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140A6C064 (HalpPowerInitDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
