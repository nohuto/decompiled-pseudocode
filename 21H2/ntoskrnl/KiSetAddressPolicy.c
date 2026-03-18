/*
 * XREFs of KiSetAddressPolicy @ 0x140347550
 * Callers:
 *     KiSynchronizeAddressPolicyTarget @ 0x14024AE10 (KiSynchronizeAddressPolicyTarget.c)
 *     KiSwapProcess @ 0x1402D0BA0 (KiSwapProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1402F25C0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x140346E50 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     KiEnableKvaShadowing @ 0x140A59FA4 (KiEnableKvaShadowing.c)
 * Callees:
 *     KxSetAddressPolicy @ 0x140420AE0 (KxSetAddressPolicy.c)
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
