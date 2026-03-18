/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x140784B64
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     EtwpMapEnableFlags @ 0x1406EA540 (EtwpMapEnableFlags.c)
 */

unsigned __int64 EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 0x1600370Fu;
  dword_140CFC80C |= 0x8206u;
  dword_140CFC810 |= 0x10040u;
  dword_140CFC820 |= 0x1FFFFFFFu;
  return EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
}
