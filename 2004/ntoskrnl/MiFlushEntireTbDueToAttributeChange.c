/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60
 * Callers:
 *     MiValidateInPage @ 0x1402297C0 (MiValidateInPage.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     MiCombiningInProgress @ 0x140364A28 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     HvcallFastExtended @ 0x14038D940 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C4DD00;
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
