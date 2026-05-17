/*
 * XREFs of __alloca_probe_16 @ 0x4B2F6500
 * Callers:
 *     _vDbgPrintExWithPrefixInternal@24 @ 0x4B2AB8F1 (_vDbgPrintExWithPrefixInternal@24.c)
 *     _RtlQueryWnfStateData@24 @ 0x4B2AE840 (_RtlQueryWnfStateData@24.c)
 *     _RtlWow64GetProcessMachines@12 @ 0x4B2DBD70 (_RtlWow64GetProcessMachines@12.c)
 *     _RtlWow64IsWowGuestMachineSupported@8 @ 0x4B33A250 (_RtlWow64IsWowGuestMachineSupported@8.c)
 *     _RtlQueryWnfStateDataWithExplicitScope@28 @ 0x4B33BEA0 (_RtlQueryWnfStateDataWithExplicitScope@28.c)
 *     _EtwpCheckForEnoughStackSpace@4 @ 0x4B381503 (_EtwpCheckForEnoughStackSpace@4.c)
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     <none>
 */

void *__usercall _alloca_probe_16@<eax>(int a1@<eax>, int a2@<ecx>)
{
  char v2; // sp
  int v3; // ecx

  v3 = (v2 + 8 - (_BYTE)a1) & 0xF;
  return _chkstk(__CFADD__(v3, a1) ? -1 : v3 + a1, a2);
}
