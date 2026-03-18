/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1406AD2EC
 * Callers:
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PspWow64InitThread @ 0x1406AA374 (PspWow64InitThread.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406AD068 (PspPrepareSystemDllInitBlock.c)
 *     PsMapSystemDlls @ 0x1406EF8FC (PsMapSystemDlls.c)
 *     PsThawProcess @ 0x14071C6B0 (PsThawProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140886F3C (DbgkSendSystemDllMessages.c)
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
