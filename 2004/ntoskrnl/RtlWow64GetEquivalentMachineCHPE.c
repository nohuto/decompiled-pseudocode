/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1402FDE38
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PsWow64IsMachineSupported @ 0x1406B5AC0 (PsWow64IsMachineSupported.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140747448 (LdrImageDirectoryEntryToLoadConfig.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlWow64GetEquivalentMachineCHPE(__int16 a1)
{
  __int16 result; // ax

  result = 332;
  if ( a1 != 14948 )
    return a1;
  return result;
}
