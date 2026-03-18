/*
 * XREFs of RtlSetAllBits @ 0x1402CAD50
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402272A0 (MiBuildMdlForMappedFileFault.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1402CA9F0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402D0B80 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiExtendPagingFileMaximum @ 0x14053D570 (MiExtendPagingFileMaximum.c)
 *     MiCaptureImageExceptionValues @ 0x140746E4C (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1408AA090 (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x1408C8CE8 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x1409297D0 (SmcStoreResize.c)
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     VfThunkInit @ 0x140A420D4 (VfThunkInit.c)
 *     MiCreateBootSlabEntries @ 0x140A42490 (MiCreateBootSlabEntries.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5E10C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140A653B4 (HalpPowerInitDiscard.c)
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
