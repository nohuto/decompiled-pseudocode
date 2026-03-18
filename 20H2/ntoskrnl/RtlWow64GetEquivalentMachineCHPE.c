/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1402E545C
 * Callers:
 *     PsWow64IsMachineSupported @ 0x1406927E0 (PsWow64IsMachineSupported.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140756028 (LdrImageDirectoryEntryToLoadConfig.c)
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
