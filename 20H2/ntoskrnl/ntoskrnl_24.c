/*
 * XREFs of ntoskrnl_24 @ 0x14094FE10
 * Callers:
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1407A152C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
