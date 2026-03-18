/*
 * XREFs of ntoskrnl_24 @ 0x14094A050
 * Callers:
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140794C84 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( EtwKernelProvRegHandle )
    return EtwWrite(EtwKernelProvRegHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
