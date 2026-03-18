/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x140350E3C
 * Callers:
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiValidateInPage @ 0x140282810 (MiValidateInPage.c)
 *     MiChangePageAttributeContiguous @ 0x14031F698 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     MiCombiningInProgress @ 0x140364068 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C4DE40;
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
