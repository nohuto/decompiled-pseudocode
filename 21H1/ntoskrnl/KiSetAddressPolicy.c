/*
 * XREFs of KiSetAddressPolicy @ 0x14025ECC0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapProcess @ 0x14025E4C0 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x140319E70 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140384C30 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x14099A6F0 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1403F7020 (KxSetAddressPolicy.c)
 */

__int64 KiSetAddressPolicy()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+20h] [rbp-8h]

  _disable();
  KxSetAddressPolicy();
  result = v1 >> 9;
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
