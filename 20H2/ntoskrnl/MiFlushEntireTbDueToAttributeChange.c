/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8
 * Callers:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x1402C9D90 (MiValidateInPage.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x1403495C4 (MiChangePageAttributeBatch.c)
 *     MiCombiningInProgress @ 0x140366A08 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     HvcallFastExtended @ 0x14038FE30 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiFlushEntireTbDueToAttributeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v6[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C4DD80;
  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v6[0] = 0LL;
      v6[2] = 0LL;
      v6[1] = 531LL;
      HvcallFastExtended(65538, (unsigned int)v6, 24, 0, 0);
    }
    else
    {
      memset(v5, 0, 0x68uLL);
      VslpEnterIumSecureMode(3u, 0, 0, (__int64)v5);
    }
  }
  return KeFlushTb(4LL, 2LL, a3, a4);
}
