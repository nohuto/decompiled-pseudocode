/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14030438C
 * Callers:
 *     MiValidateInPage @ 0x14023B570 (MiValidateInPage.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiChangePageAttributeContiguous @ 0x1402CF8B8 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x1403035A0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiCombiningInProgress @ 0x140366CB8 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x140714C70 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1408C5F8C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     HvcallFastExtended @ 0x140390300 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C4DF00;
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
