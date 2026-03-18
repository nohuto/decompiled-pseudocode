/*
 * XREFs of ?bInitPrivatePFT@@YAHXZ @ 0x1C0272128
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C0021D94 (GreAddFontResourceWInternal.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C010D194 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontMemResourceEx @ 0x1C0289898 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012455C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C0124618 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 bInitPrivatePFT(void)
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v0 = 0;
  if ( gpPFTPrivate )
    v0 = 1;
  else
    gpPFTPrivate = (struct PFT **const)pAllocateAndInitializePFT(20);
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
  return v0;
}
