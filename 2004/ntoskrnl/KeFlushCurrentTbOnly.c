/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1403B4498
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402202B0 (MiAgeWorkingSetTail.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiConvertHiberPhasePages @ 0x140991EB8 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140A54978 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A549E8 (MiInitializePfnsForValidMappings.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14038DA2C (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14038E36C (KiPrepareFlushParameters.c)
 *     KiFlushCurrentTbOnly @ 0x140394BEC (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiIsFlushEntire @ 0x14051461C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140514654 (KiPrepareFlushCurrentAffinity.c)
 */

struct _KTHREAD *__fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v3; // r8
  char v4[8]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v6[176]; // [rsp+30h] [rbp-C8h] BYREF

  v5 = 0LL;
  memset(v6, 0, 0xA8uLL);
  v4[0] = 0;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1);
  KiPrepareFlushParameters(a1, (unsigned __int64 *)&v5, v4);
  KiPrepareFlushCurrentAffinity(v6);
  LOBYTE(v3) = v4[0];
  return (struct _KTHREAD *)HvlFlushAddressSpaceTb(v5, (__int64)v6, v3);
}
