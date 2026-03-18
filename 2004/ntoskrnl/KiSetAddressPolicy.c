/*
 * XREFs of KiSetAddressPolicy @ 0x140205DA0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapProcess @ 0x1402055A0 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140205710 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1402FE7F0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140385BA0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x14099BE8C (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1403F82B0 (KxSetAddressPolicy.c)
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
