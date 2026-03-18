/*
 * XREFs of SmAcquireReleaseCharges @ 0x1402C3C54
 * Callers:
 *     SmFpFree @ 0x14023D59C (SmFpFree.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402C385C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402C3A24 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1402C977C (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D194C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1402D1DB4 (SmFpCleanup.c)
 *     SmFpAllocate @ 0x140309C68 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x14030A1A0 (SmKmAllocateMdlForLock.c)
 *     SmKmFreeMdlForLock @ 0x140321428 (SmKmFreeMdlForLock.c)
 *     SmFpPreAllocate @ 0x1403C4A94 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x1402C3CA0 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x1402C3D30 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(unsigned __int64 a1, char a2, int a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r9d

  v3 = a1 >> 12;
  v4 = 1;
  v5 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v5 = a2 & 1;
  if ( a3 )
    MmReleaseResourceCharge(v3, v5, 0LL);
  else
    return (unsigned int)MmChargeResources(v3, v5);
  return v4;
}
