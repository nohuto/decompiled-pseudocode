/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1403AD034
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402F3AD0 (MiAgeWorkingSetTail.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiConvertHiberPhasePages @ 0x140A4FE40 (MiConvertHiberPhasePages.c)
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140B1AE4C (MiZeroBootMappings.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14039DA34 (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     KiFlushCurrentTbOnly @ 0x1403A35B8 (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiIsFlushEntire @ 0x14056F694 (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14056F6CC (KiPrepareFlushCurrentAffinity.c)
 */

struct _KTHREAD *__fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // r8
  char v7[8]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v8; // [rsp+28h] [rbp-130h] BYREF
  _BYTE v9[272]; // [rsp+30h] [rbp-128h] BYREF

  v8 = 0LL;
  memset(v9, 0, 0x108uLL);
  v7[0] = 0;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1, v2, v3, v4);
  KiPrepareFlushParameters(a1, (unsigned __int64 *)&v8, v7);
  KiPrepareFlushCurrentAffinity(v9);
  LOBYTE(v6) = v7[0];
  return (struct _KTHREAD *)HvlFlushAddressSpaceTb(v8, (__int64)v9, v6);
}
