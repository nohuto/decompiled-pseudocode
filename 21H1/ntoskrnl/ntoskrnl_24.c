/*
 * XREFs of ntoskrnl_24 @ 0x140948CB0
 * Callers:
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140792454 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
