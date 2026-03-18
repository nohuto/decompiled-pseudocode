/*
 * XREFs of ?bInitPrivatePFT@@YGHXZ @ 0x1D0823
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z @ 0xA5444 (-ppfeSynthesizeAMatch@MAPPER@@QAEPAVPFE@@PAK0PAU_POINTL@@@Z.c)
 *     _GreAddFontResourceWInternal@28 @ 0xDC42C (_GreAddFontResourceWInternal@28.c)
 *     _GreAddFontMemResourceEx@20 @ 0x1E9227 (_GreAddFontMemResourceEx@20.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0xE7E30 (--0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YGPAVPFT@@I@Z @ 0xE7EE0 (-pAllocateAndInitializePFT@@YGPAVPFT@@I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall bInitPrivatePFT()
{
  int v0; // esi
  int v2; // [esp+Ch] [ebp-4h] BYREF

  v2 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  if ( gpPFTPrivate )
  {
    v0 = 1;
  }
  else
  {
    v0 = 0;
    gpPFTPrivate = pAllocateAndInitializePFT(20);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
  return v0;
}
