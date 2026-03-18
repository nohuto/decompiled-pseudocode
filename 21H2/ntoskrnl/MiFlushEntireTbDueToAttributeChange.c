/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14026A230
 * Callers:
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiCombiningInProgress @ 0x14025B5E0 (MiCombiningInProgress.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x14026873C (MiChangePageAttributeContiguous.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiValidateInPage @ 0x140338080 (MiValidateInPage.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140419138 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 *     MiMakeIoRangePermanent @ 0x140591814 (MiMakeIoRangePermanent.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  __int64 v1; // rcx
  _BYTE v2[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v3[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C50740;
  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v3[0] = 0LL;
      v3[2] = 0LL;
      v3[1] = 531LL;
      HvcallFastExtended(65538, (unsigned int)v3, 24, 0, 0);
    }
    else
    {
      memset(v2, 0, 0x68uLL);
      LOBYTE(v1) = 3;
      VslpEnterIumSecureMode(v1, 0LL, 0LL, v2);
    }
  }
  return KeFlushTb(4LL, 2LL);
}
