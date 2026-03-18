/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1403B5E58
 * Callers:
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1402EA020 (MiAgeWorkingSetTail.c)
 *     MiConvertHiberPhasePages @ 0x140997F28 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140A54FF8 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A55068 (MiInitializePfnsForValidMappings.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14038FF1C (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14039085C (KiPrepareFlushParameters.c)
 *     KiFlushCurrentTbOnly @ 0x1403970AC (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiIsFlushEntire @ 0x140517F4C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140517F84 (KiPrepareFlushCurrentAffinity.c)
 */

struct _KTHREAD *__fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v5; // r8
  char v6[8]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v8[176]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = 0LL;
  memset(v8, 0, 0xA8uLL);
  v6[0] = 0;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1, v2, v3);
  KiPrepareFlushParameters(a1, (unsigned __int64 *)&v7, v6);
  KiPrepareFlushCurrentAffinity(v8);
  LOBYTE(v5) = v6[0];
  return (struct _KTHREAD *)HvlFlushAddressSpaceTb(v7, (__int64)v8, v5);
}
