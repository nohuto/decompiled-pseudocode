/*
 * XREFs of KiSetAddressPolicy @ 0x140268CF0
 * Callers:
 *     KiSwapProcess @ 0x140268550 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140268660 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x140320F20 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140387D40 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x1409A1F8C (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1403FD240 (KxSetAddressPolicy.c)
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
