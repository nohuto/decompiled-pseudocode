/*
 * XREFs of _EngFntCacheFault@8 @ 0x1E8664
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z @ 0xECB3C (-FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0xDF9A2 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_274064 & 3) != 0 && dword_274068 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(dword_274068 + 12);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(dword_274068 + 12) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
