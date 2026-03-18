/*
 * XREFs of SmAcquireReleaseCharges @ 0x1403574D0
 * Callers:
 *     SmFpFree @ 0x1402580A4 (SmFpFree.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140337238 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403570D8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403572A0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmKmAllocateMdlForLock @ 0x140357C94 (SmKmAllocateMdlForLock.c)
 *     SmKmFreeMdlForLock @ 0x140357D50 (SmKmFreeMdlForLock.c)
 *     SmFpAllocate @ 0x140358D98 (SmFpAllocate.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140359CC0 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14035A0D8 (SmFpCleanup.c)
 *     SmFpPreAllocate @ 0x1403C83F4 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x14035751C (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x1403575AC (MmReleaseResourceCharge.c)
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
