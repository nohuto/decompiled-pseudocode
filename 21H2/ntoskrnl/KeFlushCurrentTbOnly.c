/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1403B7608
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402D2CB0 (MiAgeWorkingSetTail.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiConvertHiberPhasePages @ 0x140995F28 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140A5761C (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A5768C (MiInitializePfnsForValidMappings.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14039053C (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x140390E7C (KiPrepareFlushParameters.c)
 *     KiFlushCurrentTbOnly @ 0x1403975CC (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiIsFlushEntire @ 0x140519CCC (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140519D04 (KiPrepareFlushCurrentAffinity.c)
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
