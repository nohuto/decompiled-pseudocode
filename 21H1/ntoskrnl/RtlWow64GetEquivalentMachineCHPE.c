/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1402C1358
 * Callers:
 *     PsWow64IsMachineSupported @ 0x14064CAE0 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407458C8 (LdrImageDirectoryEntryToLoadConfig.c)
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
