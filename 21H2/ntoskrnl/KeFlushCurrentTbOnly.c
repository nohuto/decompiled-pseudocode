/*
 * XREFs of KeFlushCurrentTbOnly @ 0x1403B7498
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14022E460 (MiAgeWorkingSetTail.c)
 *     MiDeleteVaTail @ 0x14033AB30 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiConvertHiberPhasePages @ 0x140994F28 (MiConvertHiberPhasePages.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x140A5661C (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A5668C (MiInitializePfnsForValidMappings.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x1403903EC (HvlFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x140390D2C (KiPrepareFlushParameters.c)
 *     KiFlushCurrentTbOnly @ 0x14039747C (KiFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     KiIsFlushEntire @ 0x140519A8C (KiIsFlushEntire.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140519AC4 (KiPrepareFlushCurrentAffinity.c)
 */

struct _KTHREAD *__fastcall KeFlushCurrentTbOnly(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // r8
  char v7[8]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v9[176]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = 0LL;
  memset(v9, 0, 0xA8uLL);
  v7[0] = 0;
  if ( (HvlEnlightenments & 0x800000) == 0 || (HvlEnlightenments & 2) == 0 && !(unsigned __int8)KiIsFlushEntire(a1) )
    return KiFlushCurrentTbOnly(a1, v2, v3, v4);
  KiPrepareFlushParameters(a1, (unsigned __int64 *)&v8, v7);
  KiPrepareFlushCurrentAffinity(v9);
  LOBYTE(v6) = v7[0];
  return (struct _KTHREAD *)HvlFlushAddressSpaceTb(v8, (__int64)v9, v6);
}
