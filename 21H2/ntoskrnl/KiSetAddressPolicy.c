/*
 * XREFs of KiSetAddressPolicy @ 0x1402079D0
 * Callers:
 *     KiSwapProcess @ 0x140207230 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140207340 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1402C25F0 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403884A0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiEnableKvaShadowing @ 0x14099F860 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x1403FF500 (KxSetAddressPolicy.c)
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
