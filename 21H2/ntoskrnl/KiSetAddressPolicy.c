/*
 * XREFs of KiSetAddressPolicy @ 0x1402AC2D0
 * Callers:
 *     KiSynchronizeAddressPolicyTarget @ 0x140240A90 (KiSynchronizeAddressPolicyTarget.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1402ABB30 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x1402ABC40 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403885F0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1403FF6E0 (KxSetAddressPolicy.c)
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
