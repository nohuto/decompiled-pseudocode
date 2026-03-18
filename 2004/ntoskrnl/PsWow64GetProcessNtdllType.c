/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x14065D7B4
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14065D530 (PspPrepareSystemDllInitBlock.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x1406B5F74 (PsMapSystemDlls.c)
 *     PspWow64InitThread @ 0x1406E53AC (PspWow64InitThread.c)
 *     PsThawProcess @ 0x1406F0A90 (PsThawProcess.c)
 *     DbgkSendSystemDllMessages @ 0x1408813EC (DbgkSendSystemDllMessages.c)
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
