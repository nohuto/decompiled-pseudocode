/*
 * XREFs of IvtUpdateTranslationStructures @ 0x140530270
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x14052DF88 (IvtAttachDeviceDomainInternal.c)
 *     IvtProcessDeviceExceptions @ 0x140A64544 (IvtProcessDeviceExceptions.c)
 *     HalpIvtpInitializeReservedDomain @ 0x140A650A8 (HalpIvtpInitializeReservedDomain.c)
 * Callees:
 *     IvtUpdateContextEntry @ 0x14052F89C (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405300A8 (IvtUpdateScalableModeTranslationStructures.c)
 */

__int64 *__fastcall IvtUpdateTranslationStructures(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 *a10)
{
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+38h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 320) )
    return IvtUpdateScalableModeTranslationStructures(a1, a2, a3, a4, v11, v12, a7, v13, a9, a10);
  else
    return IvtUpdateContextEntry(a1, a2, a7, (__int64)a4, a9, a10);
}
