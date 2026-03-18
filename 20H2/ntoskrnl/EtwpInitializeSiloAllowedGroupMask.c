/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x1407A95F8
 * Callers:
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     EtwpMapEnableFlags @ 0x140712098 (EtwpMapEnableFlags.c)
 */

unsigned __int64 EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 0x1600370Fu;
  dword_140CFC81C |= 0x8206u;
  dword_140CFC820 |= 0x10040u;
  dword_140CFC830 |= 0x1FFFFFFFu;
  return EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
}
