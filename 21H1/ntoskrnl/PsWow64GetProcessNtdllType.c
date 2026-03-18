/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1406F9DCC
 * Callers:
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x14064CF94 (PsMapSystemDlls.c)
 *     PsThawProcess @ 0x1406CF790 (PsThawProcess.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406F9B48 (PspPrepareSystemDllInitBlock.c)
 *     PspWow64InitThread @ 0x1406FC5CC (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1408);
  if ( result )
    return *(unsigned int *)(result + 12);
  return result;
}
