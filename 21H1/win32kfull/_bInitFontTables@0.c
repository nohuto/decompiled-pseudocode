/*
 * XREFs of _bInitFontTables@0 @ 0x292DA4
 * Callers:
 *     <none>
 * Callees:
 *     ??0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0xE7E30 (--0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YGPAVPFT@@I@Z @ 0xE7EE0 (-pAllocateAndInitializePFT@@YGPAVPFT@@I@Z.c)
 *     _vQueryRegistryForNumberOfBuckets@8 @ 0x292E5A (_vQueryRegistryForNumberOfBuckets@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall bInitFontTables()
{
  int v0; // esi
  int *v2; // [esp+4h] [ebp-Ch] BYREF
  int v3; // [esp+8h] [ebp-8h] BYREF
  unsigned int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  v3 = 0;
  vQueryRegistryForNumberOfBuckets(&v4, &v3);
  gpPFTPublic = (struct _FONTHASH **)pAllocateAndInitializePFT(v4);
  if ( !gpPFTPublic )
    return 0;
  gpPFTDevice = pAllocateAndInitializePFT(v3);
  if ( !gpPFTDevice )
    return 0;
  _ghsemPublicPFT = GreCreateSemaphore();
  if ( !_ghsemPublicPFT )
    return 0;
  ghsemGlyphSet = GreCreateSemaphore();
  if ( !ghsemGlyphSet )
    return 0;
  ghsemPrintKView = GreCreateSemaphore();
  if ( !ghsemPrintKView )
    return 0;
  v0 = 1;
  FHMEMOBJ::FHMEMOBJ(&v2, (int *)gpPFTPublic + 1, 0, v4);
  FHMEMOBJ::FHMEMOBJ(&v2, (int *)gpPFTPublic, 1, v4);
  FHMEMOBJ::FHMEMOBJ(&v2, (int *)gpPFTPublic + 2, 2, v4);
  return v0;
}
