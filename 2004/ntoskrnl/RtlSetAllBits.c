/*
 * XREFs of RtlSetAllBits @ 0x14030C990
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402B9F20 (MiBuildMdlForMappedFileFault.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14030C624 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403110E8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiExtendPagingFileMaximum @ 0x14053DBC0 (MiExtendPagingFileMaximum.c)
 *     MiCaptureImageExceptionValues @ 0x1407489CC (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140861760 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1408AB3B0 (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x1408CA038 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x14092AA80 (SmcStoreResize.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     VfThunkInit @ 0x140A47930 (VfThunkInit.c)
 *     MiCreateBootSlabEntries @ 0x140A47CF0 (MiCreateBootSlabEntries.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5D1AC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140A64D94 (HalpPowerInitDiscard.c)
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
