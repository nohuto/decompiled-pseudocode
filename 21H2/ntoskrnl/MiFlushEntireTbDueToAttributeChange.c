/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     MiValidateInPage @ 0x1402DFDC0 (MiValidateInPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x14030E2F0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x140366E68 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C4DF40;
  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v2[0] = 0LL;
      v2[2] = 0LL;
      v2[1] = 531LL;
      HvcallFastExtended(65538, (unsigned int)v2, 24, 0, 0);
    }
    else
    {
      memset(v1, 0, 0x68uLL);
      VslpEnterIumSecureMode(3u, 0, 0, (__int64)v1);
    }
  }
  return KeFlushTb(4u, 2u);
}
